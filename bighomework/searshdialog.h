#ifndef SEARSHDIALOG_H
#define SEARSHDIALOG_H

#include <QDialog>
#include <QPlainTextEdit>

namespace Ui {
class SearshDialog;
}

class SearshDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SearshDialog(QWidget *parent = nullptr, QPlainTextEdit * textEdit = nullptr );
    ~SearshDialog();

private slots:
    void on_btFindNext_clicked();

    void on_btCancel_clicked();

private:
    Ui::SearshDialog *ui;

    QPlainTextEdit *pTextEdit;
};

#endif // SEARSHDIALOG_H
