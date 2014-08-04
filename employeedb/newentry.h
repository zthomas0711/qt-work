#ifndef NEWENTRY_H
#define NEWENTRY_H

#include <QDialog>
#include "database.h"
#include "engineer.h"
#include <QList>
namespace Ui
{
class newentry;
}

class newentry : public QDialog
{
    Q_OBJECT
friend class database;
public:
    explicit newentry(QWidget *parent = 0);

    ~newentry();

private slots:

    void on_pushButton_clicked();


private:
    Ui::newentry *ui;
    engineer *blankEngineer;
    QList<engineer*>employeeList;
};

#endif // NEWENTRY_H
