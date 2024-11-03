/********************************************************************************
** Form generated from reading UI file 'addlotdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDLOTDIALOG_H
#define UI_ADDLOTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddLotDialog
{
public:
    QVBoxLayout *verticalLayout_6;
    QLabel *addLotLabel;
    QVBoxLayout *verticalLayout;
    QLabel *nameLabel;
    QLineEdit *nameLineEdit;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QLabel *desirePriceLabel;
    QLineEdit *desirePriceLineEdit;
    QVBoxLayout *verticalLayout_5;
    QLabel *yearLabel;
    QLineEdit *yearLineEdit;
    QVBoxLayout *verticalLayout_4;
    QLabel *typeLabel;
    QComboBox *typeComboBox;
    QVBoxLayout *verticalLayout_2;
    QLabel *descriptionLabel;
    QPlainTextEdit *descriptionTextEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AddLotDialog)
    {
        if (AddLotDialog->objectName().isEmpty())
            AddLotDialog->setObjectName("AddLotDialog");
        AddLotDialog->resize(501, 465);
        verticalLayout_6 = new QVBoxLayout(AddLotDialog);
        verticalLayout_6->setObjectName("verticalLayout_6");
        addLotLabel = new QLabel(AddLotDialog);
        addLotLabel->setObjectName("addLotLabel");

        verticalLayout_6->addWidget(addLotLabel);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        nameLabel = new QLabel(AddLotDialog);
        nameLabel->setObjectName("nameLabel");

        verticalLayout->addWidget(nameLabel);

        nameLineEdit = new QLineEdit(AddLotDialog);
        nameLineEdit->setObjectName("nameLineEdit");

        verticalLayout->addWidget(nameLineEdit);


        verticalLayout_6->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        desirePriceLabel = new QLabel(AddLotDialog);
        desirePriceLabel->setObjectName("desirePriceLabel");

        verticalLayout_3->addWidget(desirePriceLabel);

        desirePriceLineEdit = new QLineEdit(AddLotDialog);
        desirePriceLineEdit->setObjectName("desirePriceLineEdit");

        verticalLayout_3->addWidget(desirePriceLineEdit);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        yearLabel = new QLabel(AddLotDialog);
        yearLabel->setObjectName("yearLabel");

        verticalLayout_5->addWidget(yearLabel);

        yearLineEdit = new QLineEdit(AddLotDialog);
        yearLineEdit->setObjectName("yearLineEdit");

        verticalLayout_5->addWidget(yearLineEdit);


        horizontalLayout->addLayout(verticalLayout_5);


        verticalLayout_6->addLayout(horizontalLayout);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        typeLabel = new QLabel(AddLotDialog);
        typeLabel->setObjectName("typeLabel");

        verticalLayout_4->addWidget(typeLabel);

        typeComboBox = new QComboBox(AddLotDialog);
        typeComboBox->setObjectName("typeComboBox");

        verticalLayout_4->addWidget(typeComboBox);


        verticalLayout_6->addLayout(verticalLayout_4);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        descriptionLabel = new QLabel(AddLotDialog);
        descriptionLabel->setObjectName("descriptionLabel");

        verticalLayout_2->addWidget(descriptionLabel);

        descriptionTextEdit = new QPlainTextEdit(AddLotDialog);
        descriptionTextEdit->setObjectName("descriptionTextEdit");

        verticalLayout_2->addWidget(descriptionTextEdit);


        verticalLayout_6->addLayout(verticalLayout_2);

        buttonBox = new QDialogButtonBox(AddLotDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        verticalLayout_6->addWidget(buttonBox);


        retranslateUi(AddLotDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, AddLotDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, AddLotDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(AddLotDialog);
    } // setupUi

    void retranslateUi(QDialog *AddLotDialog)
    {
        AddLotDialog->setWindowTitle(QCoreApplication::translate("AddLotDialog", "Dialog", nullptr));
        addLotLabel->setText(QCoreApplication::translate("AddLotDialog", "Add Lot", nullptr));
        nameLabel->setText(QCoreApplication::translate("AddLotDialog", "Name", nullptr));
        desirePriceLabel->setText(QCoreApplication::translate("AddLotDialog", "Desire Price", nullptr));
        yearLabel->setText(QCoreApplication::translate("AddLotDialog", "Year", nullptr));
        typeLabel->setText(QCoreApplication::translate("AddLotDialog", "Type", nullptr));
        descriptionLabel->setText(QCoreApplication::translate("AddLotDialog", "Description", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddLotDialog: public Ui_AddLotDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDLOTDIALOG_H
