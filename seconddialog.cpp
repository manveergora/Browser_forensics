#include "seconddialog.h"
#include "ui_seconddialog.h"

secondDialog::secondDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::secondDialog)
{
    ui->setupUi(this);
}

secondDialog::~secondDialog()
{
    delete ui;
}

void secondDialog::on_pushButton_4_clicked()
{
    this->hide();
}

void secondDialog::on_pushButton_clicked()
{
    QSqlDatabase mydb= QSqlDatabase::addDatabase("QSQLITE");
    mydb.setDatabaseName("/home/gora/.mozilla/firefox/hdinbx27.default/cookies.sqlite");
    if(!mydb.open()){
        qDebug()<<"failed";
    }
    else{
         qDebug()<<"connected";
    }
    QSqlQueryModel *modal=new QSqlQueryModel();
    mydb.isOpen();
    QSqlQuery *qry=new QSqlQuery(mydb);
    qry->prepare("select * from moz_cookies");
    qry->exec();
    modal->setQuery(*qry);
    ui->tableView->setModel(modal);
    mydb.close();
    qDebug()<<(modal->rowCount());
}

void secondDialog::on_pushButton_5_clicked()
{
    QSqlDatabase mydb= QSqlDatabase::addDatabase("QSQLITE");
    mydb.setDatabaseName("/home/gora/.mozilla/firefox/hdinbx27.default/places.sqlite");
    if(!mydb.open()){
        qDebug()<<"failed";
    }
    else{
         qDebug()<<"connected";
    }
    QSqlQueryModel *modal=new QSqlQueryModel();
    mydb.isOpen();
    QSqlQuery *qry=new QSqlQuery(mydb);
    qry->prepare("select title,dateAdded,lastModified,guid from moz_bookmarks");
    qry->exec();
    modal->setQuery(*qry);
    ui->tableView->setModel(modal);
    mydb.close();
    qDebug()<<(modal->rowCount());
}

void secondDialog::on_pushButton_6_clicked()
{
    QSqlDatabase mydb= QSqlDatabase::addDatabase("QSQLITE");
    mydb.setDatabaseName("/home/gora/.mozilla/firefox/hdinbx27.default/places.sqlite");
    if(!mydb.open()){
        qDebug()<<"failed";
    }
    else{
         qDebug()<<"connected";
    }
    QSqlQueryModel *modal=new QSqlQueryModel();
    mydb.isOpen();
    QSqlQuery *qry=new QSqlQuery(mydb);
    qry->prepare("select * from moz_inputhistory");
    qry->exec();
    modal->setQuery(*qry);
    ui->tableView->setModel(modal);
    mydb.close();
    qDebug()<<(modal->rowCount());
}

void secondDialog::on_pushButton_3_clicked()
{
    QSqlDatabase mydb= QSqlDatabase::addDatabase("QSQLITE");
    mydb.setDatabaseName("/home/gora/.mozilla/firefox/hdinbx27.default/places.sqlite");
    if(!mydb.open()){
        qDebug()<<"failed";
    }
    else{
         qDebug()<<"connected";
    }
    QSqlQueryModel *modal=new QSqlQueryModel();
    mydb.isOpen();
    QSqlQuery *qry=new QSqlQuery(mydb);
    qry->prepare("select * from moz_places");
    qry->exec();
    modal->setQuery(*qry);
    ui->tableView->setModel(modal);
    mydb.close();
    qDebug()<<(modal->rowCount());
}

void secondDialog::on_pushButton_2_clicked()
{
    QSqlDatabase mydb= QSqlDatabase::addDatabase("QSQLITE");
    mydb.setDatabaseName("/home/gora/.mozilla/firefox/hdinbx27.default/formhistory.sqlite");
    if(!mydb.open()){
        qDebug()<<"failed";
    }
    else{
         qDebug()<<"connected";
    }
    QSqlQueryModel *modal=new QSqlQueryModel();
    mydb.isOpen();
    QSqlQuery *qry=new QSqlQuery(mydb);
    qry->prepare("select * from moz_formhistory");
    qry->exec();
    modal->setQuery(*qry);
    ui->tableView->setModel(modal);
    mydb.close();
    qDebug()<<(modal->rowCount());
}

void secondDialog::on_pushButton_7_clicked()
{
    QSqlDatabase mydb= QSqlDatabase::addDatabase("QSQLITE");
    mydb.setDatabaseName("/home/gora/.mozilla/firefox/hdinbx27.default/signons.sqlite");
    if(!mydb.open()){
        qDebug()<<"failed";
    }
    else{
         qDebug()<<"connected";
    }
    QSqlQueryModel *modal=new QSqlQueryModel();
    mydb.isOpen();
    QSqlQuery *qry=new QSqlQuery(mydb);
    qry->prepare("select * from moz_logins");
    qry->exec();
    modal->setQuery(*qry);
    ui->tableView->setModel(modal);
    mydb.close();
    qDebug()<<(modal->rowCount());
}
