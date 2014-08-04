#include "database.h"
#include "ui_database.h"
#include <QtGui>
#include "newentry.h"
#include "ui_newentry.h"
#include "engineer.h"
#include <iostream>
#include <string>
#include <QString>
#include <cstdlib>
#include <QDataStream>
#include <QList>

database::database(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::database)
{
    ui->setupUi(this);

    //create engineer to read data
    engineer employee;
    QList<engineer*>myList=employee.readMyData();

    //set up size of table and headers
    ui->tableWidget->setRowCount(myList.size());
    ui->tableWidget->setColumnCount(6);
    ui->tableWidget->setHorizontalHeaderLabels(QString("First Name;Last Name;Title;Department;Performance;ID Number").split(";"));

        //loop through the QList to populate each row with engineer data
        for(int i=0; i<myList.size();i++)
        {
        ui->tableWidget->setItem(i,0,new QTableWidgetItem(myList.at(i)->firstName));
        ui->tableWidget->setItem(i,1,new QTableWidgetItem(myList.at(i)->lastName));
        ui->tableWidget->setItem(i,2,new QTableWidgetItem(myList.at(i)->title));
        ui->tableWidget->setItem(i,3,new QTableWidgetItem(myList.at(i)->group));
        ui->tableWidget->setItem(i,4,new QTableWidgetItem(myList.at(i)->pRating));
        ui->tableWidget->setItem(i,5,new QTableWidgetItem(myList.at(i)->idNumber));
        }


}

database::~database()
{
    delete ui;
}

void database::on_pushButton_clicked()
{
    this->~database();
}
