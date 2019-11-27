#include "mainwindow_login.h"
#include "ui_mainwindow_login.h"
#include "ajout.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ui_ajout.h"
#include "avion.h"
#include <QString>
#include <QtDebug>
#include <QApplication>
#include <QMessageBox>

MainWindow_login::MainWindow_login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow_login)
{
    ui->setupUi(this);
}

MainWindow_login::~MainWindow_login()
{
    delete ui;
}
bool  MainWindow_login::login()
{
    MainWindow w;
    QString username,password;
    username=ui->username->text();
    password=ui->password->text();
     if(username=="ashref" && password=="hesus")
     {
        return 1 ;

     }
     else
     {
         return 0;


     }
}
bool MainWindow_login::on_login_clicked()
{
    MainWindow w1;

  if(login())
  {
      return 1;
  }
  else
  {
     return 0;
  }



}

