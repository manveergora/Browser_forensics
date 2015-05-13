#ifndef CACDIALOG_H
#define CACDIALOG_H

#include <QDialog>

namespace Ui {
class cacDialog;
}

class cacDialog : public QDialog
{
    Q_OBJECT

public:
    explicit cacDialog(QWidget *parent = 0);
    ~cacDialog();

private:
    Ui::cacDialog *ui;
};

#endif // CACDIALOG_H
