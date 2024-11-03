/********************************************************************************
** Form generated from reading UI file 'sellerform.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELLERFORM_H
#define UI_SELLERFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SellerForm
{
public:
    QPushButton *addLotButton;
    QLabel *sellerInfoLabel;
    QLabel *sellerWindowLabel;
    QPushButton *logOutButton;
    QPushButton *yourLotsButton;

    void setupUi(QWidget *SellerForm)
    {
        if (SellerForm->objectName().isEmpty())
            SellerForm->setObjectName("SellerForm");
        SellerForm->resize(433, 393);
        addLotButton = new QPushButton(SellerForm);
        addLotButton->setObjectName("addLotButton");
        addLotButton->setGeometry(QRect(160, 220, 80, 24));
        sellerInfoLabel = new QLabel(SellerForm);
        sellerInfoLabel->setObjectName("sellerInfoLabel");
        sellerInfoLabel->setGeometry(QRect(240, 100, 131, 61));
        sellerWindowLabel = new QLabel(SellerForm);
        sellerWindowLabel->setObjectName("sellerWindowLabel");
        sellerWindowLabel->setGeometry(QRect(170, 50, 101, 21));
        logOutButton = new QPushButton(SellerForm);
        logOutButton->setObjectName("logOutButton");
        logOutButton->setGeometry(QRect(280, 310, 80, 24));
        yourLotsButton = new QPushButton(SellerForm);
        yourLotsButton->setObjectName("yourLotsButton");
        yourLotsButton->setGeometry(QRect(60, 300, 80, 24));

        retranslateUi(SellerForm);

        QMetaObject::connectSlotsByName(SellerForm);
    } // setupUi

    void retranslateUi(QWidget *SellerForm)
    {
        SellerForm->setWindowTitle(QCoreApplication::translate("SellerForm", "Form", nullptr));
        addLotButton->setText(QCoreApplication::translate("SellerForm", "Add Lot", nullptr));
        sellerInfoLabel->setText(QCoreApplication::translate("SellerForm", "Welcome", nullptr));
        sellerWindowLabel->setText(QCoreApplication::translate("SellerForm", "SELLER WINDOW", nullptr));
        logOutButton->setText(QCoreApplication::translate("SellerForm", "Log Out", nullptr));
        yourLotsButton->setText(QCoreApplication::translate("SellerForm", "Your lots", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SellerForm: public Ui_SellerForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELLERFORM_H
