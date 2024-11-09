#include "signup.h"
#include "ui_signup.h"
#include "widget.h"
#include "WindowController.h"

enum Users{participator, seller, expert};
SignUp::SignUp(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::SignUp)
{
    ui->setupUi(this);
    ui->phoneLabel->hide();
    ui->phoneLineEdit->hide();
    ui->experienceLineEdit->hide();
    ui->experienceLabel->hide();
}

SignUp::~SignUp()
{
    delete ui;
}

void SignUp::on_userComboBox_currentIndexChanged(int index)
{
    int choice = ui->userComboBox->currentIndex();
    if(choice == seller){
        ui->phoneLabel->show();
        ui->phoneLineEdit->show();
        ui->experienceLineEdit->hide();
        ui->experienceLabel->hide();
    }
    if(choice == participator){
        ui->phoneLabel->hide();
        ui->phoneLineEdit->hide();
        ui->experienceLineEdit->hide();
        ui->experienceLabel->hide();
    }
    if(choice == expert){
        ui->phoneLabel->show();
        ui->phoneLineEdit->show();
        ui->experienceLineEdit->show();
        ui->experienceLabel->show();
    }
}

void SignUp::on_signUpButton_clicked()
{
    QString email = ui->emailLineEdit->text();
    QString name = ui->nameLineEdit->text();
    QString surname = ui->surnameLineEdit->text();
    QString password = ui->passwordLineEdit->text();
    QString confirm = ui->confirmLineEdit->text();
    QString phone = ui->phoneLineEdit->text();
    QString experience = ui->experienceLineEdit->text();
    int choice = ui->userComboBox->currentIndex();
    QVector<QString> fields{email, name, surname, password, confirm};
    if(choice == participator){
        if(fieldValidator(fields) == -1){
            showMessage(QMessageBox::Information, "All fields are required");
        }
        else if(confirm != password){
            showMessage(QMessageBox::Information, "Passwords are not same");
        }
        else if(RegistrationQuery::addParticipator(email, name, surname, password) == -1){
           showMessage(QMessageBox::Critical, "Something went wrong");
        }
        else if(!email.contains("@")){
            showMessage(QMessageBox::Information, "Wrong Email");
        }
        else{
            showMessage(QMessageBox::Information, "Success!");
            this->close();
        }
    }
    if(choice == seller){
        fields << phone;
        if(fieldValidator(fields)){
            showMessage(QMessageBox::Information, "All fields are required");
        }
        else if(confirm != password){
            showMessage(QMessageBox::Information, "Passwords are not same");
        }
        else if(RegistrationQuery::addSeller(email, name, surname, phone, password) == -1){
           showMessage(QMessageBox::Critical, "Something went wrong");
        }
        else if(!email.contains("@")){
            showMessage(QMessageBox::Information, "Wrong Email");
        }
        else if(!phoneValidate(phone)){
            showMessage(QMessageBox::Information, "Wrong Phone format");
        }
        else{
            showMessage(QMessageBox::Information, "Success!");
            this->close();
        }
    }
    if(choice == expert){
        fields << experience;
        int experienceInt = experience.toInt();
        if(fieldValidator(fields)){
            showMessage(QMessageBox::Information, "All fields are required");
        }
        else if(confirm != password){
            showMessage(QMessageBox::Information, "Passwords are not same");
        }
        else if(RegistrationQuery::addExpert(email, name, surname, phone, experienceInt, password) == -1){
            showMessage(QMessageBox::Critical, "Something went wrong");
        }
        else if(!email.contains("@")){
            showMessage(QMessageBox::Information, "Wrong Email");
        }
        else if(experienceInt < 1){
            showMessage(QMessageBox::Information, "Wrong Experience");
        }
        else if(!phoneValidate(phone)){
            showMessage(QMessageBox::Information, "Wrong Phone format");
        }
        else{
            showMessage(QMessageBox::Information, "Success!");
            this->close();

        }
    }
    WindowContoller::instance().showMain();
}

int SignUp::fieldValidator(const QVector<QString> &fields)
{
    for(const auto &f: fields)
        if(f.isEmpty())
            return -1;
    return 0;
}

void SignUp::showMessage(QMessageBox::Icon icon, QString text)
{
    QMessageBox messageBox;
    messageBox.setIcon(icon);
    messageBox.setText(text);
    messageBox.exec();

}

bool SignUp::phoneValidate(const QString &phone){
    QRegularExpression reg("^\\+?[0-9]+$");
    return reg.match(phone).hasMatch();
}


void SignUp::on_cancelButton_clicked()
{
    Widget* login = new Widget();
    this->close();
    WindowContoller::instance().showMain();
}

