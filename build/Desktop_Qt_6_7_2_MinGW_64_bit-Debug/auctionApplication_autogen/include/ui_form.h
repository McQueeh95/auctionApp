/********************************************************************************
** Form generated from reading UI file 'form.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_H
#define UI_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QLabel *label;
    QPushButton *logOutButton;
    QPushButton *addLotButton;
    QPushButton *addLotButton_2;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName("Form");
        Form->resize(397, 409);
        label = new QLabel(Form);
        label->setObjectName("label");
        label->setGeometry(QRect(200, 20, 161, 21));
        logOutButton = new QPushButton(Form);
        logOutButton->setObjectName("logOutButton");
        logOutButton->setGeometry(QRect(200, 250, 80, 24));
        addLotButton = new QPushButton(Form);
        addLotButton->setObjectName("addLotButton");
        addLotButton->setGeometry(QRect(70, 250, 80, 24));
        addLotButton_2 = new QPushButton(Form);
        addLotButton_2->setObjectName("addLotButton_2");
        addLotButton_2->setGeometry(QRect(160, 210, 80, 24));

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QCoreApplication::translate("Form", "Form", nullptr));
        label->setText(QCoreApplication::translate("Form", "You've been logged as admin", nullptr));
        logOutButton->setText(QCoreApplication::translate("Form", "Log out", nullptr));
        addLotButton->setText(QCoreApplication::translate("Form", "Add Lot", nullptr));
        addLotButton_2->setText(QCoreApplication::translate("Form", "Add Lot", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_H
