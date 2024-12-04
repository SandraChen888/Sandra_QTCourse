#include "mastervew.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MasterVew w;
    w.show();
    return a.exec();
}
