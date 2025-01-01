#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QTabWidget>
#include <QStringList>
#include <codeeditor.h>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    CodeEditor* currentEditor();
    QString removeUnsavedIndicator(const QString &title);

    void savePage(CodeEditor *codeEditor);

private slots:
    void on_actionAbout_triggered();

    void on_actionSeach_triggered();

    void on_actionExchange_triggered();

    void on_actionNew_triggered();

    void on_actionOpen_triggered();

    void on_actionSave_triggered();

    void on_actionSaveNew_triggered();

    void on_textEdit_textChanged();

    void on_actionBack_triggered();

    void on_actionRecover_triggered();

    void on_actionCut_triggered();

    void on_actionCopy_triggered();

    void on_actionPut_triggered();

    void on_textEdit_copyAvailable(bool b);

    void on_textEdit_redoAvailable(bool b);

    void on_textEdit_undoAvailable(bool b);

    void on_actionFontColor_triggered();

    void on_actEditBgColor_triggered();

    void on_actBgColor_triggered();

    void on_actionAutoNextLine_triggered();

    void on_actionFont_triggered();

    void on_actionToolBar_triggered();

    void on_actionStausBar_triggered();

    void on_actionAllChoose_triggered();

    void on_actionExit_triggered();

    void on_textEdit_cursorPositionChanged();

    void on_actionShowLine_triggered(bool checked);

    void on_tabCloseRequested(int index);

    void on_currentTab_textChanged();

private:
    Ui::MainWindow *ui;

    QLabel statusCussorLabel;
    QLabel statusLabel;
    bool textChanged;// 原来用于跟踪是否有标签页已被修改
    QTabWidget *tabWidget;
    int newCount=0;
    QString filePath;

    bool userEditConfirmed();
    void addNewTab(const QString &fileName);
};


#endif // MAINWINDOW_H
