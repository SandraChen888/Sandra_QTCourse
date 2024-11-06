#include "searshdialog.h"
#include "ui_searshdialog.h"

SearshDialog::SearshDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SearshDialog)
{
    ui->setupUi(this);
}

SearshDialog::~SearshDialog()
{
    delete ui;
}
