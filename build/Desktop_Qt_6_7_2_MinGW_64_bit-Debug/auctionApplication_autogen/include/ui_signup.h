/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SignUp
{
public:
    QVBoxLayout *verticalLayout_8;
    QComboBox *userComboBox;
    QVBoxLayout *verticalLayout_2;
    QLabel *nameLabel;
    QLineEdit *nameLineEdit;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *surnameLabel;
    QLineEdit *surnameLineEdit;
    QVBoxLayout *verticalLayout_3;
    QLabel *emailLabel;
    QLineEdit *emailLineEdit;
    QVBoxLayout *verticalLayout_7;
    QLabel *phoneLabel;
    QLineEdit *phoneLineEdit;
    QVBoxLayout *verticalLayout_6;
    QLabel *experienceLabel;
    QLineEdit *experienceLineEdit;
    QVBoxLayout *verticalLayout_4;
    QLabel *passwordLabel;
    QLineEdit *passwordLineEdit;
    QVBoxLayout *verticalLayout_5;
    QLabel *confirmLabel;
    QLineEdit *confirmLineEdit;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *signUpButton;
    QPushButton *cancelButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *SignUp)
    {
        if (SignUp->objectName().isEmpty())
            SignUp->setObjectName("SignUp");
        SignUp->resize(638, 608);
        verticalLayout_8 = new QVBoxLayout(SignUp);
        verticalLayout_8->setObjectName("verticalLayout_8");
        userComboBox = new QComboBox(SignUp);
        userComboBox->addItem(QString());
        userComboBox->addItem(QString());
        userComboBox->addItem(QString());
        userComboBox->setObjectName("userComboBox");

        verticalLayout_8->addWidget(userComboBox);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        nameLabel = new QLabel(SignUp);
        nameLabel->setObjectName("nameLabel");

        verticalLayout_2->addWidget(nameLabel);

        nameLineEdit = new QLineEdit(SignUp);
        nameLineEdit->setObjectName("nameLineEdit");

        verticalLayout_2->addWidget(nameLineEdit);


        verticalLayout_8->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        surnameLabel = new QLabel(SignUp);
        surnameLabel->setObjectName("surnameLabel");

        horizontalLayout_2->addWidget(surnameLabel);


        verticalLayout->addLayout(horizontalLayout_2);

        surnameLineEdit = new QLineEdit(SignUp);
        surnameLineEdit->setObjectName("surnameLineEdit");

        verticalLayout->addWidget(surnameLineEdit);


        verticalLayout_8->addLayout(verticalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        emailLabel = new QLabel(SignUp);
        emailLabel->setObjectName("emailLabel");

        verticalLayout_3->addWidget(emailLabel);

        emailLineEdit = new QLineEdit(SignUp);
        emailLineEdit->setObjectName("emailLineEdit");
        emailLineEdit->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        emailLineEdit->setInputMethodHints(Qt::InputMethodHint::ImhEmailCharactersOnly);
        emailLineEdit->setDragEnabled(false);

        verticalLayout_3->addWidget(emailLineEdit);


        verticalLayout_8->addLayout(verticalLayout_3);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        phoneLabel = new QLabel(SignUp);
        phoneLabel->setObjectName("phoneLabel");

        verticalLayout_7->addWidget(phoneLabel);

        phoneLineEdit = new QLineEdit(SignUp);
        phoneLineEdit->setObjectName("phoneLineEdit");

        verticalLayout_7->addWidget(phoneLineEdit);


        verticalLayout_8->addLayout(verticalLayout_7);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        experienceLabel = new QLabel(SignUp);
        experienceLabel->setObjectName("experienceLabel");

        verticalLayout_6->addWidget(experienceLabel);

        experienceLineEdit = new QLineEdit(SignUp);
        experienceLineEdit->setObjectName("experienceLineEdit");

        verticalLayout_6->addWidget(experienceLineEdit);


        verticalLayout_8->addLayout(verticalLayout_6);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        passwordLabel = new QLabel(SignUp);
        passwordLabel->setObjectName("passwordLabel");

        verticalLayout_4->addWidget(passwordLabel);

        passwordLineEdit = new QLineEdit(SignUp);
        passwordLineEdit->setObjectName("passwordLineEdit");
        passwordLineEdit->setInputMethodHints(Qt::InputMethodHint::ImhHiddenText|Qt::InputMethodHint::ImhNoAutoUppercase|Qt::InputMethodHint::ImhNoPredictiveText|Qt::InputMethodHint::ImhSensitiveData);
        passwordLineEdit->setEchoMode(QLineEdit::EchoMode::Password);

        verticalLayout_4->addWidget(passwordLineEdit);


        verticalLayout_8->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        confirmLabel = new QLabel(SignUp);
        confirmLabel->setObjectName("confirmLabel");

        verticalLayout_5->addWidget(confirmLabel);

        confirmLineEdit = new QLineEdit(SignUp);
        confirmLineEdit->setObjectName("confirmLineEdit");
        confirmLineEdit->setInputMethodHints(Qt::InputMethodHint::ImhHiddenText|Qt::InputMethodHint::ImhLatinOnly|Qt::InputMethodHint::ImhNoAutoUppercase|Qt::InputMethodHint::ImhNoPredictiveText|Qt::InputMethodHint::ImhSensitiveData);
        confirmLineEdit->setEchoMode(QLineEdit::EchoMode::Password);

        verticalLayout_5->addWidget(confirmLineEdit);


        verticalLayout_8->addLayout(verticalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        signUpButton = new QPushButton(SignUp);
        signUpButton->setObjectName("signUpButton");

        horizontalLayout->addWidget(signUpButton);

        cancelButton = new QPushButton(SignUp);
        cancelButton->setObjectName("cancelButton");

        horizontalLayout->addWidget(cancelButton);


        horizontalLayout_4->addLayout(horizontalLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout_8->addLayout(horizontalLayout_4);


        retranslateUi(SignUp);

        QMetaObject::connectSlotsByName(SignUp);
    } // setupUi

    void retranslateUi(QWidget *SignUp)
    {
        SignUp->setWindowTitle(QCoreApplication::translate("SignUp", "Sign Up", nullptr));
        userComboBox->setItemText(0, QCoreApplication::translate("SignUp", "Participator", nullptr));
        userComboBox->setItemText(1, QCoreApplication::translate("SignUp", "Seller", nullptr));
        userComboBox->setItemText(2, QCoreApplication::translate("SignUp", "Expert", nullptr));

        nameLabel->setText(QCoreApplication::translate("SignUp", "Name", nullptr));
        surnameLabel->setText(QCoreApplication::translate("SignUp", "Surname", nullptr));
        emailLabel->setText(QCoreApplication::translate("SignUp", "Email", nullptr));
        phoneLabel->setText(QCoreApplication::translate("SignUp", "Phone Number", nullptr));
        experienceLabel->setText(QCoreApplication::translate("SignUp", "Experience", nullptr));
        passwordLabel->setText(QCoreApplication::translate("SignUp", "Password", nullptr));
        confirmLabel->setText(QCoreApplication::translate("SignUp", "Confirm Password", nullptr));
        signUpButton->setText(QCoreApplication::translate("SignUp", "Sign Up", nullptr));
        cancelButton->setText(QCoreApplication::translate("SignUp", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SignUp: public Ui_SignUp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
