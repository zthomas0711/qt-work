#include "modifyentry.h"
#include "ui_modifyentry.h"

#include <iostream>
#include <string>
#include <QString>
#include <fstream>
#include <QLineEdit>
#include <QApplication>
#include "engineer.h"
#include "notfound.h"
#include <QList>
#include <QFile>

modifyentry::modifyentry(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::modifyentry)
{
    ui->setupUi(this);
}

modifyentry::~modifyentry()
{
    delete ui;
}


void modifyentry::on_pushButton_3_clicked()
{
    //create a flag to indicate if a match has been found for the id number
    bool flag=false;

    //create an employee to read the data and store it to QList
    engineer employee;
    QList<engineer*>employeeList=employee.readMyData();


    int x =ui->lineEdit->text().toInt();
    int i=0;

            //while the end of the QList has not been reached check to see
            //if x is equal to any of the engineers in QList
            while(i<employeeList.size())
            {
                //if the mathces one of the employees fill lineEdits with
                //employee attributes, set the flag to true, and break out of loop
                if(x==employeeList.at(i)->idNumber.toInt())
                {ui->lineEdit_2->setText(employeeList.at(i)->firstName);
                 ui->lineEdit_3->setText(employeeList.at(i)->lastName);
                 ui->lineEdit_4->setText(employeeList.at(i)->title);
                 ui->lineEdit_5->setText(employeeList.at(i)->group);
                 ui->lineEdit_6->setText(employeeList.at(i)->pRating);

                 flag=true;
                 break;
                }

                //if no match, increase index
                else
                {++i;}


            }

        //if flag is still false, display notfound dialog
        if(!flag)
        {
            notFound* q=new notFound();
            q->setModal(true);
            q->exec();
        }
}



void modifyentry::on_pushButton_clicked()
{
    engineer employee;
    QList<engineer*>employeeList=employee.readMyData();


    int x =ui->lineEdit->text().toInt();
    int i=0;

            //while the end of the QList has not been reached check to see
            //if x is equal to any of the engineers in QList
            while(i<employeeList.size())
            {
                //find the employee and update the attributes
                if(x==employeeList.at(i)->idNumber.toInt())
                {
                 employeeList.at(i)->firstName= ui->lineEdit_2->text();
                 employeeList.at(i)->lastName= ui->lineEdit_3->text();
                 employeeList.at(i)->title= ui->lineEdit_4->text();
                 employeeList.at(i)->group= ui->lineEdit_5->text();
                 employeeList.at(i)->pRating= ui->lineEdit_6->text();
                    break;
                 }
                i++;
            }
            //declare QFile and open it to write only mode
            QFile myfile("employees.dat");

            myfile.open(QIODevice::WriteOnly);
            myfile.flush();


            //setup QDataStream with QFile
            QDataStream myStream(&myfile);

                //loop through employeeList and write each attribute to the datastream
                for (int i=0; i<employeeList.size();i++)
                {
                   myStream<<employeeList.at(i)->firstName;
                   myStream<<employeeList.at(i)->lastName;
                   myStream<<employeeList.at(i)->title;
                   myStream<<employeeList.at(i)->group;
                   myStream<<employeeList.at(i)->pRating;
                   myStream<<employeeList.at(i)->idNumber;
                }


            myfile.close();
            this->~modifyentry();
}
