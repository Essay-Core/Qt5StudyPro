#include "testdialog.h"
#include "ui_testdialog.h"

testDialog::testDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::testDialog)
{
    ui->setupUi(this);
    //创建定时器并且槽函数关联
    fTimer = new QTimer(this);
    fTimer->stop();
    fTimer->setInterval(1000) ;//设置定时周期，单位：毫秒
    connect(fTimer,SIGNAL(timeout()), this, SLOT(on_timer_timeout()));
}

testDialog::~testDialog()
{
    delete ui;
}

void testDialog::on_pushButton_clicked()
{
    fTimer->start () ;//定时器开始工作
    fTimeCounter.start () ; //计时器开始工作
//    ui->pushButton->setEnabled(0);
}

void testDialog::on_timer_timeout(){
    //获取当前日期时间，为三个专用编辑器设置日期时间数据，并转换为字符串
    QDateTime curDateTime = QDateTime::currentDateTime();
    ui->timeEdit->setTime(curDateTime.time());
//    ui->timeEdit->setText (curDateTime.toString("hh:mm:ss11"));
    ui->dateEdit->setDate(curDateTime.date());
//    ui->dateEdit->setText(curDateTime.toString("yyyy-MM-dd"));
    ui->dateTimeEdit->setDateTime(curDateTime);
//    ui->dateTimeEdit->setText(curDateTime.toString("yyyy-MM-dd hh:mm:ss"));

    QTime curTime=QTime::currentTime(); //获取当前时间
      ui->LCDHour->display (curTime.hour()); //显示小时
      ui->LCDMin->display (curTime.minute()); //显示分钟
      ui->LCDSec->display(curTime.second()); //显示秒
      int va=ui->progressBar->value();
      va++;
      if (va>100)
          va=0;
      ui->progressBar->setValue(va);
}
