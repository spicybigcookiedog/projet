#include "affichage.h"
#include "ui_affichage.h"
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

affichage::affichage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::affichage)
{
    ui->setupUi(this);
    ui->tab->setModel(tmpavion.afficher());
}

affichage::~affichage()
{
    delete ui;
}


void affichage::on_actualiser_clicked()
{
    QString crit=ui->comboBox->currentText();
    if(crit=="REGISTRATION")
    {
        ui->tab->setModel(tmpavion.trier());

    }
    else
      ui->tab->setModel(tmpavion.afficher());

}
