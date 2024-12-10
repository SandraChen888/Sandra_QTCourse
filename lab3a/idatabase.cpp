#include "idatabase.h"

void IDatabase::ininDatabase()
{
    database=QSqlDatabase::addDatabase("QSQLITE");//添加SQL LITE数据库驱动
    QString aFile = "E:/lenovo/Documents/lab3.db";
    database.setDatabaseName(aFile);//设置数据库名称

    if(!database.open()){//打开数据库
        qDebug()<<"failed to open database";
    }else{
        qDebug()<<"open database is ok";
    }
}

QString IDatabase::userLogin(QString userName, QString password)
{
    //return "loginOK";
    QSqlQuery query;
    query.prepare("select USERNAME,PASSWORD from user where USERNAME = :USER");
    query.bindValue("USER",userName);
    query.exec();
    if(query.first() && query.value("username").isValid()){
        QString passwd = query.value("password").toString();
        if(passwd == password){
            return "loginOK";
        }else{
            return "wrongPassword";
        }
    }else{
        qDebug()<<"no such user";
        return"wrongusername";
    }
}

IDatabase::IDatabase(QObject *parent) : QObject(parent)
{
    ininDatabase();
}
