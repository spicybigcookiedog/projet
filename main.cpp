#include "mainwindow.h"
#include "connexion.h"
#include <QtDebug>
#include <QApplication>
#include <QMessageBox>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    connexion c;
    bool test=c.createconnect();
    MainWindow w;
    if(test)
     {  w.show();


         QMessageBox::critical(nullptr, QObject::tr("database is not open"),
                     QObject::tr("connection avec succés.\n"
                                 "Click Cancel to exit."), QMessageBox::Cancel);

     }
     else
         QMessageBox::critical(nullptr, QObject::tr("database is not open"),
                     QObject::tr("connection failed.\n"
                                 "Click Cancel to exit."), QMessageBox::Cancel);

       return a.exec();
}
