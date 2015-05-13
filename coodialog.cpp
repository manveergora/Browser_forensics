#include "coodialog.h"
#include "ui_coodialog.h"

cooDialog::cooDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cooDialog)
{
    ui->setupUi(this);
}

cooDialog::~cooDialog()
{
    delete ui;
}
