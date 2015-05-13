#include "crodialog.h"
#include "ui_crodialog.h"

croDialog::croDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::croDialog)
{
    ui->setupUi(this);
}

croDialog::~croDialog()
{
    delete ui;
}
