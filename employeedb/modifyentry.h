#ifndef MODIFYENTRY_H
#define MODIFYENTRY_H

#include <QDialog>
#include "engineer.h"
namespace Ui
{
class modifyentry;
}

class modifyentry : public QDialog
{
    Q_OBJECT

public:
    explicit modifyentry(QWidget *parent = 0);
    ~modifyentry();

private slots:


    void on_pushButton_clicked();//update

    void on_pushButton_3_clicked();//find

private:
    Ui::modifyentry *ui;
    engineer *blankEngineer;
};

#endif // MODIFYENTRY_H
