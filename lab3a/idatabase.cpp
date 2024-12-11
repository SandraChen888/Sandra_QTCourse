#include "idatabase.h"

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
        qDebug() << "open database is ok";
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
