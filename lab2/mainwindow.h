#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}


class MainWindow : public QMainWindow
{
    Q_OBJECT


public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
    void on_actionNew_triggered();
    void on_actionOpen_triggered();
    void on_actionSave_triggered();
    void on_actionSaveAs_triggered();
    void on_actionClose_triggered();
    void on_actionExit_triggered();
    void on_actionUndo_triggered();
    void on_actionRedo_triggered();
    void on_actionCut_triggered();
    void on_actionCopy_triggered();
    void on_actionPaste_triggered();
    void on_actionSelectAll_triggered();
    void on_actionFind_triggered();
    void on_actionReplace_triggered();
    void on_actionToolbar_triggered();

private:
    Ui::MainWindow *ui;
    QTabWidget *tabWidget;
    QStringList filePaths; // 存储打开文件的路径
    int currentIndex; // 当前选中的标签页索引
    bool isTextChanged; // 标记当前标签页文本是否已修改

    void setupEditorConnections(CodeEditor *editor);
    bool confirmSaveChanges();
    void updateTabTitle(int index, bool changed);
    void updateStatusBar(int index);
    QString getCurrentFilePath();
    void openFile(const QString &filePath);
};

#endif // MAINWINDOW_H
