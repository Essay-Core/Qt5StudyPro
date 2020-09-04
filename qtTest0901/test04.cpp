#include "test04.h"
#include "ui_test04.h"
#include <QMenu>
#include <QAction>
#include <QMenuBar>
#include <QToolBar>

test04::test04(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::test04)
{
    ui->setupUi(this);
    initMenu();
    initToolBar();
}

test04::~test04()
{
    delete ui;
}

void test04::initMenu()
{

}

void test04::initToolBar()
{

}
