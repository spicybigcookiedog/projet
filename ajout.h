#ifndef AJOUT_H
#define AJOUT_H

#include <QDialog>
#include "avion.h"

namespace Ui {
class ajout;
}

class ajout : public QDialog
{
    Q_OBJECT

public:
    explicit ajout(QWidget *parent = nullptr);
    ~ajout();
private slots:
    void on_pushButton_clicked();

private:
    Ui::ajout *ui;
    avion tmpavion;
};

#endif // AJOUT_H
