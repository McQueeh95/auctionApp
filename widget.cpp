#include "widget.h"
#include "./ui_widget.h"
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QString>
#include <QMessageBox>
#include "admin.h"
#include "databasemanager.h"
#include "form.h"
#include "loginquery.h"
#include "sellerform.h"
#include "seller.h"
#include "participatorform.h"
#include "expertform.h"
#include "WindowController.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    WindowContoller::instance().setMain(this);
}

Widget::~Widget()
{
    qDebug() << "Widget deleted";
    delete ui;
}

void Widget::on_loginButton_clicked()
{

    QString login = ui->loginLineEdit->text();
    QString password = ui->passwordLineEdit->text();
    QSqlDatabase db = DataBaseManager::databaseConnection();
    if(LoginQuery::adminLogin(login, password).first == admin){
        Form* adminWindow = new Form();
        adminWindow->setAttribute(Qt::WA_DeleteOnClose);
        adminWindow->show();
        this->ui->loginLineEdit->clear();
        this->ui->passwordLineEdit->clear();
        WindowContoller::instance().hideMain();
    }
    else if(LoginQuery::participatorLogin(login, password).first == participator){
        ParticipatorForm* participatorWindow = new ParticipatorForm();
        Participator participator = LoginQuery::participatorLogin(login, password).second;
        participatorWindow->setParticipator(participator);
        participatorWindow->setParticipatorInfo();
        participatorWindow->setAttribute(Qt::WA_DeleteOnClose);
        participatorWindow->createModel();
        participatorWindow->show();
        this->clearLineEdit();
        WindowContoller::instance().hideMain();
    }
    else if(LoginQuery::sellerLogin(login, password).first == seller){
        SellerForm* sellerWindow = new SellerForm();
        Seller seller = LoginQuery::sellerLogin(login, password).second;
        sellerWindow->setSeller(seller);
        sellerWindow->setSellerInfo();
        sellerWindow->setAttribute(Qt::WA_DeleteOnClose);
        sellerWindow->show();
        this->clearLineEdit();
        WindowContoller::instance().hideMain();
    }
    else if(LoginQuery::expertLogin(login, password).first == expert){
        ExpertForm* expertWindow = new ExpertForm();
        Expert expert = LoginQuery::expertLogin(login, password).second;
        expertWindow->setExpert(expert);
        expertWindow->setExpertInfo();
        expertWindow->setAttribute(Qt::WA_DeleteOnClose);
        expertWindow->show();
        expertWindow->createModel();
        this->clearLineEdit();
        WindowContoller::instance().hideMain();
    }
    else{
        QMessageBox msgBox;
        msgBox.setIcon(QMessageBox::Critical);
        msgBox.setText("Wrong login or password");
        msgBox.exec();
    }

}

void Widget::clearLineEdit(){
    this->ui->loginLineEdit->clear();
    this->ui->passwordLineEdit->clear();
}


void Widget::on_signUpButton_clicked()
{
    SignUp* signUpWindow = new SignUp();
    signUpWindow->setAttribute(Qt::WA_DeleteOnClose);
    signUpWindow->show();
    this->close();
}

