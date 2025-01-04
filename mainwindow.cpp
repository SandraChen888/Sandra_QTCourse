#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "aboutdialog.h"
#include "searchdialog.h"
#include "replacedialog.h"
#include "QFileDialog"
#include "QMessageBox"
#include "QTextStream"
#include "QColorDialog"
#include "QFontDialog"
#include <QSettings>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //在 MainWindow 的构造函数中初始化最近文件菜单，并连接相应的信号和槽
    recentFilesMenu = new QMenu(tr("最近文件"), this);
    ui->menu->addMenu(recentFilesMenu);
    connect(recentFilesMenu, &QMenu::triggered, this, &MainWindow::on_recentFile_triggered);

    // 添加清除最近文件记录的菜单项
    QAction *actionClearRecentFiles = new QAction(tr("清除最近文件记录"), this);
    connect(actionClearRecentFiles, &QAction::triggered, this, &MainWindow::on_actionClearRecentFiles_triggered);
    ui->menu->addAction(actionClearRecentFiles);

    // 加载最近文件记录
    loadRecentFiles();
    updateRecentFilesMenu();

    // 更换tabWidget
    tabWidget = new QTabWidget(this);
    tabWidget->setTabsClosable(true);
    setCentralWidget(tabWidget);

    // 添加信号槽
    connect(tabWidget, &QTabWidget::tabCloseRequested, this, &MainWindow::on_tabCloseRequested);

    // 默认添加一个 CodeEditor 标签页
    addNewTab("");

    // 可能没用
    textChanged = false;


    statusLabel.setMaximumWidth(180);
    statusLabel.setText("lenth:"+QString::number(0)+"  lines:"+QString::number(1));
    ui->statusbar->addPermanentWidget(&statusLabel);

    statusCussorLabel.setMaximumWidth(180);
    statusCussorLabel.setText("lenth:"+QString::number(0)+"  Col:"+QString::number(1));
    ui->statusbar->addPermanentWidget(&statusCussorLabel);

    QLabel *author = new QLabel(ui->statusbar);
    author->setText("周志刚");
    ui->statusbar->addPermanentWidget(author);

    ui->actionCopy->setEnabled(false);
    ui->actionBack->setEnabled(false);
    ui->actionCut->setEnabled(false);
    ui->actionRecover->setEnabled(false);
    ui->actionPut->setEnabled(false);

    CodeEditor *editor = currentEditor();
    QPlainTextEdit::LineWrapMode mode = editor->lineWrapMode();

    if(mode == QTextEdit::NoWrap){ //如果不自动换行
        editor->setLineWrapMode(QPlainTextEdit::WidgetWidth);
        ui->actionAutoNextLine->setCheckable(false);
    } else {
        editor->setLineWrapMode(QPlainTextEdit::NoWrap);
        ui->actionAutoNextLine->setCheckable(true);
    }

    ui->actionToolBar->setChecked(true);
    ui->actionStausBar->setChecked(true);
    on_actionShowLine_triggered(false);
}

void MainWindow::openRecentFile(const QString &filePath)
{
    if (!recentFiles.contains(filePath)) {
        recentFiles.removeAll(filePath); // 移除旧的条目
        recentFiles.prepend(filePath);// 添加到列表开头
        if (recentFiles.size() > 10) {
            recentFiles.removeLast();
        }
    }
    updateRecentFilesMenu();
    saveRecentFiles(); // 保存最近文件列表

    // 打开文件的逻辑
    CodeEditor *editor = new CodeEditor(this);
    QFile file(filePath);
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file);
        editor->setPlainText(in.readAll());
        file.close();
    }
    editor->setFilePath(filePath);//记录文件路径
    tabWidget->addTab(editor, QFileInfo(filePath).fileName());
    connect(editor, &CodeEditor::textChanged1, this, &MainWindow::on_currentTab_textChanged);
    QString tabTitle = QFileInfo(filePath).fileName();
    tabWidget->addTab(editor, tabTitle);

    // 设置当前标签页为新建页
    tabWidget->setCurrentWidget(editor);
    this->setWindowTitle(QFileInfo(filePath).absolutePath());

    editor->setTextChanged(false);
}


// 打开文件
void MainWindow::on_actionOpen_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(this,"打开文件",".",tr("Text files (*.txt) ;; All (*.*)"));

    if (fileName.isEmpty()) {
        return; // 用户取消选择
    }

    openRecentFile(fileName);
}

void MainWindow::updateRecentFilesMenu()
{
    recentFilesMenu->clear();
    for (const QString &filePath : recentFiles) {
        QAction *action = new QAction(QFileInfo(filePath).fileName(), this);
        action->setData(filePath);
        connect(action, &QAction::triggered, this, &MainWindow::on_recentFile_triggered);
        recentFilesMenu->addAction(action);
    }
}

void MainWindow::on_recentFile_triggered()
{
    QAction *action = qobject_cast<QAction *>(sender());
    if (action) {
        openRecentFile(action->data().toString());
    }else{
        qDebug()<<"action is null";
    }
}

void MainWindow::clearRecentFiles()
{
    recentFiles.clear();
    updateRecentFilesMenu();
    saveRecentFiles(); // 保存空的最近文件列表
}

void MainWindow::on_actionClearRecentFiles_triggered()
{
    clearRecentFiles();
}

void MainWindow::saveRecentFiles()
{
    QSettings settings("DGUT", "ZzgEditor");
    settings.beginWriteArray("recentFiles");
    for (int i = 0; i < recentFiles.size(); ++i) {
        qDebug()<<recentFiles[i];
        settings.setArrayIndex(i);
        settings.setValue("path", recentFiles[i]);
    }
    settings.endArray();
}

void MainWindow::loadRecentFiles()
{
    QSettings settings("DGUT", "ZzgEditor");
    int size = settings.beginReadArray("recentFiles");
    for (int i = 0; i < size; ++i) {
        settings.setArrayIndex(i);
        recentFiles.append(settings.value("path").toString());
    }
    settings.endArray();
}

CodeEditor *MainWindow::currentEditor()
{
    return qobject_cast<CodeEditor*>(tabWidget->currentWidget());
}

//去除*
QString MainWindow::removeUnsavedIndicator(const QString &title)
{
    // 检查标题是否以 "*" 开头，并去除它
    if (title.startsWith("*")) {
        return title.mid(1); // 去除第一个字符
    }
    return title;
}



MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionAbout_triggered()
{
    AboutDialog dlg;
    dlg.exec();
}


void MainWindow::on_actionSeach_triggered()
{
    SearchDialog dlg(this,ui->textEdit);
    dlg.exec();
}


void MainWindow::on_actionExchange_triggered()
{
    ReplaceDialog dlg(this,ui->textEdit);
    dlg.exec();
}

// *新建按钮槽函数*
void MainWindow::on_actionNew_triggered()
{
    addNewTab("");
}



// *保存当前文件*
void MainWindow::on_actionSave_triggered()
{
    CodeEditor *codeEditor = currentEditor();
    if (!codeEditor) {
        return;
    }
    int tabIndex = tabWidget->indexOf(codeEditor);
    if (tabIndex != -1) {
        qDebug()<<"保存方法里面找不到指定标签的index";
    }

    //测试：这个文件若是没新文件则没有路径
    QString currentFilePath = codeEditor->filePath;
    qDebug()<<currentFilePath;

    if(currentFilePath.isEmpty()){
        QString filename = QFileDialog::getSaveFileName(this,"保存文件",".",
                                                        tr("Text files (*.txt) "));
        if (filename.isEmpty()) {
            return; // 用户取消保存
        }
        qDebug()<<"保存文件名"<<filename;
        currentFilePath = filename;
        codeEditor->setFilePath(currentFilePath);
    }else {
        // 如果文件路径已存在，确保它是一个完整的路径
        if (!QFileInfo(currentFilePath).isAbsolute()) {
            currentFilePath = QDir::currentPath() + "/" + currentFilePath;
        }
    }

    QFile file(currentFilePath);
    if(!file.open(QFile::WriteOnly|QFile::Text)){
        QMessageBox::warning(this,"..","打开保存文件失败");
        return;
    }


    QTextStream out(&file);
    QString text = codeEditor->toPlainText();
    out<<text;
    file.flush();
    file.close();

    this->setWindowTitle(tr("%1 - 编辑器").arg(QFileInfo(currentFilePath).absoluteFilePath()));

    QString tabName = tabWidget->tabText(tabIndex); // 获取标签页的标题

    //处理名字
    if(tabName.startsWith("*新文件")){
        tabName =QFileInfo(codeEditor->filePath).fileName();
    }else{
        tabName = removeUnsavedIndicator(tabName);
    }

    // 设置标签页名字
    tabWidget->setTabText(tabIndex, tabName);

    textChanged = false;
    codeEditor->setTextChanged(false);
}

// 另存为
void MainWindow::on_actionSaveNew_triggered()
{
    QString filename = QFileDialog::getSaveFileName(this,"保存文件",".",
                                                    tr("Text files (*.txt) "));
    QFile file(filename);
    if(!file.open(QFile::WriteOnly|QFile::Text)){
        QMessageBox::warning(this,"..","打开保存文件失败");
        return;
    }

    filePath = filename;

    QTextStream out(&file);
    CodeEditor *editor = currentEditor();
    editor->setFilePath(filePath);
    QString text = editor->toPlainText();
    out<<text;
    file.flush();
    file.close();

    this->setWindowTitle(QFileInfo(filePath).absolutePath());
    editor->setTextChanged(false);

    int tabIndex = tabWidget->indexOf(editor);
    if (tabIndex != -1) {
        qDebug()<<"保存方法里面找不到指定标签的index";
    }
    QString tabName = tabWidget->tabText(tabIndex); // 获取标签页的标题

    //处理名字
    if(tabName.startsWith("*新文件")){
        tabName = QFileInfo(editor->filePath).fileName();
    }else{
        tabName = removeUnsavedIndicator(tabName);
    }

    // 设置标签页名字
    tabWidget->setTabText(tabIndex, tabName);
}

// 这个函数不再需要，因为我们为每个 CodeEditor 连接了信号
void MainWindow::on_textEdit_textChanged()
{
    // if(!textChanged){
    //     this->setWindowTitle("*" + this->windowTitle());
    //     textChanged = true;
    // }
    // statusLabel.setText("lenth:"+QString::number(ui->textEdit->toPlainText().length())+
    //                     "  lines:"+
    //                     QString::number(ui->textEdit->document()->lineCount()));
}

// 监听当前页面变化
void MainWindow::on_currentTab_textChanged()
{
    CodeEditor *editor = qobject_cast<CodeEditor *>(tabWidget->currentWidget());
    if (editor) {
        editor->setTextChanged(true);
        int tabIndex = tabWidget->indexOf(editor);
        QString tabName = tabWidget->tabText(tabIndex); // 获取标签页的标题
        if(!tabName.startsWith("*"))
            tabName = "*"+tabName;
        // 设置标签页名字
        tabWidget->setTabText(tabIndex, tabName);

        if(!windowTitle().startsWith("*"))
            setWindowTitle(editor->textIsChanged ? "*" + windowTitle() : windowTitle().mid(1));
        int length = editor->toPlainText().length();
        int lines = editor->document()->lineCount();
        statusLabel.setText(tr("长度: %1  行数: %2").arg(length).arg(lines));
    }
}

bool MainWindow::userEditConfirmed()
{
    CodeEditor *codeEditor = currentEditor();
    if(codeEditor->textIsChanged){
        QString path = (codeEditor->filePath != "")? filePath : "无标题.txt";
        QMessageBox msg(this);

        msg.setIcon(QMessageBox::Question);
        msg.setWindowTitle("...");
        msg.setWindowFlag(Qt::Drawer);
        msg.setText(QString("是否将更改内容保存到\n")+"\""+filePath+ "\" ?" );
        msg.setStandardButtons(QMessageBox::Yes|QMessageBox::No|QMessageBox::Cancel);

        int r = msg.exec();
        switch (r) {
        case QMessageBox::Yes:
            on_actionSave_triggered();
            break;
        case QMessageBox::No:
            textChanged = false;
            break;
        case QMessageBox::Cancel:
            return false;
        }
    }
    return true;
}

//*新增页面*
void MainWindow::addNewTab(const QString &fileName)
{
    CodeEditor *codeEditor = new CodeEditor();
    codeEditor->setTextChanged(true);
    connect(codeEditor, &CodeEditor::textChanged1, this, &MainWindow::on_currentTab_textChanged);
    // 设置标签标题
    if(fileName.isEmpty()){
        newCount = newCount+1;
    }
    QString tabTitle = fileName.isEmpty() ? tr("新文件 %1").arg(newCount) : QFileInfo(fileName).fileName();

    tabWidget->addTab(codeEditor, tabTitle);

    // 设置当前标签页为新建页
    tabWidget->setCurrentWidget(codeEditor);
}

//撤销
void MainWindow::on_actionBack_triggered()
{
    CodeEditor *codeEditor = currentEditor();
    codeEditor->undo();
}

//恢复
void MainWindow::on_actionRecover_triggered()
{
    CodeEditor *codeEditor = currentEditor();
    codeEditor->redo();
}

//剪切
void MainWindow::on_actionCut_triggered()
{
    CodeEditor *codeEditor = currentEditor();
    codeEditor->cut();
    ui->actionPut->setEnabled(true);
}

//复制
void MainWindow::on_actionCopy_triggered()
{
    CodeEditor *codeEditor = currentEditor();
    codeEditor->copy();
    ui->actionPut->setEnabled(true);
}

//粘贴
void MainWindow::on_actionPut_triggered()
{
    CodeEditor *codeEditor = currentEditor();
    codeEditor->paste();
}

//复制键与剪切使能设置
void MainWindow::on_textEdit_copyAvailable(bool b)
{
    ui->actionCopy->setEnabled(b);
    ui->actionCut->setEnabled(b);
}

//恢复键使能设置
void MainWindow::on_textEdit_redoAvailable(bool b)
{
    ui->actionRecover->setEnabled(b);
}

//撤销键使能设置
void MainWindow::on_textEdit_undoAvailable(bool b)
{
    ui->actionBack->setEnabled(b);
}

//字体颜色
void MainWindow::on_actionFontColor_triggered()
{
    CodeEditor *codeEditor = currentEditor();
    QColor color = QColorDialog::getColor(Qt::black,this,"选择颜色");
    if(color.isValid()){
        codeEditor->setStyleSheet(QString("QPlainTextEdit {color:%1}").arg(color.name()));
    }
}

//
void MainWindow::on_actEditBgColor_triggered()
{
    CodeEditor *codeEditor = currentEditor();
    QColor color = QColorDialog::getColor(Qt::black,this,"选择颜色");
    if(color.isValid()){
        codeEditor->setStyleSheet(QString("QPlainTextEdit {background-color:%1}").arg(color.name()));
    }
}


void MainWindow::on_actBgColor_triggered()
{

}


void MainWindow::on_actionAutoNextLine_triggered()
{

    CodeEditor *codeEditor = currentEditor();

    QPlainTextEdit::LineWrapMode mode = codeEditor->lineWrapMode();

    if(mode == QTextEdit::NoWrap){
        codeEditor->setLineWrapMode(QPlainTextEdit::WidgetWidth);
        ui->actionAutoNextLine->setCheckable(true);
    } else {
        codeEditor->setLineWrapMode(QPlainTextEdit::NoWrap);
        ui->actionAutoNextLine->setCheckable(false);
    }
}


void MainWindow::on_actionFont_triggered()
{
    CodeEditor *codeEditor = currentEditor();

    bool ok = false;
    QFont font = QFontDialog::getFont(&ok,this);

    if(ok)
        codeEditor->setFont(font);
}


void MainWindow::on_actionToolBar_triggered()
{
    bool visable = ui->toolBar->isVisible();
    ui->toolBar->setVisible(!visable);
    ui->actionToolBar->setChecked(!visable);
}


void MainWindow::on_actionStausBar_triggered()
{
    bool visable = ui->statusbar->isVisible();
    ui->statusbar->setVisible(!visable);
    ui->actionStausBar->setChecked(!visable);
}

//全选
void MainWindow::on_actionAllChoose_triggered()
{
    CodeEditor *codeEditor = currentEditor();
    codeEditor->selectAll();
}


void MainWindow::on_actionExit_triggered()
{
    if(userEditConfirmed()){
        exit(0);
    }
}


void MainWindow::on_textEdit_cursorPositionChanged()
{
    CodeEditor *codeEditor = currentEditor();
    int col = 0;
    int ln = 0;
    int flag =-1;
    int pos=codeEditor->textCursor().position();
    QString text = codeEditor->toPlainText();

    for(int i=0;i<pos;i++){
        if(text[i]=='\n'){
            ln++;
            flag=i;
        }
    }
    flag++;
    col = pos-flag;
    statusLabel.setText("lenth:"+QString::number(ln+1)+
                        "  lines:"+
                        QString::number(col+1));
}


void MainWindow::on_actionShowLine_triggered(bool checked)
{
    CodeEditor *codeEditor = currentEditor();
    codeEditor->hideLineNumberArea(!checked);
}

// *关闭页面*
void MainWindow::on_tabCloseRequested(int index)
{
    // 获取要关闭的标签页对应的 QTextEdit
    CodeEditor *codeEditor = qobject_cast<CodeEditor *>(tabWidget->widget(index));
    if (codeEditor) {
        // 检查是否有未保存的更改
        if (codeEditor->textIsChanged) {
            QMessageBox::StandardButton ret = QMessageBox::warning(
                this, tr("关闭文件"),
                tr("文件已修改，是否保存？"),
                QMessageBox::Save | QMessageBox::Discard | QMessageBox::Cancel);
            if (ret == QMessageBox::Save) {
                // 保存文件
                savePage(codeEditor);
                // ...
            } else if (ret == QMessageBox::Cancel) {
                // 用户取消关闭操作
                return;
            }
        }
    }
    // 关闭标签页
    tabWidget->removeTab(index);
}

// 保存指定文件
void MainWindow::savePage(CodeEditor *codeEditor)
{
    if (!codeEditor) {
        return;
    }
    int tabIndex = tabWidget->indexOf(codeEditor);
    if (tabIndex != -1) {
        qDebug()<<"保存方法里面找不到指定标签的index";
    }
    QString currentFilePath = codeEditor->filePath;
    qDebug()<<currentFilePath;
    if(currentFilePath == ""){
        QString filename = QFileDialog::getSaveFileName(this,"保存文件",".",
                                                        tr("Text files (*.txt) "));
        if (filename.isEmpty()) {
            return; // 用户取消保存
        }

        currentFilePath = filename;
        codeEditor->setFilePath(currentFilePath);

    }

    QFile file(currentFilePath);
    if(!file.open(QFile::WriteOnly|QFile::Text)){
        QMessageBox::warning(this,"..","打开保存文件失败");
        return;
    }


    QTextStream out(&file);
    QString text = codeEditor->toPlainText();
    out<<text;
    file.flush();
    file.close();

    this->setWindowTitle(QFileInfo(filePath).absolutePath());

    QString tabName = tabWidget->tabText(tabIndex); // 获取标签页的标题

    //处理名字
    if(tabName.startsWith("*新文件")){
        tabName =QFileInfo(codeEditor->filePath).fileName() ;
    }else{
        tabName = removeUnsavedIndicator(tabName);
    }

    // 设置标签页名字
    tabWidget->setTabText(tabIndex, tabName);

    textChanged = false;
    codeEditor->setTextChanged(false);
}

