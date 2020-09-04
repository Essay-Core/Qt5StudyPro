#ifndef TEST04_H
#define TEST04_H

#include <QDialog>

namespace Ui {
class test04;
}

class test04 : public QDialog
{
    Q_OBJECT

public:
    explicit test04(QWidget *parent = 0);
    ~test04();
    void initMenu();
    void initToolBar();

private:
    Ui::test04 *ui;
};

#endif // TEST04_H
