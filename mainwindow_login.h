#ifndef MAINWINDOW_LOGIN_H
#define MAINWINDOW_LOGIN_H

#include <QMainWindow>

namespace Ui {
class MainWindow_login;
}

class MainWindow_login : public QMainWindow
{
    Q_OBJECT

public:
    bool login();
    explicit MainWindow_login(QWidget *parent = nullptr);
    ~MainWindow_login();
public slots:
    bool on_login_clicked();


private:
    Ui::MainWindow_login *ui;
};

#endif // MAINWINDOW_LOGIN_H
