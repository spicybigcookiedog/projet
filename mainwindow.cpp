#include <iostream>
#include "avion.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ajout.h"
#include "affichage.h"
#include "modification.h"
#include "statistic.h"

#include <QMessageBox>
using namespace  std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->list->setModel(tmpavion.afficher());
   // this->centralWidget()->setStyleSheet("background-image:url(\"background.png\"); background-position: center; ");
}

MainWindow::~MainWindow()
{
    delete ui;
}

QString MainWindow::Get_mat()
{

    return ui->list->currentText();



}

void MainWindow::on_pb_ajouter_clicked()
{


    ajout a;
    a.setModal(true);
    a.exec();


}

void MainWindow::on_pb_afficher_clicked()
{

    affichage a;
    a.setModal(true);
    a.exec();



}
void MainWindow::on_refresh_clicked()
{

    ui->list->setModel(tmpavion.afficher());


}

void MainWindow::on_pb_supprimer_clicked()
{
    QString mat=ui->list->currentText();
    tmpavion.supprimer(mat);
    //tmpavion.afficher();
    ui->list->setModel(tmpavion.afficher());


}
 void MainWindow::on_pb_modifier_clicked()
 {
  modification m;

  m.setModal(true);
  m.exec();


 }

 void MainWindow::on_stat_clicked()
 {
 statistic s;

  s.setModal(true);
  s.exec();


 }
