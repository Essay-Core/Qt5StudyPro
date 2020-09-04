#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include <QString>


namespace Ui {
class Login;
}

class Login : public QDialog
{
    //在一个类的 private 部分声明 Q_OBJECT宏，使得类可以使用元对象的特性
    Q_OBJECT

public:
    explicit Login(QWidget *parent = 0);
    ~Login();
    void init();

private slots:
    void on_loginBtn_clicked();

    void on_addinBtn_clicked();

private:
    Ui::Login *ui;
};

#endif // LOGIN_H
