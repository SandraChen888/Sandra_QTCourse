#include "patienteditview.h"
#include "ui_patienteditview.h"
#include "idatabase.h"
#include "mastervew.h"
#include <QSql>
#include <QSqlTableModel>
#include <QSqlDatabase>

PatientEditView::PatientEditView(QWidget *parent,int index) :
    QWidget(parent),
    ui(new Ui::PatientEditView)
{
    ui->setupUi(this);

    dataMapper = new QDataWidgetMapper();
    QSqlTableModel *tabModel = IDatabase::getInstance().patienttabModel;
    dataMapper->setModel(IDatabase::getInstance().patienttabModel);
    dataMapper->setSubmitPolicy(QDataWidgetMapper::AutoSubmit);

    dataMapper->addMapping(ui->dbEditID,tabModel->fieldIndex("ID"));
    dataMapper->addMapping(ui->dbEditName,tabModel->fieldIndex("NAME"));
    dataMapper->addMapping(ui->dbEditIDCard,tabModel->fieldIndex("ID_CARD"));
    dataMapper->addMapping(ui->dbSpinHight,tabModel->fieldIndex("Hight"));
    dataMapper->addMapping(ui->dbSpinWeight,tabModel->fieldIndex("WEIGHT"));
    dataMapper->addMapping(ui->dbEditMobile,tabModel->fieldIndex("MOBILEPHONE"));
    dataMapper->addMapping(ui->dbDataEditDOB,tabModel->fieldIndex("DOB"));
    dataMapper->addMapping(ui->dbComboSex,tabModel->fieldIndex("SEX"));
    dataMapper->addMapping(ui->dbCreatedTimeStamp,tabModel->fieldIndex("CREATEDTIMESTAMP"));

    dataMapper->setCurrentIndex(index);
}

PatientEditView::~PatientEditView()
{
    delete ui;
}

void PatientEditView::on_pushButton_clicked()
{
    IDatabase::getInstance().revertPatient();
    emit goPreviousView();
}


void PatientEditView::on_pushButton_2_clicked()
{
    IDatabase::getInstance().submitPatientEdit();
    emit goPreviousView();
}

