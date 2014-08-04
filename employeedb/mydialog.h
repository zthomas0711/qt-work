#ifndef MYDIALOG_H
#define MYDIALOG_H

#include <QDialog>
#include "mainwindow.h"

/*namespace Ui {
    class mydialog;
}*/

namespace Ui{
class mydialog : public QDialog
{
    Q_OBJECT

public:
    explicit mydialog(QWidget *parent = 0);
    ~mydialog();

private:
    Ui::mydialog *ui;
};
}



#endif // MYDIALOG_H
