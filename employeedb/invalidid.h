#ifndef INVALIDID_H
#define INVALIDID_H

#include <QDialog>

namespace Ui
{
class invalidID;
}

class invalidID : public QDialog
{
    Q_OBJECT

public:
    explicit invalidID(QWidget *parent = 0);
    ~invalidID();

private slots:
    void on_pushButton_clicked();

private:
    Ui::invalidID *ui;
};

#endif // INVALIDID_H
