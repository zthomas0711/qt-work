#ifndef ENTRYDELETED_H
#define ENTRYDELETED_H

#include <QDialog>

namespace Ui {
class entryDeleted;
}

class entryDeleted : public QDialog
{
    Q_OBJECT

public:
    explicit entryDeleted(QWidget *parent = 0);
    ~entryDeleted();

private slots:
    void on_pushButton_clicked();

private:
    Ui::entryDeleted *ui;
};

#endif // ENTRYDELETED_H
