#include "searshdialog.h"
#include "ui_searshdialog.h"
#include <QMessageBox>

SearshDialog::SearshDialog(QWidget *parent, QPlainTextEdit * textEdit ) :
    QDialog(parent),
    ui(new Ui::SearshDialog)
{
    ui->setupUi(this);

    pTextEdit = textEdit;
    ui->rbDown->setChecked(true);
}

SearshDialog::~SearshDialog()
{
    delete ui;
}

void SearshDialog::on_btFindNext_clicked()
{
    QString target = ui->SearshText->text();
    if (target == "" || pTextEdit == nullptr)
        return;

    QString text = pTextEdit->toPlainText();
    QTextCursor c = pTextEdit->textCursor();
    int index = -1;

    if (ui->rbDown->isChecked()) {
        index = text.indexOf(target, c.position(), ui->cbCase->isChecked() ? Qt::CaseSensitive : Qt::CaseInsensitive);
        if (index >= 0 ) {
            c.setPosition(index);
            c.setPosition(index + target.length(), QTextCursor::KeepAnchor);

            pTextEdit->setTextCursor(c);
        }
    } else if (ui->rbUp->isChecked()) {
        index = text.lastIndexOf(target, c.position() - text.length() - 1,
                                 ui->cbCase->isChecked() ? Qt::CaseSensitive : Qt::CaseInsensitive);
        if (index >= 0) {
            c.setPosition(index  + target.length());
            c.setPosition(index, QTextCursor::KeepAnchor);

            pTextEdit->setTextCursor(c);
        }
        if(index < 0){
            QMessageBox msg(this);
            msg.setWindowTitle("记事本");
            msg.setText(QString("找不到 ")+target);
            msg.setWindowFlag(Qt::Drawer);
            msg.setIcon(QMessageBox::Information);
            msg.setStandardButtons(QMessageBox::Ok);
            msg.exec();
        }
    }
}


void SearshDialog::on_btCancel_clicked()
{
    accept();
}

