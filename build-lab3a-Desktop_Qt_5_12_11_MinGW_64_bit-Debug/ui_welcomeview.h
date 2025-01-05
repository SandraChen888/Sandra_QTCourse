/********************************************************************************
** Form generated from reading UI file 'welcomeview.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOMEVIEW_H
#define UI_WELCOMEVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WelcomeView
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnDepartment;
    QPushButton *btnDoctor;
    QPushButton *btnPatient;

    void setupUi(QWidget *WelcomeView)
    {
        if (WelcomeView->objectName().isEmpty())
            WelcomeView->setObjectName(QString::fromUtf8("WelcomeView"));
        WelcomeView->resize(636, 274);
        layoutWidget = new QWidget(WelcomeView);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 80, 641, 102));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btnDepartment = new QPushButton(layoutWidget);
        btnDepartment->setObjectName(QString::fromUtf8("btnDepartment"));
        btnDepartment->setEnabled(true);
        btnDepartment->setMinimumSize(QSize(100, 100));
        btnDepartment->setMaximumSize(QSize(100, 100));
        btnDepartment->setAutoRepeatInterval(100);

        horizontalLayout->addWidget(btnDepartment);

        btnDoctor = new QPushButton(layoutWidget);
        btnDoctor->setObjectName(QString::fromUtf8("btnDoctor"));
        btnDoctor->setMinimumSize(QSize(100, 100));
        btnDoctor->setMaximumSize(QSize(100, 100));

        horizontalLayout->addWidget(btnDoctor);

        btnPatient = new QPushButton(layoutWidget);
        btnPatient->setObjectName(QString::fromUtf8("btnPatient"));
        btnPatient->setMinimumSize(QSize(100, 100));
        btnPatient->setMaximumSize(QSize(100, 100));

        horizontalLayout->addWidget(btnPatient);


        retranslateUi(WelcomeView);

        QMetaObject::connectSlotsByName(WelcomeView);
    } // setupUi

    void retranslateUi(QWidget *WelcomeView)
    {
        WelcomeView->setWindowTitle(QApplication::translate("WelcomeView", "\346\254\242\350\277\216", nullptr));
        btnDepartment->setText(QApplication::translate("WelcomeView", "\347\247\221\345\256\244\347\256\241\347\220\206", nullptr));
        btnDoctor->setText(QApplication::translate("WelcomeView", "\345\214\273\347\224\237\347\256\241\347\220\206", nullptr));
        btnPatient->setText(QApplication::translate("WelcomeView", "\346\202\243\350\200\205\347\256\241\347\220\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WelcomeView: public Ui_WelcomeView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOMEVIEW_H
