#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QVBoxLayout>
#include <QTabWidget>
#include <QMenuBar>
#include <QMenu>
#include <QToolBar>
#include <QStatusBar>
#include <QAction>
#include <QFileDialog>
#include <QMessageBox>
#include <QTextStream>
#include <QFile>
#include <QCloseEvent>
#include <QTextEdit>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
      ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // 创建 QTabWidget
    QTabWidget *tabWidget = new QTabWidget(this);
    setCentralWidget(tabWidget);

    // 创建菜单栏
    QMenuBar *menuBar = new QMenuBar(this);
    setMenuBar(menuBar);

    // 文件菜单
    QMenu *fileMenu = new QMenu(tr("文件(&F)"), this);
    menuBar->addMenu(fileMenu);

    QAction *actionNew = new QAction(tr("新建(&N)"), this);
    actionNew->setShortcut(QKeySequence::New);
    fileMenu->addAction(actionNew);
    connect(actionNew, &QAction::triggered, this, &MainWindow::on_actionNew_triggered);

    QAction *actionOpen = new QAction(tr("打开(&O)"), this);
    actionOpen->setShortcut(QKeySequence::Open);
    fileMenu->addAction(actionOpen);
    connect(actionOpen, &QAction::triggered, this, &MainWindow::on_actionOpen_triggered);

    QAction *actionSave = new QAction(tr("保存(&S)"), this);
    actionSave->setShortcut(QKeySequence::Save);
    fileMenu->addAction(actionSave);
    connect(actionSave, &QAction::triggered, this, &MainWindow::on_actionSave_triggered);

    QAction *actionSaveAs = new QAction(tr("另存为(&A)"), this);
    actionSaveAs->setShortcut(QKeySequence::SaveAs);
    fileMenu->addAction(actionSaveAs);
    connect(actionSaveAs, &QAction::triggered, this, &MainWindow::on_actionSaveAs_triggered);

    QAction *actionClose = new QAction(tr("关闭(&C)"), this);
    actionClose->setShortcut(QKeySequence::Close);
    fileMenu->addAction(actionClose);
    connect(actionClose, &QAction::triggered, this, &MainWindow::on_actionClose_triggered);

    QAction *actionExit = new QAction(tr("退出(&X)"), this);
    actionExit->setShortcut(QKeySequence::Quit);
    fileMenu->addAction(actionExit);
    connect(actionExit, &QAction::triggered, this, &MainWindow::on_actionExit_triggered);

    // 编辑菜单
    QMenu *editMenu = new QMenu(tr("编辑(&E)"), this);
    menuBar->addMenu(editMenu);

    QAction *actionUndo = new QAction(tr("撤销(&U)"), this);
    actionUndo->setShortcut(QKeySequence::Undo);
    editMenu->addAction(actionUndo);
    connect(actionUndo, &QAction::triggered, this, &MainWindow::on_actionUndo_triggered);

    QAction *actionRedo = new QAction(tr("恢复(&R)"), this);
    actionRedo->setShortcut(QKeySequence::Redo);
    editMenu->addAction(actionRedo);
    connect(actionRedo, &QAction::triggered, this, &MainWindow::on_actionRedo_triggered);

    QAction *actionCut = new QAction(tr("剪切(&T)"), this);
    actionCut->setShortcut(QKeySequence::Cut);
    editMenu->addAction(actionCut);
    connect(actionCut, &QAction::triggered, this, &MainWindow::on_actionCut_triggered);

    QAction *actionCopy = new QAction(tr("复制(&C)"), this);
    actionCopy->setShortcut(QKeySequence::Copy);
    editMenu->addAction(actionCopy);
    connect(actionCopy, &QAction::triggered, this, &MainWindow::on_actionCopy_triggered);

    QAction *actionPaste = new QAction(tr("粘贴(&P)"), this);
    actionPaste->setShortcut(QKeySequence::Paste);
    editMenu->addAction(actionPaste);
    connect(actionPaste, &QAction::triggered, this, &MainWindow::on_actionPaste_triggered);

    QAction *actionSelectAll = new QAction(tr("全选(&A)"), this);
    actionSelectAll->setShortcut(QKeySequence::SelectAll);
    editMenu->addAction(actionSelectAll);
    connect(actionSelectAll, &QAction::triggered, this, &MainWindow::on_actionSelectAll_triggered);

    QAction *actionFind = new QAction(tr("查找(&F)"), this);
    actionFind->setShortcut(QKeySequence::Find);
    editMenu->addAction(actionFind);
    connect(actionFind, &QAction::triggered, this, &MainWindow::on_actionFind_triggered);

    QAction *actionReplace = new QAction(tr("替换(&R)"), this);
    actionReplace->setShortcut(QKeySequence::Replace);
    editMenu->addAction(actionReplace);
    connect(actionReplace, &QAction::triggered, this, &MainWindow::on_actionReplace_triggered);


    // 查看菜单
    QMenu *viewMenu = new QMenu(tr("查看(&V)"), this);
    menuBar->addMenu(viewMenu);

    QAction *actionToolbar = new QAction(tr("工具栏(&T)"), this);
    actionToolbar->setCheckable(true);
    viewMenu->addAction(actionToolbar);
    connect(actionToolbar, &QAction::triggered, this, &MainWindow::on_actionToolbar_triggered);

    QAction *actionStatusbar = new QAction(tr("状态栏(&S)"), this);
    actionStatusbar->setCheckable(true);
    viewMenu->addAction(actionStatusbar);
    connect(actionStatusbar, &QAction::triggered, this, &MainWindow::on_actionStatusbar_triggered);


    // 帮助菜单
    QMenu *helpMenu = new QMenu(tr("帮助(&H)"), this);
    menuBar->addMenu(helpMenu);

    QAction *actionAbout = new QAction(tr("关于(&A)"), this);
    helpMenu->addAction(actionAbout);
    connect(actionAbout, &QAction::triggered, this, &MainWindow::on_actionAbout_triggered);


    // 创建工具栏
    QToolBar *toolBar = addToolBar(tr("工具栏"));
    toolBar->addAction(actionNew);
    toolBar->addAction(actionOpen);
    toolBar->addAction(actionSave);
    toolBar->addAction(actionSaveAs);
    toolBar->addAction(actionClose);
    toolBar->addAction(actionUndo);
    toolBar->addAction(actionRedo);
    toolBar->addAction(actionCut);
    toolBar->addAction(actionCopy);
    toolBar->addAction(actionPaste);
    toolBar->addAction(actionSelectAll);
    toolBar->addAction(actionFind);
    toolBar->addAction(actionReplace);
    toolBar->addAction(actionToolbar);
    toolBar->addAction(actionStatusbar);


    // 创建状态栏
    QStatusBar *statusBar = new QStatusBar(this);
    setStatusBar(statusBar);


    // 初始化时添加一个空的标签页
    on_actionNew_triggered();
}

MainWindow::~MainWindow()
{
    delete ui;
}


// 以下是各种槽函数的实现示例，你可以根据自己的需求完善它们
void MainWindow::on_actionNew_triggered()
{
    QTextEdit *textEdit = new QTextEdit();
    int index = tabWidget->addTab(textEdit, tr("未命名"));
    tabWidget->setCurrentIndex(index);
}


void MainWindow::on_actionOpen_triggered()
{
    QString filePath = QFileDialog::getOpenFileName(this, tr("打开文件"), "", tr("文本文件 (*.txt);;所有文件 (*.*)"));
    if (!filePath.isEmpty()) {
        QFile file(filePath);
        if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
            QTextStream in(&file);
            QString content = in.readAll();
            file.close();

            QTextEdit *textEdit = new QTextEdit();
            textEdit->setText(content);
            int index = tabWidget->addTab(textEdit, QFileInfo(filePath).fileName());
            tabWidget->setCurrentIndex(index);
        } else {
            QMessageBox::warning(this, tr("打开文件失败"), tr("无法打开文件: ") + filePath);
        }
    }
}


void MainWindow::on_actionSave_triggered()
{
    int index = tabWidget->currentIndex();
    QWidget *widget = tabWidget->currentWidget();
    if (index >= 0 && widget) {
        QTextEdit *textEdit = qobject_cast<QTextEdit *>(widget);
        if (textEdit) {
            QString filePath = QFileDialog::getSaveFileName(this, tr("保存文件"), "", tr("文本文件 (*.txt);;所有文件 (*.*)"));
            if (!filePath.isEmpty()) {
                QFile file(filePath);
                if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
                    QTextStream out(&file);
                    out << textEdit->toPlainText();
                    file.close();
                    tabWidget->setTabText(index, QFileInfo(filePath).fileName());
                } else {
                    QMessageBox::warning(this, tr("保存文件失败"), tr("无法保存文件: ") + filePath);
                }
            }
        }
    }
}


void MainWindow::on_actionSaveAs_triggered()
{
    int index = tabWidget->currentIndex();
    QWidget *widget = tabWidget->currentWidget();
    if (index >= 0 && widget) {
        QTextEdit *textEdit = qobject_cast<QTextEdit *>(widget);
        if (textEdit) {
            QString filePath = QFileDialog::getSaveFileName(this, tr("另存为"), "", tr("文本文件 (*.txt);;所有文件 (*.*)"));
            if (!filePath.isEmpty()) {
                QFile file(filePath);
                if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
                    QTextStream out(&file);
                    out << textEdit->toPlainText();
                    file.close();
                    tabWidget->setTabText(index, QFileInfo(filePath).fileName());
                } else {
                    QMessageBox::warning(this, tr("另存为文件失败"), tr("无法另存为文件: ") + filePath);
                }
            }
        }
    }
}


void MainWindow::on_actionClose_triggered()
{
    int index = tabWidget->currentIndex();
    if (index >= 0) {
        QWidget *widget = tabWidget->widget(index);
        tabWidget->removeTab(index);
        delete widget;
    }
}


void MainWindow::on_actionExit_triggered()
{
    close();
}


void MainWindow::on_actionUndo_triggered()
{
    QWidget *widget = tabWidget->currentWidget();
    if (widget) {
        QTextEdit *textEdit = qobject_cast<QTextEdit *>(widget);
        if (textEdit) {
            textEdit->undo();
        }
    }
}


void MainWindow::on_actionRedo_triggered()
{
    QWidget *widget = tabWidget->currentWidget();
    if (widget) {
        QTextEdit *textEdit = qobject_cast<QTextEdit *>(widget);
        if (textEdit) {
            textEdit->redo();
        }
    }
}


void MainWindow::on_actionCut_triggered()
{
    QWidget *widget = tabWidget->currentWidget();
    if (widget) {
        QTextEdit *textEdit = qobject_cast<QTextEdit *>(widget);
        if (textEdit) {
            textEdit->cut();
        }
    }
}


void MainWindow::on_actionCopy_triggered()
{
    QWidget *widget = tabWidget->currentWidget();
    if (widget) {
        QTextEdit *textEdit = qobject_cast<QTextEdit *>(widget);
        if (textEdit) {
            textEdit->copy();
        }
    }
}


void MainWindow::on_actionPaste_triggered()
{
    QWidget *widget = tabWidget->currentWidget();
    if (widget) {
        QTextEdit *textEdit = qobject_cast<QTextEdit *>(widget);
        if (textEdit) {
            textEdit->paste();
        }
    }
}


void MainWindow::on_actionSelectAll_triggered()
{
    QWidget *widget = tabWidget->currentWidget();
    if (widget) {
        QTextEdit *textEdit = qobject_cast<QTextEdit *>(widget);
        if (textEdit) {
            textEdit->selectAll();
        }
    }
}


void MainWindow::on_actionFind_triggered()
{
    // 实现查找功能
}


void MainWindow::on_actionReplace_triggered()
{
    // 实现替换功能
}


void MainWindow::on_actionToolbar_triggered()
{
    QAction *action = qobject_cast<QAction *>(sender());
    if (action) {
        bool visible = action->isChecked();
        // 假设工具栏的名称是 toolBar
        ui->toolBar->setVisible(visible);
    }
}


void MainWindow::on_actionStatusbar_triggered()
{
    QAction *action = qobject_cast<QAction *>(sender());
    if (action) {
        bool visible = action->isChecked();
        statusBar()->setVisible(visible);
    }
}


void MainWindow::on_actionAbout_triggered()
{
    QMessageBox::information(this, tr("关于"), tr("这是一个简单的文本编辑器"));
}


// 处理窗口关闭事件，例如询问是否保存未保存的更改
void MainWindow::closeEvent(QCloseEvent *event)
{
    // 可以添加逻辑询问用户是否保存未保存的更改
    event->accept();
}
