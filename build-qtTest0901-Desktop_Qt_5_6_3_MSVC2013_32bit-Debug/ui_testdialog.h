/********************************************************************************
** Form generated from reading UI file 'testdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTDIALOG_H
#define UI_TESTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_testDialog
{
public:
    QGroupBox *groupBox;
    QTimeEdit *timeEdit;
    QDateEdit *dateEdit;
    QDateTimeEdit *dateTimeEdit;
    QPushButton *pushButton;
    QProgressBar *progressBar;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLCDNumber *LCDHour;
    QLCDNumber *LCDMin;
    QLCDNumber *LCDSec;

    void setupUi(QDialog *testDialog)
    {
        if (testDialog->objectName().isEmpty())
            testDialog->setObjectName(QStringLiteral("testDialog"));
        testDialog->resize(458, 404);
        groupBox = new QGroupBox(testDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 20, 421, 191));
        timeEdit = new QTimeEdit(groupBox);
        timeEdit->setObjectName(QStringLiteral("timeEdit"));
        timeEdit->setGeometry(QRect(17, 30, 131, 22));
        dateEdit = new QDateEdit(groupBox);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(20, 100, 131, 22));
        dateTimeEdit = new QDateTimeEdit(groupBox);
        dateTimeEdit->setObjectName(QStringLiteral("dateTimeEdit"));
        dateTimeEdit->setGeometry(QRect(20, 150, 194, 22));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(210, 30, 101, 23));
        progressBar = new QProgressBar(testDialog);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(60, 350, 321, 23));
        progressBar->setValue(24);
        widget = new QWidget(testDialog);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(40, 240, 371, 81));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        LCDHour = new QLCDNumber(widget);
        LCDHour->setObjectName(QStringLiteral("LCDHour"));
        LCDHour->setDigitCount(2);

        horizontalLayout->addWidget(LCDHour);

        LCDMin = new QLCDNumber(widget);
        LCDMin->setObjectName(QStringLiteral("LCDMin"));
        LCDMin->setDigitCount(2);

        horizontalLayout->addWidget(LCDMin);

        LCDSec = new QLCDNumber(widget);
        LCDSec->setObjectName(QStringLiteral("LCDSec"));
        LCDSec->setDigitCount(2);

        horizontalLayout->addWidget(LCDSec);


        retranslateUi(testDialog);

        QMetaObject::connectSlotsByName(testDialog);
    } // setupUi

    void retranslateUi(QDialog *testDialog)
    {
        testDialog->setWindowTitle(QApplication::translate("testDialog", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("testDialog", "\346\227\245\346\234\237\346\227\266\351\227\264", Q_NULLPTR));
        pushButton->setText(QApplication::translate("testDialog", "\350\216\267\345\217\226\345\275\223\345\211\215\346\227\266\351\227\264", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class testDialog: public Ui_testDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTDIALOG_H
