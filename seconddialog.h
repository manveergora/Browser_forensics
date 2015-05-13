#ifndef SECONDDIALOG_H
#define SECONDDIALOG_H

#include <QDialog>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>

namespace Ui {
class secondDialog;
}

class secondDialog : public QDialog
{
    Q_OBJECT

public:
    explicit secondDialog(QWidget *parent = 0);
    ~secondDialog();

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_7_clicked();

private:
    Ui::secondDialog *ui;
};

#endif // SECONDDIALOG_H
