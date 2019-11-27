#ifndef STATISTIC_H
#define STATISTIC_H

#include <QDialog>
#include <QSqlQuery>
#include <QSqlQueryModel>

namespace Ui {
class statistic;
}

class statistic : public QDialog
{
    Q_OBJECT

public:
    QSqlQueryModel * stat();

    explicit statistic(QWidget *parent = nullptr);
    ~statistic();
private slots:
    void on_close_clicked();


private:
    Ui::statistic *ui;
};

#endif // STATISTIC_H
