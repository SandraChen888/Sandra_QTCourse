#ifndef MASTERVEW_H
#define MASTERVEW_H

#include <QWidget>


QT_BEGIN_NAMESPACE
namespace Ui { class MasterVew; }
QT_END_NAMESPACE

class MasterVew : public QWidget
{
    Q_OBJECT

public:
    MasterVew(QWidget *parent = nullptr);
    ~MasterVew();

public slots:
    void goLoginView();
    void goWelcomeView();
    void goDoctorView();
    void goDepartment();
    void goPatienEditView();
    void goPatientView();
    void goPreviousView();

private:
    Ui::MasterVew *ui;
};
#endif // MASTERVEW_H
