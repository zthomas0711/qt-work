#include "mainwindow.h"
#include <QApplication>
#include "engineer.h"
#include "database.h"
#include <iostream>
#include <QList>
#include <QFile>
#include <QDataStream>
#include <QDebug>



int main(int argc, char *argv[])
{  /* QList<engineer>myList;
    engineer employee;
    engineer employee2;
    employee.firstName="Johnny";
    employee.lastName="Bobson";
    employee2.firstName="Hello";
    employee2.lastName="World1";
    myList.push_front(employee);
    myList.push_front(employee2);
    QFile file("Test2.txt");
    QDataStream myStream(&file);
    //cout<<myList.at(0).firstName.toStdString();
    file.open(QIODevice::WriteOnly);
    for (int i=0; i<myList.size();i++){
        myStream<<myList.at(i).firstName;
        myStream<<myList.at(i).lastName;

    }
    //myStream<<employee2.firstName<<employee2.lastName;
    file.close();

engineer newEmployee;
engineer newEmployee2;
QList<engineer*> newEmployeeList;
    file.open(QIODevice::ReadOnly);
    int i=0;



   while(!file.atEnd()){
       //myStream>>newEmployee;

       newEmployeeList.push_front(new engineer());
      myStream>>newEmployeeList.at(i)->firstName;
      cout<<newEmployeeList.at(i)->firstName.toStdString();

      myStream>>newEmployeeList.at(i)->lastName;
      cout<<newEmployeeList.at(i)->lastName.toStdString();
       i++;
   //cout<<i<<endl;
   }

   for (int i=0; i<newEmployeeList.size();i++){
      // cout<<newEmployeeList.at()->firstName.toStdString();
      // cout<<newEmployeeList.at()->lastName.toStdString();
   }

   cout<<newEmployeeList.size();

file.close();

return 0;



    /*QFile file("TestF.dat");
    QDataStream myStream(&file);
    file.open(QIODevice::ReadOnly);
    file.flush();
    myStream>>h;

    file.close();
*/
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();


}
