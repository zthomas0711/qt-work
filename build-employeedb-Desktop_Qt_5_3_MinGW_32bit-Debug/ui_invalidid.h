/********************************************************************************
** Form generated from reading UI file 'invalidid.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INVALIDID_H
#define UI_INVALIDID_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_invalidID
{
public:
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QDialog *invalidID)
    {
        if (invalidID->objectName().isEmpty())
            invalidID->setObjectName(QStringLiteral("invalidID"));
        invalidID->resize(400, 168);
        pushButton = new QPushButton(invalidID);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(150, 110, 93, 28));
        label = new QLabel(invalidID);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 50, 201, 20));

        retranslateUi(invalidID);

        QMetaObject::connectSlotsByName(invalidID);
    } // setupUi

    void retranslateUi(QDialog *invalidID)
    {
        invalidID->setWindowTitle(QApplication::translate("invalidID", "Dialog", 0));
        pushButton->setText(QApplication::translate("invalidID", "Ok", 0));
        label->setText(QApplication::translate("invalidID", "ID Number must be greater than 0.", 0));
    } // retranslateUi

};

namespace Ui {
    class invalidID: public Ui_invalidID {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INVALIDID_H
