#ifndef DATABASE_H
#define DATABASE_H

#include <QDialog>
#include "newentry.h"
#include "engineer.h"

namespace Ui {
class database;
}

class database : public QDialog
{
    Q_OBJECT
friend class newentry;
public:
    explicit database(QWidget *parent = 0);
    ~database();
    engineer blankEngineer;

private slots:
    void on_pushButton_clicked();

private:
    Ui::database *ui;
    //engineer *blankEngineer;
};

#endif // DATABASE_H
