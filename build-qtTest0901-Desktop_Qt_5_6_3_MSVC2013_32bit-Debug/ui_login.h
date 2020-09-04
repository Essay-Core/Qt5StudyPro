/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QLineEdit *line_password;
    QLabel *label_2;
    QPushButton *loginBtn;
    QPushButton *addinBtn;
    QLabel *label;
    QLineEdit *line_account;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QStringLiteral("Login"));
        Login->resize(374, 181);
        Login->setStyleSheet(QStringLiteral(""));
        line_password = new QLineEdit(Login);
        line_password->setObjectName(QStringLiteral("line_password"));
        line_password->setGeometry(QRect(140, 70, 131, 20));
        label_2 = new QLabel(Login);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(100, 70, 31, 16));
        label_2->setLayoutDirection(Qt::LeftToRight);
        loginBtn = new QPushButton(Login);
        loginBtn->setObjectName(QStringLiteral("loginBtn"));
        loginBtn->setGeometry(QRect(99, 109, 75, 27));
        addinBtn = new QPushButton(Login);
        addinBtn->setObjectName(QStringLiteral("addinBtn"));
        addinBtn->setGeometry(QRect(189, 109, 75, 27));
        label = new QLabel(Login);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 40, 39, 16));
        label->setLayoutDirection(Qt::RightToLeft);
        line_account = new QLineEdit(Login);
        line_account->setObjectName(QStringLiteral("line_account"));
        line_account->setGeometry(QRect(140, 40, 130, 20));

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "Dialog", Q_NULLPTR));
        label_2->setText(QApplication::translate("Login", "\345\257\206\347\240\201", Q_NULLPTR));
        loginBtn->setText(QApplication::translate("Login", "\347\231\273\345\275\225", Q_NULLPTR));
        addinBtn->setText(QApplication::translate("Login", "\346\263\250\345\206\214", Q_NULLPTR));
        label->setText(QApplication::translate("Login", "\347\224\250\346\210\267\345\220\215", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
