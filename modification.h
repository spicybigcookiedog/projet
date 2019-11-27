#ifndef MODIFICATION_H
#define MODIFICATION_H

#include <QDialog>
#include "avion.h"

namespace Ui {
class modification;
}

class modification : public QDialog
{
    Q_OBJECT

public:
    explicit modification(QWidget *parent = nullptr);
    ~modification();
private slots:
    void on_pushButton_clicked();

private:
    Ui::modification *ui;
    avion tmpavion;

};

#endif // MODIFICATION_H
