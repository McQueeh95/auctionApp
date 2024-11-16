#include "expertform.h"
#include "ui_expertform.h"
#include "windowcontroller.h"

ExpertForm::ExpertForm(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ExpertForm)
{
    ui->setupUi(this);
}

Expert ExpertForm::getExpert() const
{
    return expert;
}

void ExpertForm::setExpert(const Expert &expert)
{
    this->expert = expert;
}

void ExpertForm::setExpertInfo()
{
    this->ui->expertInfoLabel->setText("Welcome: "+this->expert.getName()+" "+this->expert.getSurname());
}

ExpertForm::~ExpertForm()
{
    delete ui;
}

void ExpertForm::on_logOutButton_clicked()
{
    WindowContoller::instance().showMain();
    this->close();
}

