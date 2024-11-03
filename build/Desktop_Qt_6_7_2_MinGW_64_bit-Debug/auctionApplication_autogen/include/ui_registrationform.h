/********************************************************************************
** Form generated from reading UI file 'registrationform.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRATIONFORM_H
#define UI_REGISTRATIONFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegistrationForm
{
public:
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QComboBox *roleComboBox;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;

    void setupUi(QWidget *RegistrationForm)
    {
        if (RegistrationForm->objectName().isEmpty())
            RegistrationForm->setObjectName("RegistrationForm");
        RegistrationForm->resize(420, 353);
        pushButton = new QPushButton(RegistrationForm);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(120, 260, 80, 24));
        lineEdit = new QLineEdit(RegistrationForm);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(130, 70, 113, 24));
        lineEdit_2 = new QLineEdit(RegistrationForm);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(60, 110, 113, 24));
        lineEdit_3 = new QLineEdit(RegistrationForm);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(210, 110, 113, 24));
        roleComboBox = new QComboBox(RegistrationForm);
        roleComboBox->addItem(QString());
        roleComboBox->addItem(QString());
        roleComboBox->addItem(QString());
        roleComboBox->setObjectName("roleComboBox");
        roleComboBox->setGeometry(QRect(120, 30, 141, 24));
        lineEdit_4 = new QLineEdit(RegistrationForm);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(60, 160, 113, 24));
        lineEdit_5 = new QLineEdit(RegistrationForm);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setGeometry(QRect(210, 160, 113, 24));

        retranslateUi(RegistrationForm);

        QMetaObject::connectSlotsByName(RegistrationForm);
    } // setupUi

    void retranslateUi(QWidget *RegistrationForm)
    {
        RegistrationForm->setWindowTitle(QCoreApplication::translate("RegistrationForm", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("RegistrationForm", "PushButton", nullptr));
        roleComboBox->setItemText(0, QCoreApplication::translate("RegistrationForm", "Participator", nullptr));
        roleComboBox->setItemText(1, QCoreApplication::translate("RegistrationForm", "Seller", nullptr));
        roleComboBox->setItemText(2, QCoreApplication::translate("RegistrationForm", "Expert", nullptr));

        roleComboBox->setCurrentText(QCoreApplication::translate("RegistrationForm", "Participator", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegistrationForm: public Ui_RegistrationForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRATIONFORM_H
