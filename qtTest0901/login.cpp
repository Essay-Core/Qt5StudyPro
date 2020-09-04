#include "login.h"
#include "ui_login.h"
#include <QMessageBox>

//新建文件时，需要重新编译，删除编译目录下的release和debug目录和makefile文件，重新编译即可
Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    init();

}

Login::~Login()
{
    delete ui;
}

void Login::init(){
    //设置密码框显示模式
    ui->line_password->setEchoMode(QLineEdit::PasswordEchoOnEdit);
    //注意必须使用双引号才行
    ui->line_account->setText("admin");
    ui->line_password->setText("123456");
    //1.多线程
    //2.数据库
    //3.设计模式
    //4.c++11新特性等

}

void Login::on_loginBtn_clicked()
{
    if(ui->line_account->text().operator==("admin")&&ui->line_password->text().operator==("123456"))
    {
        //通过发送accept信号来切换窗口
        accept();
    }
    else
    {
        QMessageBox::information(this,tr("Warning"),tr("登录失败"),QMessageBox::Yes);
        ui->line_account->clear();
        ui->line_password->clear();
        ui->line_account->setFocus();//将光标移动到用户名框内
    }
}

void Login::on_addinBtn_clicked()
{
    //发生信号切换页面
    reject();
}
