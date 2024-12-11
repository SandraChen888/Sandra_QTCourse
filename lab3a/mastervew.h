#ifndef MASTERVEW_H
#define MASTERVEW_H

#include <QWidget>
#include "loginview.h"
#include "doctorview.h"
#include "departmentview.h"
#include "patienteditview.h"
#include "patientview.h"
#include "welcomeview.h"


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
    void goDepartmentView();
    void goPatienEditView(int rowNo);
    void goPatientView();
    void goPreviousView();

private slots:
    void on_btnback_clicked();

    void on_stackedWidget_currentChanged(int arg1);

    void on_btnLogout_clicked();

private:
    void pushWidgetToStackView(QWidget *widget);

    Ui::MasterVew *ui;

    WelcomeView *welcomeView;
    DoctorView *doctorView;
    PatientView *patientView;
    DepartmentView *departmentView;
    LoginView *loginView;
    PatientEditView *patientEditView;
};
#endif // MASTERVEW_H
