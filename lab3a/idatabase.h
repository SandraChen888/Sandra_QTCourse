#ifndef IDATABASE_H
#define IDATABASE_H

#include <QObject>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QDataWidgetMapper>

class IDatabase : public QObject
{
    Q_OBJECT
public:

    static IDatabase& getInstance()
    {
        static IDatabase   instance; // Guaranteed to be destroyed.
                              // Instantiated on first use.
        return instance;
    }

    QString userLogin(QString userName,QString password);

private:

    explicit IDatabase(QObject *parent = nullptr);
    IDatabase(IDatabase const&)               = delete;
    void operator=(IDatabase const&)  = delete;

    QSqlDatabase database;

    void ininDatabase();

signals:

public:
    bool initPatientModel();

    QSqlTableModel *patienttabModel;//数据模型

    QItemSelectionModel *thePatientSelection;//选择模型


};

#endif // IDATABASE_H
