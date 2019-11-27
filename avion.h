#ifndef AVION_H
#define AVION_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include <QString>
#include <QSqlQueryModel>

class avion
{
    QString mat,comp,model;
public:
    avion();
    avion(QString,QString,QString);
      QString get_matricule();
      QString get_compagne();
      QString get_model();
      bool ajouter();
      bool supprimer(QString mat);
      bool modifier(QString mat,QString comp,QString model,QString mat_modif);
      QSqlQueryModel * trier();
      QSqlQueryModel * afficher();

};

#endif // AVION_H
