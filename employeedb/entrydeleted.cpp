#include "entrydeleted.h"
#include "ui_entrydeleted.h"

entryDeleted::entryDeleted(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::entryDeleted)
{
    ui->setupUi(this);
}

entryDeleted::~entryDeleted()
{
    delete ui;
}

void entryDeleted::on_pushButton_clicked()
{
    this->~entryDeleted();
}
