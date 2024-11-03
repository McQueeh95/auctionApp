/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *loginLabel;
    QLineEdit *loginLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *passwordLabel;
    QLineEdit *passwordLineEdit;
    QPushButton *loginButton;
    QPushButton *signUpButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(272, 317);
        verticalLayout = new QVBoxLayout(Widget);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        loginLabel = new QLabel(Widget);
        loginLabel->setObjectName("loginLabel");
        QFont font;
        font.setPointSize(16);
        loginLabel->setFont(font);

        horizontalLayout->addWidget(loginLabel);

        loginLineEdit = new QLineEdit(Widget);
        loginLineEdit->setObjectName("loginLineEdit");

        horizontalLayout->addWidget(loginLineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        passwordLabel = new QLabel(Widget);
        passwordLabel->setObjectName("passwordLabel");
        passwordLabel->setFont(font);

        horizontalLayout_2->addWidget(passwordLabel);

        passwordLineEdit = new QLineEdit(Widget);
        passwordLineEdit->setObjectName("passwordLineEdit");
        passwordLineEdit->setEnabled(true);
        passwordLineEdit->setEchoMode(QLineEdit::EchoMode::Password);

        horizontalLayout_2->addWidget(passwordLineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        loginButton = new QPushButton(Widget);
        loginButton->setObjectName("loginButton");

        verticalLayout->addWidget(loginButton);

        signUpButton = new QPushButton(Widget);
        signUpButton->setObjectName("signUpButton");

        verticalLayout->addWidget(signUpButton);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        loginLabel->setText(QCoreApplication::translate("Widget", "Login", nullptr));
        passwordLabel->setText(QCoreApplication::translate("Widget", "Password", nullptr));
        loginButton->setText(QCoreApplication::translate("Widget", "Login", nullptr));
        signUpButton->setText(QCoreApplication::translate("Widget", "Sign Up", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
