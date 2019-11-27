#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "avion.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    Ui::MainWindow *ui;
    QString Get_mat();

    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void on_pb_ajouter_clicked();
    void on_pb_afficher_clicked();
    void on_refresh_clicked();
    void on_pb_supprimer_clicked();
    void on_pb_modifier_clicked();
    void on_stat_clicked();

private:
    avion tmpavion;
};
#endif // MAINWINDOW_H
