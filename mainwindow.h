#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <iostream>
#include "login.h"
#include <QMainWindow>
#include "menu.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_loginbutton_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
