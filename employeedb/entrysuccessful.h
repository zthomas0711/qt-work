#ifndef ENTRYSUCCESSFUL_H
#define ENTRYSUCCESSFUL_H

#include <QDialog>

namespace Ui {
class entrySuccessful;
}

class entrySuccessful : public QDialog
{
    Q_OBJECT

public:
    explicit entrySuccessful(QWidget *parent = 0);
    ~entrySuccessful();

private slots:
    void on_pushButton_clicked();

private:
    Ui::entrySuccessful *ui;
};

#endif // ENTRYSUCCESSFUL_H
