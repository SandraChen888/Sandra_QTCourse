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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WelcomeView
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnDepartment;
    QPushButton *btnDoctor;
    QPushButton *btnPatient;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *WelcomeView)
    {
        if (WelcomeView->objectName().isEmpty())
            WelcomeView->setObjectName(QString::fromUtf8("WelcomeView"));
        WelcomeView->resize(400, 300);
        widget = new QWidget(WelcomeView);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(30, 0, 361, 311));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnDepartment = new QPushButton(widget);
        btnDepartment->setObjectName(QString::fromUtf8("btnDepartment"));
        btnDepartment->setEnabled(true);
        btnDepartment->setAutoRepeatInterval(100);

        horizontalLayout->addWidget(btnDepartment);

        btnDoctor = new QPushButton(widget);
        btnDoctor->setObjectName(QString::fromUtf8("btnDoctor"));

        horizontalLayout->addWidget(btnDoctor);

        btnPatient = new QPushButton(widget);
        btnPatient->setObjectName(QString::fromUtf8("btnPatient"));

        horizontalLayout->addWidget(btnPatient);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


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
