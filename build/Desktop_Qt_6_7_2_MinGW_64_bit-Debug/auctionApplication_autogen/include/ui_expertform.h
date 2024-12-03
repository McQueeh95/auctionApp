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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ExpertForm
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *expertInfoLabel;
    QTableView *lotTable;
    QPushButton *addAppraisalButton;
    QPushButton *logOutButton;

    void setupUi(QWidget *ExpertForm)
    {
        if (ExpertForm->objectName().isEmpty())
            ExpertForm->setObjectName("ExpertForm");
        ExpertForm->resize(545, 517);
        verticalLayout = new QVBoxLayout(ExpertForm);
        verticalLayout->setObjectName("verticalLayout");
        expertInfoLabel = new QLabel(ExpertForm);
        expertInfoLabel->setObjectName("expertInfoLabel");

        verticalLayout->addWidget(expertInfoLabel);

        lotTable = new QTableView(ExpertForm);
        lotTable->setObjectName("lotTable");

        verticalLayout->addWidget(lotTable);

        addAppraisalButton = new QPushButton(ExpertForm);
        addAppraisalButton->setObjectName("addAppraisalButton");

        verticalLayout->addWidget(addAppraisalButton);

        logOutButton = new QPushButton(ExpertForm);
        logOutButton->setObjectName("logOutButton");

        verticalLayout->addWidget(logOutButton);


        retranslateUi(ExpertForm);

        QMetaObject::connectSlotsByName(ExpertForm);
    } // setupUi

    void retranslateUi(QWidget *ExpertForm)
    {
        ExpertForm->setWindowTitle(QCoreApplication::translate("ExpertForm", "Form", nullptr));
        expertInfoLabel->setText(QCoreApplication::translate("ExpertForm", "TextLabel", nullptr));
        addAppraisalButton->setText(QCoreApplication::translate("ExpertForm", "Add Appraisal", nullptr));
        logOutButton->setText(QCoreApplication::translate("ExpertForm", "Log out", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ExpertForm: public Ui_ExpertForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPERTFORM_H
