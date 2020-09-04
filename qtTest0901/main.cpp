/**
* @projectName   qtTest0901
* @brief         摘要
* @author        Luoyankuan
* @date          2020-09-02
*/

#include <QApplication>
#include "mainwindow.h"
#include "login.h"
#include "testdialog.h"
#include "test03.h"
#include "test04.h"
#include <QFile>
#include <QTextStream>
#include <iostream>
#include <QString>

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //登录窗口新建的对象
    Login w1;
    //新建的主窗口的对象
    testDialog td;
    test03 t3;
    test04 t4;
    MainWindow w;

    //应用样式 apply the qss style
    //使用绝对路径
    QFile file("D:\\code_2018_1031\\qtTest0901\\qtTest0901\\StyleSheet.qss");
    file.open(QFile::ReadOnly);
    QTextStream filetext(&file);
    QString stylesheet = filetext.readAll();
    a.setStyleSheet(stylesheet);
    file.close();

    //当发送的是accept信号的时候，窗口切换
    if(w1.exec()==QDialog::Accepted)
    {
         w.show();        //如果按下了显示主窗口
         return a.exec(); //程序一直执行，直到主窗口关闭
    }
    else
    {
        //td.show();
        //t3.show();
        t4.show();
        return a.exec(); //程序一直执行，直到主窗口关闭
    }
}
