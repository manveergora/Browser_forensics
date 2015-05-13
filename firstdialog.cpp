#include "firstdialog.h"
#include "ui_firstdialog.h"
#include "seconddialog.h"
#include "thirddialog.h"

firstDialog::firstDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::firstDialog)
{
    ui->setupUi(this);
}

firstDialog::~firstDialog()
{
    delete ui;
}

void firstDialog::on_pushButton_clicked()
{
    this->hide();
    sd=new secondDialog(this);
       sd->show();
}

void firstDialog::on_pushButton_2_clicked()
{
    this->hide();
    thrd=new thirdDialog(this);
       thrd->show();
}
