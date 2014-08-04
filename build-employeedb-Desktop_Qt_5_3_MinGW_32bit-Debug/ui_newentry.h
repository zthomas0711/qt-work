/********************************************************************************
** Form generated from reading UI file 'newentry.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWENTRY_H
#define UI_NEWENTRY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_newentry
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QSpinBox *spinBox;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QComboBox *comboBox;
    QLabel *label_5;
    QLineEdit *lineEdit_4;
    QLabel *label_6;
    QPushButton *pushButton;

    void setupUi(QDialog *newentry)
    {
        if (newentry->objectName().isEmpty())
            newentry->setObjectName(QStringLiteral("newentry"));
        newentry->resize(400, 300);
        label = new QLabel(newentry);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 30, 81, 16));
        label_2 = new QLabel(newentry);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 80, 81, 16));
        label_3 = new QLabel(newentry);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 140, 81, 16));
        spinBox = new QSpinBox(newentry);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(320, 140, 42, 22));
        label_4 = new QLabel(newentry);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(280, 110, 121, 20));
        lineEdit = new QLineEdit(newentry);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(10, 50, 113, 22));
        lineEdit_2 = new QLineEdit(newentry);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(10, 100, 113, 22));
        lineEdit_3 = new QLineEdit(newentry);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(10, 160, 113, 22));
        comboBox = new QComboBox(newentry);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(280, 60, 111, 22));
        label_5 = new QLabel(newentry);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(290, 30, 53, 16));
        lineEdit_4 = new QLineEdit(newentry);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(280, 200, 113, 22));
        label_6 = new QLabel(newentry);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(310, 180, 53, 16));
        pushButton = new QPushButton(newentry);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(150, 250, 93, 28));

        retranslateUi(newentry);

        QMetaObject::connectSlotsByName(newentry);
    } // setupUi

    void retranslateUi(QDialog *newentry)
    {
        newentry->setWindowTitle(QApplication::translate("newentry", "Dialog", 0));
        label->setText(QApplication::translate("newentry", "First Name", 0));
        label_2->setText(QApplication::translate("newentry", "Last Name", 0));
        label_3->setText(QApplication::translate("newentry", "Title", 0));
        label_4->setText(QApplication::translate("newentry", "Performance Rating", 0));
        label_5->setText(QApplication::translate("newentry", "Group", 0));
        label_6->setText(QApplication::translate("newentry", "ID", 0));
        pushButton->setText(QApplication::translate("newentry", "Submit", 0));
    } // retranslateUi

};

namespace Ui {
    class newentry: public Ui_newentry {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWENTRY_H
