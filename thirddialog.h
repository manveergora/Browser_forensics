#ifndef THIRDDIALOG_H
#define THIRDDIALOG_H

#include <QDialog>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
namespace Ui {
class thirdDialog;
}

class thirdDialog : public QDialog
{
    Q_OBJECT

public:
    explicit thirdDialog(QWidget *parent = 0);
    ~thirdDialog();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

private:
    Ui::thirdDialog *ui;
};

#endif // THIRDDIALOG_H
