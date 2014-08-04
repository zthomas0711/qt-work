#include "newentry.h"
#include "ui_newentry.h"


#include <QString>
#include <QFile>
#include <QDataStream>
#include "invalidid.h"
#include "engineer.h"
#include <QList>
#include <iostream>
#include <QByteArray>
#include "entrysuccessful.h"

newentry::newentry(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::newentry)

{
    ui->setupUi(this);
    QStringList myList= (QStringList()<<"Engineering"<<"Manufacturing"<<"Supply Chain"<<"Human Resources"<<"Customer Service"<<"Quality");
    ui->comboBox->addItems(myList);
    ui->spinBox->setRange(0,5);
    //engineer myEngineer;
   //connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(on_pushButton_clicked()));
    this->blankEngineer=new engineer();
}


newentry::~newentry()
{
    delete ui;
}


void newentry::on_pushButton_clicked()
{

    if(ui->lineEdit_4->text().toInt()>0)
    {   blankEngineer->idNumber= ui->lineEdit_4->text();
        blankEngineer->firstName= ui->lineEdit->text();
        blankEngineer->lastName= ui->lineEdit_2->text();
        blankEngineer->title= ui->lineEdit_3->text();
        blankEngineer->group=ui->comboBox->currentText();
        blankEngineer->pRating=ui->spinBox->text();

        blankEngineer->writeMyData();

    }


    else
    {
     invalidID q;
     q.setModal(true);
     q.exec();

    }
    this->~newentry();
}




