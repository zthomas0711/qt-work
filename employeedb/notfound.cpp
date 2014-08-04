#include "notfound.h"
#include "ui_notfound.h"
#include <QApplication>

notFound::notFound(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::notFound)
{
    ui->setupUi(this);
}

notFound::~notFound()
{
    delete ui;
}

void notFound::on_pushButton_clicked()
{
    this->~notFound();
    //QApplication::quit();
}
