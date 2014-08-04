#include "mydialog.h"
#include "mainwindow.h"

#include "ui_mydialog.h"

using namespace std;
mydialog::mydialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mydialog)
{
    ui->setupUi(this);
}

mydialog::~mydialog()
{
    delete ui;
}
