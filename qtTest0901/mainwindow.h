#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void on_UnderLineCBox_clicked(bool checked);
    void on_ItalicCBox_clicked(bool checked);
    void on_BoldCBox_clicked(bool checked);
    //1.在私有槽函数声明属性中添加声明
    void setTextFontColor();
    void on_confirmBtn_clicked(bool checked);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
