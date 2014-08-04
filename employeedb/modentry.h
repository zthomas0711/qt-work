#ifndef MODENTRY_H
#define MODENTRY_H

#include <QDialog>

namespace Ui {
class modEntry;
}

class modEntry : public QDialog
{
    Q_OBJECT

public:
    explicit modEntry(QWidget *parent = 0);
    ~modEntry();

private:
    Ui::modEntry *ui;
};

#endif // MODENTRY_H
