#include "entrysuccessful.h"
#include "ui_entrysuccessful.h"

entrySuccessful::entrySuccessful(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::entrySuccessful)
{
    ui->setupUi(this);
}

entrySuccessful::~entrySuccessful()
{
    delete ui;
}

void entrySuccessful::on_pushButton_clicked()
{
    this->~entrySuccessful();
}
