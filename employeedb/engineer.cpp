#include "engineer.h"
#include "cstdlib"
#include "string"
#include <iostream>
#include <QDataStream>
#include <QFile>
#include <QList>

engineer::engineer()
{

}

engineer::~engineer()
{


}

void engineer::writeMyData()
{
    //create QList for engineers from file
    QList<engineer*>myList=readMyData();

    //add this engineer to myList
    myList.push_front(this);

    //declare QFile and open it to write only mode
    QFile myfile("employees.dat");

    myfile.open(QIODevice::WriteOnly);
    myfile.flush();
    myfile.open(QIODevice::WriteOnly);

    //setup QDataStream with QFile
    QDataStream myStream(&myfile);

        //loop through myList and write each attribute to the datastream
        for (int i=0; i<myList.size();i++)
        {
           myStream<<myList.at(i)->firstName;
           myStream<<myList.at(i)->lastName;
           myStream<<myList.at(i)->title;
           myStream<<myList.at(i)->group;
           myStream<<myList.at(i)->pRating;
           myStream<<myList.at(i)->idNumber;
        }


    myfile.close();
    cout<<"Done"<<endl;

}

QList<engineer*> engineer::readMyData()
{
    //create QList of engineers to hold data from file
    QList<engineer*> newEmployeeList;

    //open file and datastream
    QFile file("employees.dat");
    QDataStream myStream(&file);
    file.open(QIODevice::ReadOnly);

    //create integer at 0 to be an index for the employees added to QList
    int i=0;

        //loop through the datastream and read the employee attributes
        //to an employee in the QList until end of file is reached
        while(!file.atEnd())
        {
             //push a new engineer object to the front of the list
             newEmployeeList.push_back(new engineer());

             //read the employee attributes previously saved to the file and
             //assign them to employee objects in QList
             myStream>>newEmployeeList.at(i)->firstName;
             myStream>>newEmployeeList.at(i)->lastName;
             myStream>>newEmployeeList.at(i)->title;
             myStream>>newEmployeeList.at(i)->group;
             myStream>>newEmployeeList.at(i)->pRating;
             myStream>>newEmployeeList.at(i)->idNumber;

             //increase index by one for the next object
             i++;
         }

    file.close();
    return newEmployeeList;
}
