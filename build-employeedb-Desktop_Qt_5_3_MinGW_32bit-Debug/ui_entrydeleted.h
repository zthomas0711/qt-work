/********************************************************************************
** Form generated from reading UI file 'entrydeleted.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENTRYDELETED_H
#define UI_ENTRYDELETED_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_entryDeleted
{
public:
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QDialog *entryDeleted)
    {
        if (entryDeleted->objectName().isEmpty())
            entryDeleted->setObjectName(QStringLiteral("entryDeleted"));
        entryDeleted->resize(400, 202);
        pushButton = new QPushButton(entryDeleted);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(160, 100, 93, 28));
        label = new QLabel(entryDeleted);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(130, 30, 151, 20));

        retranslateUi(entryDeleted);

        QMetaObject::connectSlotsByName(entryDeleted);
    } // setupUi

    void retranslateUi(QDialog *entryDeleted)
    {
        entryDeleted->setWindowTitle(QApplication::translate("entryDeleted", "Dialog", 0));
        pushButton->setText(QApplication::translate("entryDeleted", "Ok", 0));
        label->setText(QApplication::translate("entryDeleted", "Entry Deleted Successfully", 0));
    } // retranslateUi

};

namespace Ui {
    class entryDeleted: public Ui_entryDeleted {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENTRYDELETED_H
