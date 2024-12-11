/********************************************************************************
** Form generated from reading UI file 'patienteditview.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PATIENTEDITVIEW_H
#define UI_PATIENTEDITVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PatientEditView
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLabel *label;
    QSpinBox *dbSpinWeight;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_5;
    QLineEdit *dbCreatedTimeStamp;
    QLineEdit *dbEditID;
    QDateEdit *dbDataEditDOB;
    QLabel *label_6;
    QLabel *label_9;
    QSpinBox *dbSpinHight;
    QLabel *label_8;
    QComboBox *dbComboSex;
    QLabel *label_7;
    QLineEdit *dbEditName;
    QLineEdit *dbEditMobile;
    QLineEdit *dbEditIDCard;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *PatientEditView)
    {
        if (PatientEditView->objectName().isEmpty())
            PatientEditView->setObjectName(QString::fromUtf8("PatientEditView"));
        PatientEditView->resize(610, 325);
        layoutWidget = new QWidget(PatientEditView);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 611, 331));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        dbSpinWeight = new QSpinBox(layoutWidget);
        dbSpinWeight->setObjectName(QString::fromUtf8("dbSpinWeight"));

        gridLayout->addWidget(dbSpinWeight, 8, 1, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_5, 6, 0, 1, 1);

        dbCreatedTimeStamp = new QLineEdit(layoutWidget);
        dbCreatedTimeStamp->setObjectName(QString::fromUtf8("dbCreatedTimeStamp"));

        gridLayout->addWidget(dbCreatedTimeStamp, 10, 1, 1, 1);

        dbEditID = new QLineEdit(layoutWidget);
        dbEditID->setObjectName(QString::fromUtf8("dbEditID"));

        gridLayout->addWidget(dbEditID, 0, 1, 1, 1);

        dbDataEditDOB = new QDateEdit(layoutWidget);
        dbDataEditDOB->setObjectName(QString::fromUtf8("dbDataEditDOB"));

        gridLayout->addWidget(dbDataEditDOB, 6, 1, 1, 1);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_6, 7, 0, 1, 1);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_9, 10, 0, 1, 1);

        dbSpinHight = new QSpinBox(layoutWidget);
        dbSpinHight->setObjectName(QString::fromUtf8("dbSpinHight"));

        gridLayout->addWidget(dbSpinHight, 7, 1, 1, 1);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_8, 9, 0, 1, 1);

        dbComboSex = new QComboBox(layoutWidget);
        dbComboSex->addItem(QString());
        dbComboSex->addItem(QString());
        dbComboSex->setObjectName(QString::fromUtf8("dbComboSex"));

        gridLayout->addWidget(dbComboSex, 3, 1, 1, 1);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_7, 8, 0, 1, 1);

        dbEditName = new QLineEdit(layoutWidget);
        dbEditName->setObjectName(QString::fromUtf8("dbEditName"));

        gridLayout->addWidget(dbEditName, 1, 1, 1, 1);

        dbEditMobile = new QLineEdit(layoutWidget);
        dbEditMobile->setObjectName(QString::fromUtf8("dbEditMobile"));

        gridLayout->addWidget(dbEditMobile, 9, 1, 1, 1);

        dbEditIDCard = new QLineEdit(layoutWidget);
        dbEditIDCard->setObjectName(QString::fromUtf8("dbEditIDCard"));

        gridLayout->addWidget(dbEditIDCard, 2, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);


        horizontalLayout->addLayout(verticalLayout);


        horizontalLayout_2->addLayout(horizontalLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        retranslateUi(PatientEditView);

        QMetaObject::connectSlotsByName(PatientEditView);
    } // setupUi

    void retranslateUi(QWidget *PatientEditView)
    {
        PatientEditView->setWindowTitle(QApplication::translate("PatientEditView", "\347\274\226\350\276\221\346\202\243\350\200\205\344\277\241\346\201\257", nullptr));
        label_4->setText(QApplication::translate("PatientEditView", "\346\200\247\345\210\253\357\274\232", nullptr));
        label->setText(QApplication::translate("PatientEditView", "ID:", nullptr));
        label_2->setText(QApplication::translate("PatientEditView", "\345\247\223\345\220\215:", nullptr));
        label_3->setText(QApplication::translate("PatientEditView", "\350\272\253\344\273\275\350\257\201:", nullptr));
        label_5->setText(QApplication::translate("PatientEditView", "\345\207\272\347\224\237\346\227\245\346\234\237\357\274\232", nullptr));
        label_6->setText(QApplication::translate("PatientEditView", "\350\272\253\351\253\230\357\274\232", nullptr));
        label_9->setText(QApplication::translate("PatientEditView", "\345\210\233\345\273\272\346\227\266\351\227\264:", nullptr));
        label_8->setText(QApplication::translate("PatientEditView", "\346\211\213\346\234\272\345\217\267:", nullptr));
        dbComboSex->setItemText(0, QApplication::translate("PatientEditView", "\345\245\263", nullptr));
        dbComboSex->setItemText(1, QApplication::translate("PatientEditView", "\347\224\267", nullptr));

        label_7->setText(QApplication::translate("PatientEditView", "\344\275\223\351\207\215:", nullptr));
        pushButton->setText(QApplication::translate("PatientEditView", "\344\277\235\345\255\230", nullptr));
        pushButton_2->setText(QApplication::translate("PatientEditView", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PatientEditView: public Ui_PatientEditView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATIENTEDITVIEW_H
