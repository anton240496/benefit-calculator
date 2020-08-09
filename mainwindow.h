#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    int z = 12;// кол-во чисел в номере телефона
            int r;
    QString text;

private slots:
    void on_pushButton_clicked();
    void error();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
