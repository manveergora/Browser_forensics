#include "cacdialog.h"
#include "ui_cacdialog.h"

cacDialog::cacDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cacDialog)
{
    ui->setupUi(this);
}

cacDialog::~cacDialog()
{
    delete ui;
}
