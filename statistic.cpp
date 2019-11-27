#include "statistic.h"
#include "ui_statistic.h"

statistic::statistic(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::statistic)
{
    ui->setupUi(this);

    ui->tableView->setModel(stat());
}

statistic::~statistic()
{
    delete ui;
}
QSqlQueryModel * statistic::stat()
{
    QSqlQueryModel * model=new QSqlQueryModel();
    model->setQuery(" Select compagne, (Count(compagne)* 100 / (Select Count(*) From avion)) as pourcentage From avion Group by compagne");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("comp"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("percentage"));
    return model;





}
void statistic::on_close_clicked()
{
    close();


}
