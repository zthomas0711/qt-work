/********************************************************************************
** Form generated from reading UI file 'notfound.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTFOUND_H
#define UI_NOTFOUND_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_notFound
{
public:
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *notFound)
    {
        if (notFound->objectName().isEmpty())
            notFound->setObjectName(QStringLiteral("notFound"));
        notFound->resize(400, 155);
        label = new QLabel(notFound);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(160, 30, 81, 20));
        pushButton = new QPushButton(notFound);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(150, 110, 93, 28));

        retranslateUi(notFound);

        QMetaObject::connectSlotsByName(notFound);
    } // setupUi

    void retranslateUi(QDialog *notFound)
    {
        notFound->setWindowTitle(QApplication::translate("notFound", "Dialog", 0));
        label->setText(QApplication::translate("notFound", "ID not found", 0));
        pushButton->setText(QApplication::translate("notFound", "Ok", 0));
    } // retranslateUi

};

namespace Ui {
    class notFound: public Ui_notFound {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTFOUND_H
