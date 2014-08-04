/********************************************************************************
** Form generated from reading UI file 'modifyentry.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYENTRY_H
#define UI_MODIFYENTRY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_modifyentry
{
public:
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QPushButton *pushButton_3;

    void setupUi(QDialog *modifyentry)
    {
        if (modifyentry->objectName().isEmpty())
            modifyentry->setObjectName(QStringLiteral("modifyentry"));
        modifyentry->resize(400, 335);
        label = new QLabel(modifyentry);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, 10, 161, 20));
        lineEdit = new QLineEdit(modifyentry);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(160, 40, 113, 22));
        pushButton = new QPushButton(modifyentry);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(40, 290, 93, 28));
        label_2 = new QLabel(modifyentry);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 70, 71, 16));
        label_3 = new QLabel(modifyentry);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 140, 71, 16));
        label_4 = new QLabel(modifyentry);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 210, 53, 16));
        label_5 = new QLabel(modifyentry);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(260, 140, 121, 20));
        label_6 = new QLabel(modifyentry);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(290, 70, 53, 16));
        lineEdit_2 = new QLineEdit(modifyentry);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(10, 90, 113, 22));
        lineEdit_3 = new QLineEdit(modifyentry);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(10, 170, 113, 22));
        lineEdit_4 = new QLineEdit(modifyentry);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(10, 230, 113, 22));
        lineEdit_5 = new QLineEdit(modifyentry);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(260, 90, 113, 22));
        lineEdit_6 = new QLineEdit(modifyentry);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(260, 170, 113, 22));
        pushButton_3 = new QPushButton(modifyentry);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(300, 290, 93, 28));

        retranslateUi(modifyentry);

        QMetaObject::connectSlotsByName(modifyentry);
    } // setupUi

    void retranslateUi(QDialog *modifyentry)
    {
        modifyentry->setWindowTitle(QApplication::translate("modifyentry", "Dialog", 0));
        label->setText(QApplication::translate("modifyentry", "Please Enter Employee ID", 0));
        pushButton->setText(QApplication::translate("modifyentry", "Update", 0));
        label_2->setText(QApplication::translate("modifyentry", "First Name", 0));
        label_3->setText(QApplication::translate("modifyentry", "Last Name", 0));
        label_4->setText(QApplication::translate("modifyentry", "Title", 0));
        label_5->setText(QApplication::translate("modifyentry", "Performance Rating", 0));
        label_6->setText(QApplication::translate("modifyentry", "Group", 0));
        pushButton_3->setText(QApplication::translate("modifyentry", "Find", 0));
    } // retranslateUi

};

namespace Ui {
    class modifyentry: public Ui_modifyentry {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYENTRY_H
