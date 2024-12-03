/********************************************************************************
** Form generated from reading UI file 'addappraisalform.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDAPPRAISALFORM_H
#define UI_ADDAPPRAISALFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_AddAppraisalForm
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *lotInfoLabel;
    QLineEdit *appraisalLineEdit;

    void setupUi(QDialog *AddAppraisalForm)
    {
        if (AddAppraisalForm->objectName().isEmpty())
            AddAppraisalForm->setObjectName("AddAppraisalForm");
        AddAppraisalForm->resize(400, 300);
        buttonBox = new QDialogButtonBox(AddAppraisalForm);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        lotInfoLabel = new QLabel(AddAppraisalForm);
        lotInfoLabel->setObjectName("lotInfoLabel");
        lotInfoLabel->setGeometry(QRect(270, 30, 49, 16));
        appraisalLineEdit = new QLineEdit(AddAppraisalForm);
        appraisalLineEdit->setObjectName("appraisalLineEdit");
        appraisalLineEdit->setGeometry(QRect(140, 90, 113, 24));

        retranslateUi(AddAppraisalForm);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, AddAppraisalForm, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, AddAppraisalForm, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(AddAppraisalForm);
    } // setupUi

    void retranslateUi(QDialog *AddAppraisalForm)
    {
        AddAppraisalForm->setWindowTitle(QCoreApplication::translate("AddAppraisalForm", "Dialog", nullptr));
        lotInfoLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AddAppraisalForm: public Ui_AddAppraisalForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDAPPRAISALFORM_H
