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

void MasterVew::goLoginView()
{

}

void MasterVew::goWelcomeView()
{

}

void MasterVew::goDoctorView()
{

}

void MasterVew::goDepartment()
{

}

void MasterVew::goPatienEditView()
{

}

void MasterVew::goPatientView()
{

}

void MasterVew::goPreviousView()
{

}

