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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ParticipatorForm
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTableView *auctionTable;
    QPushButton *showLotsButtin;
    QPushButton *logOutButton;

    void setupUi(QWidget *ParticipatorForm)
    {
        if (ParticipatorForm->objectName().isEmpty())
            ParticipatorForm->setObjectName("ParticipatorForm");
        ParticipatorForm->resize(720, 618);
        verticalLayout = new QVBoxLayout(ParticipatorForm);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(ParticipatorForm);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        auctionTable = new QTableView(ParticipatorForm);
        auctionTable->setObjectName("auctionTable");

        verticalLayout->addWidget(auctionTable);

        showLotsButtin = new QPushButton(ParticipatorForm);
        showLotsButtin->setObjectName("showLotsButtin");

        verticalLayout->addWidget(showLotsButtin);

        logOutButton = new QPushButton(ParticipatorForm);
        logOutButton->setObjectName("logOutButton");

        verticalLayout->addWidget(logOutButton);


        retranslateUi(ParticipatorForm);

        QMetaObject::connectSlotsByName(ParticipatorForm);
    } // setupUi

    void retranslateUi(QWidget *ParticipatorForm)
    {
        ParticipatorForm->setWindowTitle(QCoreApplication::translate("ParticipatorForm", "Form", nullptr));
        label->setText(QCoreApplication::translate("ParticipatorForm", "Welcome ", nullptr));
        showLotsButtin->setText(QCoreApplication::translate("ParticipatorForm", "Show lots", nullptr));
        logOutButton->setText(QCoreApplication::translate("ParticipatorForm", "Log out", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ParticipatorForm: public Ui_ParticipatorForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARTICIPATORFORM_H
