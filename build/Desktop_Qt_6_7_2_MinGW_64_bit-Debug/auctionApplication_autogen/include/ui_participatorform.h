/********************************************************************************
** Form generated from reading UI file 'participatorform.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARTICIPATORFORM_H
#define UI_PARTICIPATORFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ParticipatorForm
{
public:
    QLabel *label;

    void setupUi(QWidget *ParticipatorForm)
    {
        if (ParticipatorForm->objectName().isEmpty())
            ParticipatorForm->setObjectName("ParticipatorForm");
        ParticipatorForm->resize(528, 440);
        label = new QLabel(ParticipatorForm);
        label->setObjectName("label");
        label->setGeometry(QRect(298, 80, 101, 21));

        retranslateUi(ParticipatorForm);

        QMetaObject::connectSlotsByName(ParticipatorForm);
    } // setupUi

    void retranslateUi(QWidget *ParticipatorForm)
    {
        ParticipatorForm->setWindowTitle(QCoreApplication::translate("ParticipatorForm", "Form", nullptr));
        label->setText(QCoreApplication::translate("ParticipatorForm", "Welcome ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ParticipatorForm: public Ui_ParticipatorForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARTICIPATORFORM_H
