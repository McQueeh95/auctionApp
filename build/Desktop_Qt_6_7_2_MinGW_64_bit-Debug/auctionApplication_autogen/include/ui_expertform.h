/********************************************************************************
** Form generated from reading UI file 'expertform.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPERTFORM_H
#define UI_EXPERTFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ExpertForm
{
public:
    QLabel *expertInfoLabel;
    QPushButton *logOutButton;

    void setupUi(QWidget *ExpertForm)
    {
        if (ExpertForm->objectName().isEmpty())
            ExpertForm->setObjectName("ExpertForm");
        ExpertForm->resize(502, 419);
        expertInfoLabel = new QLabel(ExpertForm);
        expertInfoLabel->setObjectName("expertInfoLabel");
        expertInfoLabel->setGeometry(QRect(250, 70, 191, 31));
        logOutButton = new QPushButton(ExpertForm);
        logOutButton->setObjectName("logOutButton");
        logOutButton->setGeometry(QRect(190, 340, 80, 24));

        retranslateUi(ExpertForm);

        QMetaObject::connectSlotsByName(ExpertForm);
    } // setupUi

    void retranslateUi(QWidget *ExpertForm)
    {
        ExpertForm->setWindowTitle(QCoreApplication::translate("ExpertForm", "Form", nullptr));
        expertInfoLabel->setText(QCoreApplication::translate("ExpertForm", "TextLabel", nullptr));
        logOutButton->setText(QCoreApplication::translate("ExpertForm", "Log out", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ExpertForm: public Ui_ExpertForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPERTFORM_H
