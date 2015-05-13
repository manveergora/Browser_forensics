#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "firstdialog.h"
#include "seconddialog.h"
#include "thirddialog.h"
#include "crodialog.h"
#include "mozdialog.h"
#include "cacdialog.h"
#include "coodialog.h"
#include "hisdialog.h"
#include "helpdialog.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_actionNew_triggered();

    void on_actionChorme_triggered();

    void on_actionMozilla_triggered();

    void on_actionChorme_2_triggered();

    void on_actionMozilla_2_triggered();

    void on_actionCache_triggered();

    void on_actionCookies_triggered();

    void on_actionHistory_triggered();

    void on_actionHelp_triggered();

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
    firstDialog *fd;
    secondDialog *sd;
    thirdDialog *thrd;
    croDialog *cr;
    mozDialog *moz;
    cacDialog *cac;
    hisDialog *his;
    cooDialog *co;
    helpDialog *hlp;
};

#endif // MAINWINDOW_H
