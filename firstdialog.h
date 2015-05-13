#ifndef FIRSTDIALOG_H
#define FIRSTDIALOG_H

#include <QDialog>
#include "seconddialog.h"
#include "thirddialog.h"

namespace Ui {
class firstDialog;
}

class firstDialog : public QDialog
{
    Q_OBJECT

public:
    explicit firstDialog(QWidget *parent = 0);
    ~firstDialog();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::firstDialog *ui;
    secondDialog *sd;
    thirdDialog *thrd;
};

#endif // FIRSTDIALOG_H
