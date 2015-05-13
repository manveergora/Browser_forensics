#include "thirddialog.h"
#include "ui_thirddialog.h"

thirdDialog::thirdDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::thirdDialog)
{
    ui->setupUi(this);
}

thirdDialog::~thirdDialog()
{
    delete ui;
}

void thirdDialog::on_pushButton_clicked()
{
    QSqlDatabase mydb= QSqlDatabase::addDatabase("QSQLITE");
    mydb.setDatabaseName("../.config/google-chrome/Default/Cookies");
    if(!mydb.open()){
        qDebug()<<"failed";
    }
    else{
         qDebug()<<"connected";
    }
    QSqlQueryModel *modal=new QSqlQueryModel();
    mydb.isOpen();
    QSqlQuery *qry=new QSqlQuery(mydb);
    qry->prepare("select * from cookies");
    qry->exec();
    modal->setQuery(*qry);
    ui->tableView->setModel(modal);
    mydb.close();
    qDebug()<<(modal->rowCount());
}

void thirdDialog::on_pushButton_2_clicked()
{
    QSqlDatabase mydb= QSqlDatabase::addDatabase("QSQLITE");
    mydb.setDatabaseName("../.config/google-chrome/Default/Top Sites");
    if(!mydb.open()){
        qDebug()<<"failed";
    }
    else{
         qDebug()<<"connected";
    }
    QSqlQueryModel *modal=new QSqlQueryModel();
    mydb.isOpen();
    QSqlQuery *qry=new QSqlQuery(mydb);
    qry->prepare("select * from thumbnails");
    qry->exec();
    modal->setQuery(*qry);
    ui->tableView->setModel(modal);
    mydb.close();
    qDebug()<<(modal->rowCount());
}

void thirdDialog::on_pushButton_3_clicked()
{
    QSqlDatabase mydb= QSqlDatabase::addDatabase("QSQLITE");
    mydb.setDatabaseName("../.config/google-chrome/Default/Shortcuts");
    if(!mydb.open()){
        qDebug()<<"failed";
    }
    else{
         qDebug()<<"connected";
    }
    QSqlQueryModel *modal=new QSqlQueryModel();
    mydb.isOpen();
    QSqlQuery *qry=new QSqlQuery(mydb);
    qry->prepare("select * from omni_box_shortcuts");
    qry->exec();
    modal->setQuery(*qry);
    ui->tableView->setModel(modal);
    mydb.close();
    qDebug()<<(modal->rowCount());
}

void thirdDialog::on_pushButton_4_clicked()
{
    QSqlDatabase mydb= QSqlDatabase::addDatabase("QSQLITE");
    mydb.setDatabaseName("../.config/google-chrome/Default/Application Cache/Index");
    if(!mydb.open()){
        qDebug()<<"failed";
    }
    else{
         qDebug()<<"connected";
    }
    QSqlQueryModel *modal=new QSqlQueryModel();
    mydb.isOpen();
    QSqlQuery *qry=new QSqlQuery(mydb);
    qry->prepare("select * from Caches");
    qry->exec();
    modal->setQuery(*qry);
    ui->tableView->setModel(modal);
    mydb.close();
    qDebug()<<(modal->rowCount());
}

void thirdDialog::on_pushButton_5_clicked()
{
    QSqlDatabase mydb= QSqlDatabase::addDatabase("QSQLITE");
    mydb.setDatabaseName("../.config/google-chrome/Default/History");
    if(!mydb.open()){
        qDebug()<<"failed";
    }
    else{
         qDebug()<<"connected";
    }
    QSqlQueryModel *modal=new QSqlQueryModel();
    mydb.isOpen();
    QSqlQuery *qry=new QSqlQuery(mydb);
    qry->prepare("select * from urls");
    qry->exec();
    modal->setQuery(*qry);
    ui->tableView->setModel(modal);
    mydb.close();
    qDebug()<<(modal->rowCount());
}

void thirdDialog::on_pushButton_6_clicked()
{
    QSqlDatabase mydb= QSqlDatabase::addDatabase("QSQLITE");
    mydb.setDatabaseName("../.config/google-chrome/Default/Login Data");
    if(!mydb.open()){
        qDebug()<<"failed";
    }
    else{
         qDebug()<<"connected";
    }
    QSqlQueryModel *modal=new QSqlQueryModel();
    mydb.isOpen();
    QSqlQuery *qry=new QSqlQuery(mydb);
    qry->prepare("select * from logins");
    qry->exec();
    modal->setQuery(*qry);
    ui->tableView->setModel(modal);
    mydb.close();
    qDebug()<<(modal->rowCount());
}

void thirdDialog::on_pushButton_7_clicked()
{
    this->hide();
}
