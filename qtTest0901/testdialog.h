#ifndef TESTDIALOG_H
#define TESTDIALOG_H

#include <QDialog>
#include <QDateTime>
#include <QTime>
#include <QTimer>

namespace Ui {
class testDialog;
}

class testDialog : public QDialog
{
    Q_OBJECT

public:
    explicit testDialog(QWidget *parent = 0);
    ~testDialog();

protected:
    QTimer *fTimer; //定时器
    QTime fTimeCounter;//计时器

private:


private slots:
    void on_pushButton_clicked();
    //定时器溢出出来槽函数
    void on_timer_timeout();

private:
    Ui::testDialog *ui;
};

#endif // TESTDIALOG_H
