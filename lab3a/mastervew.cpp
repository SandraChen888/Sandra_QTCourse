#include "mastervew.h"
#include "ui_mastervew.h"
#include <QDebug>
#include "idatabase.h"

MasterVew::MasterVew(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MasterVew)
{
    ui->setupUi(this);

    this->setWindowFlag(Qt::FramelessWindowHint);

    goLoginView();

    IDatabase::getInstance();
}

MasterVew::~MasterVew()
{
    delete ui;
}

void MasterVew::goLoginView()
{
    qDebug() << "goLoginView";
    loginView = new LoginView(this);
    pushWidgetToStackView(loginView);

    connect(loginView,SIGNAL(loginSuccess()),this,SLOT(goWelcomeView()));
}

void MasterVew::goWelcomeView()
{
    qDebug() << "goLoginView";
    welcomeView = new WelcomeView(this);
    pushWidgetToStackView(welcomeView);

    connect(welcomeView,SIGNAL(goDoctorView()),this,SLOT(goDoctorView()));
    connect(welcomeView,SIGNAL(goDepartmentView()),this,SLOT(goDepartmentView()));
    connect(welcomeView,SIGNAL(goPatientView()),this,SLOT(goPatientView()));
}

void MasterVew::goDoctorView()
{
    qDebug() << "goLoginView";
    doctorView = new DoctorView(this);
    pushWidgetToStackView(doctorView);
}

void MasterVew::goDepartmentView()
{
    qDebug() << "goLoginView";
    departmentView = new DepartmentView(this);
    pushWidgetToStackView(departmentView);
}

void MasterVew::goPatienEditView()
{
    qDebug() << "goLoginView";
    patientEditView = new PatientEditView(this);
    pushWidgetToStackView(patientEditView);
}

void MasterVew::goPatientView()
{
    qDebug() << "goLoginView";
    patientView = new PatientView(this);
    pushWidgetToStackView(patientView);

    connect(patientView,SIGNAL(goPatienEditView()),this,SLOT(goPatienEditView()));
}

void MasterVew::goPreviousView()
{
    int count = ui->stackedWidget->count();

    if(count > 1){
        ui->stackedWidget->setCurrentIndex(count-2);
        ui->labelTitle->setText(ui->stackedWidget->currentWidget()->windowTitle());

        QWidget *widget = ui->stackedWidget->widget(count-1);
        ui->stackedWidget->removeWidget(widget);
        delete widget;
    }
}

void MasterVew::pushWidgetToStackView(QWidget *widget)
{
    ui->stackedWidget->addWidget(widget);
    int count = ui->stackedWidget->count();
    ui->stackedWidget->setCurrentIndex(count-1);//总是显示最新加入的View
    ui->labelTitle->setText(widget->windowTitle());
}


void MasterVew::on_btnback_clicked()
{
    goPreviousView();
}


void MasterVew::on_stackedWidget_currentChanged(int arg1)
{
    int count = ui->stackedWidget->count();
    if(count > 1 ){
        ui->btnback->setEnabled(true);
    }
    else{
        ui->btnback->setEnabled(false);
    }

    QString title = ui->stackedWidget->currentWidget()->windowTitle();

    if(title == "欢迎"){
        ui->btnLogout->setEnabled(true);
        ui->btnback->setEnabled(false);
        //ui->btnback->hide();
    }else{
        ui->btnLogout->setEnabled(false);
    }

}


void MasterVew::on_btnLogout_clicked()
{
    goPreviousView();
}
