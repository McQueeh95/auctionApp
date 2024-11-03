#ifndef SIGNUP_H
#define SIGNUP_H

#include <QWidget>
#include <QLineEdit>
#include <QMessageBox>

#include "registrationquery.h"

namespace Ui {
class SignUp;
}

class SignUp : public QWidget
{
    Q_OBJECT

public:
    explicit SignUp(QWidget *parent = nullptr);
    ~SignUp();

private slots:
    void on_userComboBox_currentIndexChanged(int index);

    void on_signUpButton_clicked();

    int fieldValidator(const QVector<QString>& fields);

    void showMessage(QMessageBox::Icon icon, QString text);

    bool phoneValidate(const QString &phone);

    void on_cancelButton_clicked();

private:
    Ui::SignUp *ui;
};

#endif // SIGNUP_H
