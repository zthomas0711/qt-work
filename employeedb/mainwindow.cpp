#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <iostream>
#include <QApplication>
#include "modifyentry.h"
#include "newentry.h"
#include "database.h"
#include <iostream>
#include <string>
#include <QString>
#include <fstream>
using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //connect(this,this->on_pushButton_2_clicked(),ui->;)
    //connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(on_pushButton_clicked()));

}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_3_clicked()
{

    modifyentry *mymodifyentry=new modifyentry();
    mymodifyentry->setModal(true);
    mymodifyentry->exec();
}

void MainWindow::on_pushButton_2_clicked()
{
    newentry *mynewentry=new newentry();
    mynewentry->setModal(true);
    mynewentry->exec();

}

void MainWindow::on_pushButton_4_clicked()
{

    QApplication::quit();
}

void MainWindow::on_pushButton_clicked()
{
    database *d=new database();
    d->setModal(true);
    d->exec();
}
