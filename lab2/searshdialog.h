#ifndef SEARSHDIALOG_H
#define SEARSHDIALOG_H

#include <QDialog>

namespace Ui {
class SearshDialog;
}

class SearshDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SearshDialog(QWidget *parent = nullptr);
    ~SearshDialog();

private:
    Ui::SearshDialog *ui;
};

#endif // SEARSHDIALOG_H
