#ifndef COODIALOG_H
#define COODIALOG_H

#include <QDialog>

namespace Ui {
class cooDialog;
}

class cooDialog : public QDialog
{
    Q_OBJECT

public:
    explicit cooDialog(QWidget *parent = 0);
    ~cooDialog();

private:
    Ui::cooDialog *ui;
};

#endif // COODIALOG_H
