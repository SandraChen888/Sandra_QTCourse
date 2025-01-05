/********************************************************************************
** Form generated from reading UI file 'mastervew.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MASTERVEW_H
#define UI_MASTERVEW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MasterVew
{
public:
    QStackedWidget *stackedWidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnback;
    QSpacerItem *horizontalSpacer;
    QLabel *labelTitle;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnLogout;

    void setupUi(QWidget *MasterVew)
    {
        if (MasterVew->objectName().isEmpty())
            MasterVew->setObjectName(QString::fromUtf8("MasterVew"));
        MasterVew->resize(822, 456);
        stackedWidget = new QStackedWidget(MasterVew);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(10, 50, 801, 391));
        layoutWidget = new QWidget(MasterVew);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 801, 26));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btnback = new QPushButton(layoutWidget);
        btnback->setObjectName(QString::fromUtf8("btnback"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/circle_left.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnback->setIcon(icon);

        horizontalLayout->addWidget(btnback);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        labelTitle = new QLabel(layoutWidget);
        labelTitle->setObjectName(QString::fromUtf8("labelTitle"));

        horizontalLayout->addWidget(labelTitle);

        horizontalSpacer_2 = new QSpacerItem(29, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        btnLogout = new QPushButton(layoutWidget);
        btnLogout->setObjectName(QString::fromUtf8("btnLogout"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/logout.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnLogout->setIcon(icon1);

        horizontalLayout->addWidget(btnLogout);


        retranslateUi(MasterVew);

        QMetaObject::connectSlotsByName(MasterVew);
    } // setupUi

    void retranslateUi(QWidget *MasterVew)
    {
        MasterVew->setWindowTitle(QApplication::translate("MasterVew", "MasterVew", nullptr));
        btnback->setText(QString());
        labelTitle->setText(QApplication::translate("MasterVew", "TextLabel", nullptr));
        btnLogout->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MasterVew: public Ui_MasterVew {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MASTERVEW_H
