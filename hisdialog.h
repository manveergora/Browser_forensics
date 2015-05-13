#ifndef HISDIALOG_H
#define HISDIALOG_H

#include <QDialog>

namespace Ui {
class hisDialog;
}

class hisDialog : public QDialog
{
    Q_OBJECT

public:
    explicit hisDialog(QWidget *parent = 0);
    ~hisDialog();

private:
    Ui::hisDialog *ui;
};

#endif // HISDIALOG_H
