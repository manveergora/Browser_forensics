#include "mozdialog.h"
#include "ui_mozdialog.h"

mozDialog::mozDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mozDialog)
{
    ui->setupUi(this);
}

mozDialog::~mozDialog()
{
    delete ui;
}
