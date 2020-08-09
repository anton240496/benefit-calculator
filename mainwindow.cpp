#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QDoubleValidator>
#include <sstream>
#include <QDebug>

void  MainWindow :: error()
{

ui->symmdolg->setMaxLength(9);
    ui->symmdolg->setValidator( new QDoubleValidator(0, 999999999999999999, 0, this) );
    ui->telefon->setText("+7");

  ui->telefon->setMaxLength(z);// в поле нельзя ввести больше 12 чисел

   ui->telefon->setValidator( new QDoubleValidator(0, 999999999999999999, 0, this) );//формы записси вода сумма и мобильного тнлнфона
   //вводить только можно только цифры
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
  error();

}

MainWindow::~MainWindow()
{
    delete ui;

}


void MainWindow::on_pushButton_clicked()
{  r = ui->telefon->text().size();
    int x;
    int n;
    int y;

    int cost = 49990;
   x = ui->symmdolg->text().toInt();



    if(!ui->checkBox->isChecked()){
       QMessageBox::critical(this, "Ошибка", "При расчете вы должны быть согласны с обработкой персональных данных");
    }else {
    if (ui->symmdolg->text().isEmpty() or ui->telefon->text().isEmpty()){
        QMessageBox::critical(this, "Ошибка", "Все поля должны быть заполнены");
    }else{
   if (x<=250000){
       QMessageBox::critical(this, "Ошибка", "К сожалению, процедура банкротства будет вам не выгодна.\n"
                                             "Она должна быть больше 250 000 рублей");
   }else {
       if(r<12)//кол-во чисел в номере телефона
       {
          QMessageBox::critical(this,"Ошибка", "Введите номер телефона похожий на пример");
          qDebug() << r;
       }

else{
           qDebug() << r;
   n=x-cost;
   y=x/cost;

QString sn = QString::number(n); //экономия
QString sy = QString::number(y);// во сколько раз
  ui->akonomiy->setText(sn);
 ui->dolgraz->setText(sy);
   }
   }
   }
   }

}
