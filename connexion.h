#ifndef CONNEXION_H
#define CONNEXION_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>

class connexion
{
public:
    connexion();
    bool createconnect();
};

#endif // CONNEXION_H
