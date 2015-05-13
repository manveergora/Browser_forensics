#ifndef CRODIALOG_H
#define CRODIALOG_H

#include <QDialog>

namespace Ui {
class croDialog;
}

class croDialog : public QDialog
{
    Q_OBJECT

public:
    explicit croDialog(QWidget *parent = 0);
    ~croDialog();

private:
    Ui::croDialog *ui;
};

#endif // CRODIALOG_H
