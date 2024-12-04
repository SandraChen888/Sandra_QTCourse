#include "mastervew.h"
#include "ui_mastervew.h"

MasterVew::MasterVew(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MasterVew)
{
    ui->setupUi(this);
}

MasterVew::~MasterVew()
{
    delete ui;
}

