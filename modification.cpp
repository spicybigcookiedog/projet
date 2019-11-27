#include "modification.h"
#include "ui_modification.h"
#include "avion.h"
#include <QString>
modification::modification(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::modification)
{
    ui->setupUi(this);
    ui->comboBox->setModel(tmpavion.afficher());
}

modification::~modification()
{
    delete ui;
}
void modification::on_pushButton_clicked()
{

  QString mat,comp,model,mat_modif;
  mat=ui->matricule->text();
  comp=ui->compagne->text();
  model=ui->model->text();
  mat_modif=ui->comboBox->currentText();
  avion a;
  a.modifier(mat,comp,model,mat_modif);
  close();


}
