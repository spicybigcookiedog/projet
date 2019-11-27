#ifndef AFFICHAGE_H
#define AFFICHAGE_H

#include <QDialog>
#include "avion.h"

namespace Ui {
class affichage;
}

class affichage : public QDialog
{
    Q_OBJECT

public:
    explicit affichage(QWidget *parent = nullptr);
    ~affichage();
private slots:
    void on_actualiser_clicked();


private:
    Ui::affichage *ui;
    avion tmpavion;
};

#endif // AFFICHAGE_H
