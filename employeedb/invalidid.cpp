#include "invalidid.h"
#include "ui_invalidid.h"
#include <QApplication>

invalidID::invalidID(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::invalidID)
{
    ui->setupUi(this);
}

invalidID::~invalidID()
{
    delete ui;
}

void invalidID::on_pushButton_clicked()
{
    //this->~invalidID();
    //QApplication::quit();
this->close();
}
