/**
* @projectName   qtTest0901
* @brief         摘要
* @author        Luoyankuan
* @date          2020-09-02
*/

#include "test03.h"
#include "ui_test03.h"
#include <QStringList>
#include <QString>
#include <QTime>
#include <QDateTime>

#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif

test03::test03(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::test03)
{
    ui->setupUi(this);


    //1.把需要初始化的列表志保存至QStringList中
    QStringList strList;
    strList <<"北京 "
            <<"上海 "
            <<"天津 "
            <<"河北省 "
            <<"山东省 "
            <<"山西省 ";
    //1.2.将控件的内容清空
    ui->comboBox->clear();
    //2.然后添加到控件显示
    ui->comboBox->addItems(strList);
}

test03::~test03()
{
    delete ui;
}

void test03::showLog(QString str){
    //获取当前时间 currentTime
    QTime dt = QTime::currentTime();
    //QDateTime dt = QDateTime::currentDateTime();
    //获取下拉框选择的文本
    str = dt.toString()+ ">>>" + str;
    //将文本输出到多行编辑器中显示日志输出
    ui->plainTextEdit->appendPlainText(str);
}

void test03::on_addBtn_clicked()
{
    //获取下拉框选择的文本
    QString str = ui->comboBox->currentText();
    showLog(str);
}

void test03::on_clearBtn_clicked()
{
    // cut()、copy()、paste()、undo()、redo()、clear()、selectAll()
    ui->plainTextEdit->clear();
}
