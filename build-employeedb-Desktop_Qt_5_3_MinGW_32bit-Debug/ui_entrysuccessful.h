/********************************************************************************
** Form generated from reading UI file 'entrysuccessful.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENTRYSUCCESSFUL_H
#define UI_ENTRYSUCCESSFUL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_entrySuccessful
{
public:
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *entrySuccessful)
    {
        if (entrySuccessful->objectName().isEmpty())
            entrySuccessful->setObjectName(QStringLiteral("entrySuccessful"));
        entrySuccessful->resize(400, 300);
        label = new QLabel(entrySuccessful);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 30, 231, 20));
        pushButton = new QPushButton(entrySuccessful);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(140, 140, 93, 28));

        retranslateUi(entrySuccessful);

        QMetaObject::connectSlotsByName(entrySuccessful);
    } // setupUi

    void retranslateUi(QDialog *entrySuccessful)
    {
        entrySuccessful->setWindowTitle(QApplication::translate("entrySuccessful", "Dialog", 0));
        label->setText(QApplication::translate("entrySuccessful", "Data Has Been Entered Successfully", 0));
        pushButton->setText(QApplication::translate("entrySuccessful", "Ok", 0));
    } // retranslateUi

};

namespace Ui {
    class entrySuccessful: public Ui_entrySuccessful {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENTRYSUCCESSFUL_H
