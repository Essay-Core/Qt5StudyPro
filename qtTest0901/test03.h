#ifndef TEST03_H
#define TEST03_H

#include <QDialog>

namespace Ui {
class test03;
}

class test03 : public QDialog
{
    Q_OBJECT

public:
    explicit test03(QWidget *parent = 0);
    ~test03();

public:
    void showLog(QString str);

private slots:
    void on_addBtn_clicked();

    void on_clearBtn_clicked();

private:
    Ui::test03 *ui;
};

#endif // TEST03_H
