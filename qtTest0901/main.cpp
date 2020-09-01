#include "mainwindow.h"
#include "login.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Login w1;//登录窗口新建的对象
    MainWindow w;//新建的主窗口的对象
    //当发送的是accept信号的时候，窗口切换
    if(w1.exec()==QDialog::Accepted)
    {
         w.show();        //如果按下了显示主窗口
         return a.exec(); //程序一直执行，直到主窗口关闭
    }
    else {
        return 0; //如果没有按下则不会进入主窗口，整个程序结束运行
    }
}
