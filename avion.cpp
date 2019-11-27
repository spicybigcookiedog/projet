#include "avion.h"
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include "mainwindow.h"
#include "ui_mainwindow.h"

avion::avion()
{
mat="";
comp="";
model="";
}

avion::avion(QString mat,QString comp,QString model )
{
this->mat=mat;
this->comp=comp;
this->model=model;
}


QString avion::get_matricule()
{

    return this->mat;
}
QString avion::get_compagne()
{
    return this->comp;

}
QString avion::get_model()
{
    return this->model;

}

bool avion::ajouter()
{
    QSqlQuery query;
    //QString res=QString::number(mat);
    query.prepare("INSERT INTO avion (matricule,compagne,modell) VALUES (:mat,:comp,:model)");
    query.bindValue(":mat",mat);
    query.bindValue(":comp",comp);
    query.bindValue(":model",model);
    return query.exec();

}
QSqlQueryModel * avion::afficher()
{
   QSqlQueryModel * model=new QSqlQueryModel();
   model->setQuery("select * from avion");
   model->setHeaderData(0,Qt::Horizontal,QObject::tr("matricule"));
   model->setHeaderData(1,Qt::Horizontal,QObject::tr("compagne"));
   model->setHeaderData(2,Qt::Horizontal,QObject::tr("modell"));
   return model;



}
QSqlQueryModel * avion::trier()
{
    QSqlQueryModel * model=new QSqlQueryModel();

    model->setQuery("select * from avion order by matricule asc");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("matricule"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("compagne"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("modell"));
return model;

}


bool avion::supprimer(QString mat)
{
    QSqlQuery query;
    //QString res=QString::number(mat);
    query.prepare("DELETE  FROM avion WHERE matricule = :mat");
    query.bindValue(":mat",mat);
    return query.exec();

}
bool avion::modifier(QString mat,QString comp,QString model,QString mat_modif)
{
     QSqlQuery query;
    query.prepare("update avion set matricule=:mat,compagne=:comp,modell=:model where matricule=:mat_modif");
    query.bindValue(":mat",mat);
    query.bindValue(":comp",comp);
    query.bindValue(":model",model);
    query.bindValue(":mat_modif",mat_modif);
    return query.exec();

}
