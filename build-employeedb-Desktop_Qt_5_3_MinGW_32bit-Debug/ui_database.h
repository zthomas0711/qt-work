/********************************************************************************
** Form generated from reading UI file 'database.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATABASE_H
#define UI_DATABASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_database
{
public:
    QPushButton *pushButton;
    QTableWidget *tableWidget;

    void setupUi(QDialog *database)
    {
        if (database->objectName().isEmpty())
            database->setObjectName(QStringLiteral("database"));
        database->resize(760, 431);
        pushButton = new QPushButton(database);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(620, 390, 93, 28));
        tableWidget = new QTableWidget(database);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(5, 1, 741, 381));

        retranslateUi(database);

        QMetaObject::connectSlotsByName(database);
    } // setupUi

    void retranslateUi(QDialog *database)
    {
        database->setWindowTitle(QApplication::translate("database", "Dialog", 0));
        pushButton->setText(QApplication::translate("database", "Ok", 0));
    } // retranslateUi

};

namespace Ui {
    class database: public Ui_database {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATABASE_H
