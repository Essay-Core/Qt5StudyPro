/********************************************************************************
** Form generated from reading UI file 'test03.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST03_H
#define UI_TEST03_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_test03
{
public:
    QGroupBox *groupBox;
    QComboBox *comboBox;
    QPlainTextEdit *plainTextEdit;
    QPushButton *addBtn;
    QPushButton *clearBtn;

    void setupUi(QDialog *test03)
    {
        if (test03->objectName().isEmpty())
            test03->setObjectName(QStringLiteral("test03"));
        test03->resize(414, 318);
        groupBox = new QGroupBox(test03);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(59, 30, 181, 81));
        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(30, 30, 121, 22));
        plainTextEdit = new QPlainTextEdit(test03);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(10, 130, 391, 181));
        addBtn = new QPushButton(test03);
        addBtn->setObjectName(QStringLiteral("addBtn"));
        addBtn->setGeometry(QRect(280, 40, 75, 23));
        clearBtn = new QPushButton(test03);
        clearBtn->setObjectName(QStringLiteral("clearBtn"));
        clearBtn->setGeometry(QRect(280, 80, 75, 23));

        retranslateUi(test03);

        QMetaObject::connectSlotsByName(test03);
    } // setupUi

    void retranslateUi(QDialog *test03)
    {
        test03->setWindowTitle(QApplication::translate("test03", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("test03", "\347\256\200\345\215\225ComboBox", Q_NULLPTR));
        addBtn->setText(QApplication::translate("test03", "\346\267\273\345\212\240", Q_NULLPTR));
        clearBtn->setText(QApplication::translate("test03", "\346\270\205\347\251\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class test03: public Ui_test03 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST03_H
