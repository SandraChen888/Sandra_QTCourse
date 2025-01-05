#include "idatabase.h"
#include <QDateTime>
#include <QUuid>

//void IDatabase::ininDatabase()
//{
//    database = QSqlDatabase::addDatabase("QSQLITE"); //添加SQL LITE数据库驱动
//    QString aFile = "E:/lenovo/Documents/lab3.db";
//    database.setDatabaseName(aFile);//设置数据库名称

//    if (!database.open()) { //打开数据库
//        qDebug() << "failed to open database";
//    } else {
//        qDebug() << "open database is ok" << database.connectionName();
//    }
//}

void IDatabase::ininDatabase()
{
    database = QSqlDatabase::addDatabase("QSQLITE"); //添加SQL LITE数据库驱动
    QString aFile = "E:/lenovo/Documents/lab3.db";
    database.setDatabaseName(aFile);

    if (!database.open()) { //打开数据库
        qDebug() << "failed to open database";
    } else
        qDebug() << "open database is ok"<<database.connectionName();
}

bool IDatabase::initPatientModel()
{
    patienttabModel = new QSqlTableModel(this,database);
    patienttabModel->setTable("Patient");
    patienttabModel->setEditStrategy(QSqlTableModel::OnManualSubmit);//数据保存方式，OnManualSubmit，OnRowChange
    patienttabModel->setSort(patienttabModel->fieldIndex("name"),Qt::AscendingOrder);//排序
    if(!(patienttabModel->select()))//查询数据
        return false;

    thePatientSelection = new QItemSelectionModel(patienttabModel);
    return true;
}

int IDatabase::addNewPatient()
{
    patienttabModel->insertRow(patienttabModel->rowCount(),QModelIndex());//在末尾添加一个记录
    QModelIndex curIndex = patienttabModel->index(patienttabModel->rowCount() - 1,1);//创建最后一行的ModelIndex

    int curRecNo = curIndex.row();
    QSqlRecord curRec = patienttabModel->record(curRecNo);
    curRec.setValue("CREATEDTIMESTAMP",QDateTime::currentDateTime().toString("yyyy-MM-dd"));
    curRec.setValue("ID",QUuid::createUuid().toString(QUuid::WithoutBraces));

    patienttabModel->setRecord(curRecNo,curRec);

    return curIndex.row();
}

bool IDatabase::searchPatient(QString filter)
{
    patienttabModel->setFilter(filter);
    return patienttabModel->select();
}

bool IDatabase::deleteCurrentPatient()
{
    QModelIndex curIndex = thePatientSelection->currentIndex();//获取当前选择单元格的模型索引
    patienttabModel->removeRow(curIndex.row());
    patienttabModel->submitAll();
    patienttabModel->select();
}

bool IDatabase::submitPatientEdit()
{
    return patienttabModel->submitAll();
}

void IDatabase::revertPatient()
{
    patienttabModel->revertAll();
}

//QString IDatabase::userLogin(QString userName, QString password)
//{
//    //return "loginOK";
//    QSqlQuery query;//查询当前记录的所有字段
//    query.prepare("select username,password from user where username = :USER");
//    query.bindValue(":USER", userName);
//    query.exec();
//    //qDebug() <<query.lastQuery() <<query.first();
//    if (query.first() && query.value("username").isValid()) {
//        QString passwd = query.value("password").toString();
//        if (passwd == password) {
//            return "loginOK";
//        } else {
//            qDebug() << "wrong password";
//            return "wrongPassword";
//        }

//    } else {
//        qDebug() << "no such user";
//        return "wrongUsername";
//    }
//}

QString IDatabase::userLogin(QString userName, QString password)
{
    //return "loginOK";
    QSqlQuery query;//查询当前记录的所有字段
    query.prepare("select username,password from user where username = :USER");
    query.bindValue(":USER", userName);
    query.exec();
    //qDebug() <<query.lastQuery() <<query.first();
    if (query.first() && query.value("username").isValid()) {
        QString passwd = query.value("password").toString();
        if (passwd == password) {
            qDebug()<<"login ok";
            return "loginOK";
        } else {
            qDebug() << "wrong password";
            return "wrongPassword";
        }

    } else {
        qDebug() << "no such user";
        return "wrongUsername";
    }
}

IDatabase::IDatabase(QObject *parent) : QObject(parent)
{
    ininDatabase();
}
