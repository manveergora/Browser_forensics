#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "firstdialog.h"
#include "seconddialog.h"
#include "mozdialog.h"
#include "cacdialog.h"
#include "coodialog.h"
#include "hisdialog.h"
#include "helpdialog.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    fd=new firstDialog(this);
       fd->show();
}

void MainWindow::on_actionNew_triggered()
{
    fd=new firstDialog(this);
       fd->show();
}

void MainWindow::on_actionChorme_triggered()
{
    thrd=new thirdDialog(this);
       thrd->show();
}

void MainWindow::on_actionMozilla_triggered()
{
    sd=new secondDialog(this);
       sd->show();
}

void MainWindow::on_actionChorme_2_triggered()
{
    cr=new croDialog(this);
       cr->show();
}

void MainWindow::on_actionMozilla_2_triggered()
{
    moz=new mozDialog(this);
       moz->show();
}

void MainWindow::on_actionCache_triggered()
{
    cac=new cacDialog(this);
    cac->show();
}

void MainWindow::on_actionCookies_triggered()
{
    co=new cooDialog(this);
    co->show();
}

void MainWindow::on_actionHistory_triggered()
{
    his=new hisDialog(this);
    his->show();
}

void MainWindow::on_actionHelp_triggered()
{
    hlp=new helpDialog(this);
    hlp->show();
}

void MainWindow::on_pushButton_2_clicked()
{
    hlp=new helpDialog(this);
    hlp->show();
}
