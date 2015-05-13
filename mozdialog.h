#ifndef MOZDIALOG_H
#define MOZDIALOG_H

#include <QDialog>

namespace Ui {
class mozDialog;
}

class mozDialog : public QDialog
{
    Q_OBJECT

public:
    explicit mozDialog(QWidget *parent = 0);
    ~mozDialog();

private:
    Ui::mozDialog *ui;
};

#endif // MOZDIALOG_H
