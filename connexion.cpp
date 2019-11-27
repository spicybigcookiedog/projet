#include "connexion.h"
#include <QSqlError>

connexion::connexion(){
                      }
bool connexion::createconnect()
{bool test=false;
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("source_projet2A");
db.setUserName("ashref");//inserer nom de l'utilisateur
db.setPassword("esprit19");//inserer mot de passe de cet utilisateur

if (db.open())
test=true;



else throw QString ("Erreur Paramétres"+db.lastError().text());


return  test;


}
