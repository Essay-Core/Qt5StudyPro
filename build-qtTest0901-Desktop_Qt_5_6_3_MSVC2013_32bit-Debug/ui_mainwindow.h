/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QCheckBox *UnderLineCBox;
    QCheckBox *ItalicCBox;
    QCheckBox *BoldCBox;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *BlackRdb;
    QRadioButton *RedRdb;
    QRadioButton *BlueRdb;
    QTextEdit *textEdit;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *confirmBtn;
    QPushButton *cancelBtn;
    QPushButton *quitBtn;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(483, 314);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(80, 10, 321, 51));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 10, 321, 41));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        UnderLineCBox = new QCheckBox(layoutWidget);
        UnderLineCBox->setObjectName(QStringLiteral("UnderLineCBox"));

        horizontalLayout->addWidget(UnderLineCBox);

        ItalicCBox = new QCheckBox(layoutWidget);
        ItalicCBox->setObjectName(QStringLiteral("ItalicCBox"));

        horizontalLayout->addWidget(ItalicCBox);

        BoldCBox = new QCheckBox(layoutWidget);
        BoldCBox->setObjectName(QStringLiteral("BoldCBox"));

        horizontalLayout->addWidget(BoldCBox);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(80, 80, 321, 51));
        layoutWidget1 = new QWidget(groupBox_2);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(0, 10, 321, 31));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        BlackRdb = new QRadioButton(layoutWidget1);
        BlackRdb->setObjectName(QStringLiteral("BlackRdb"));

        horizontalLayout_2->addWidget(BlackRdb);

        RedRdb = new QRadioButton(layoutWidget1);
        RedRdb->setObjectName(QStringLiteral("RedRdb"));

        horizontalLayout_2->addWidget(RedRdb);

        BlueRdb = new QRadioButton(layoutWidget1);
        BlueRdb->setObjectName(QStringLiteral("BlueRdb"));

        horizontalLayout_2->addWidget(BlueRdb);

        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(80, 140, 321, 71));
        layoutWidget2 = new QWidget(centralWidget);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(80, 230, 320, 25));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        confirmBtn = new QPushButton(layoutWidget2);
        confirmBtn->setObjectName(QStringLiteral("confirmBtn"));

        horizontalLayout_3->addWidget(confirmBtn);

        cancelBtn = new QPushButton(layoutWidget2);
        cancelBtn->setObjectName(QStringLiteral("cancelBtn"));

        horizontalLayout_3->addWidget(cancelBtn);

        quitBtn = new QPushButton(layoutWidget2);
        quitBtn->setObjectName(QStringLiteral("quitBtn"));

        horizontalLayout_3->addWidget(quitBtn);

        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(confirmBtn, SIGNAL(clicked(bool)), MainWindow, SLOT(accept()));
        QObject::connect(cancelBtn, SIGNAL(clicked()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        groupBox->setTitle(QString());
        UnderLineCBox->setText(QApplication::translate("MainWindow", "Underline ", Q_NULLPTR));
        ItalicCBox->setText(QApplication::translate("MainWindow", "Italic ", Q_NULLPTR));
        BoldCBox->setText(QApplication::translate("MainWindow", "Bold", Q_NULLPTR));
        groupBox_2->setTitle(QString());
        BlackRdb->setText(QApplication::translate("MainWindow", "Black", Q_NULLPTR));
        RedRdb->setText(QApplication::translate("MainWindow", "Red", Q_NULLPTR));
        BlueRdb->setText(QApplication::translate("MainWindow", "Blue", Q_NULLPTR));
        confirmBtn->setText(QApplication::translate("MainWindow", "\347\241\256\345\256\232", Q_NULLPTR));
        cancelBtn->setText(QApplication::translate("MainWindow", "\345\217\226\346\266\210", Q_NULLPTR));
        quitBtn->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
