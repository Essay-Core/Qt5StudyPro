/********************************************************************************
** Form generated from reading UI file 'test04.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST04_H
#define UI_TEST04_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_test04
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_2;
    QToolBox *toolBox;
    QWidget *page;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QWidget *page_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;

    void setupUi(QDialog *test04)
    {
        if (test04->objectName().isEmpty())
            test04->setObjectName(QStringLiteral("test04"));
        test04->resize(496, 356);
        test04->setStyleSheet(QStringLiteral(""));
        tabWidget = new QTabWidget(test04);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(140, 30, 351, 291));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget->addTab(tab_2, QString());
        toolBox = new QToolBox(test04);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        toolBox->setGeometry(QRect(10, 30, 111, 141));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        page->setGeometry(QRect(0, 0, 111, 89));
        pushButton = new QPushButton(page);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 0, 81, 27));
        pushButton_2 = new QPushButton(page);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 30, 81, 27));
        pushButton_3 = new QPushButton(page);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(10, 60, 81, 27));
        toolBox->addItem(page, QStringLiteral("Page 1"));
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        page_2->setGeometry(QRect(0, 0, 111, 89));
        pushButton_4 = new QPushButton(page_2);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(20, 0, 75, 27));
        pushButton_5 = new QPushButton(page_2);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(20, 30, 75, 27));
        pushButton_6 = new QPushButton(page_2);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(20, 60, 75, 27));
        toolBox->addItem(page_2, QStringLiteral("Page 2"));

        retranslateUi(test04);

        tabWidget->setCurrentIndex(0);
        toolBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(test04);
    } // setupUi

    void retranslateUi(QDialog *test04)
    {
        test04->setWindowTitle(QApplication::translate("test04", "Dialog", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("test04", "Tab 1", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("test04", "Tab 2", Q_NULLPTR));
        pushButton->setText(QApplication::translate("test04", "PushButton", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("test04", "PushButton", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("test04", "PushButton", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page), QApplication::translate("test04", "Page 1", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("test04", "PushButton", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("test04", "PushButton", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("test04", "PushButton", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_2), QApplication::translate("test04", "Page 2", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class test04: public Ui_test04 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST04_H
