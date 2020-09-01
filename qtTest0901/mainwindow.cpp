#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //2.需要在构造函数中手动添加关联函数
    connect(ui->BlackRdb,SIGNAL(clicked()),this,SLOT(setTextFontColor()));
    connect(ui->RedRdb,SIGNAL(clicked()),this,SLOT(setTextFontColor()));
    connect(ui->BlueRdb,SIGNAL(clicked()),this,SLOT(setTextFontColor()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_UnderLineCBox_clicked(bool checked)
{
//    基本思路就是，首选需要将当前的文本格式对象获取到
//    然后对该对象进行格式设置
//    最后设置给该文本格式
    QFont font = ui->textEdit->font();
    font.setUnderline(checked);
    ui->textEdit->setFont(font);
}

void MainWindow::on_ItalicCBox_clicked(bool checked)
{
    QFont font = ui->textEdit->font();
    font.setItalic(checked);
    ui->textEdit->setFont(font);
}

void MainWindow::on_BoldCBox_clicked(bool checked)
{
    QFont font = ui->textEdit->font();
    font.setBold(checked);
    ui->textEdit->setFont(font);
}

void MainWindow::setTextFontColor()
{
   //3.在槽函数中实现响应代码
   QPalette plet=ui->textEdit->palette();
   if (ui->BlueRdb->isChecked())
       plet.setColor(QPalette::Text,Qt::blue);
   else if (ui->RedRdb->isChecked())
      plet.setColor(QPalette::Text,Qt::red);
   else if (ui->BlackRdb->isChecked())
       plet.setColor(QPalette::Text,Qt::black);
   else
      plet.setColor(QPalette::Text,Qt::black);
   ui->textEdit->setPalette(plet);
}

void MainWindow::on_confirmBtn_clicked(bool checked)
{
    printf("你点击了按钮");
}
