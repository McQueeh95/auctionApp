/********************************************************************************
** Form generated from reading UI file 'sellerslots.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELLERSLOTS_H
#define UI_SELLERSLOTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SellersLots
{
public:
    QVBoxLayout *verticalLayout;
    QTableView *tableView;

    void setupUi(QWidget *SellersLots)
    {
        if (SellersLots->objectName().isEmpty())
            SellersLots->setObjectName("SellersLots");
        SellersLots->resize(786, 716);
        verticalLayout = new QVBoxLayout(SellersLots);
        verticalLayout->setObjectName("verticalLayout");
        tableView = new QTableView(SellersLots);
        tableView->setObjectName("tableView");

        verticalLayout->addWidget(tableView);


        retranslateUi(SellersLots);

        QMetaObject::connectSlotsByName(SellersLots);
    } // setupUi

    void retranslateUi(QWidget *SellersLots)
    {
        SellersLots->setWindowTitle(QCoreApplication::translate("SellersLots", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SellersLots: public Ui_SellersLots {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELLERSLOTS_H
