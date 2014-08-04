#ifndef NOTFOUND_H
#define NOTFOUND_H

#include <QDialog>

namespace Ui
{
class notFound;
}

class notFound : public QDialog
{
    Q_OBJECT

public:
    explicit notFound(QWidget *parent = 0);
    ~notFound();

private slots:
    void on_pushButton_clicked();

private:
    Ui::notFound *ui;
};

#endif // NOTFOUND_H
