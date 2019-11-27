#include "ajout.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ui_ajout.h"
#include "avion.h"
#include <QString>
#include <QtDebug>
#include <QApplication>
#include <QMessageBox>
ajout::ajout(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ajout)
{
    ui->setupUi(this);

}

ajout::~ajout()
{
    delete ui;
}
void ajout::on_pushButton_clicked()
{
    //MainWindow m;
  QString mat,comp,model;
  mat=ui->matricule->text();
  comp=ui->compagne->text();
  model=ui->model->text();
  if(mat=="" || comp=="" || model=="")
  {
      QMessageBox::critical(nullptr, QObject::tr("vide"),
                  QObject::tr("veuillez saisir tous les champs.\n"), QMessageBox::Cancel);

  }
  else
  {
  avion a(mat,comp,model);

  a.ajouter();
  }
 // m.ui->list->setModel(tmpavion.afficher());
  close();


}
