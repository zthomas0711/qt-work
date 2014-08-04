#include "modentry.h"
#include "ui_modentry.h"

modEntry::modEntry(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::modEntry)
{
    ui->setupUi(this);
}

modEntry::~modEntry()
{
    delete ui;
}
