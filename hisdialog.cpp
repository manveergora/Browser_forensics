#include "hisdialog.h"
#include "ui_hisdialog.h"

hisDialog::hisDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::hisDialog)
{
    ui->setupUi(this);
}

hisDialog::~hisDialog()
{
    delete ui;
}
