#include "participatorform.h"
#include "ui_participatorform.h"
#include "auctionquery.h"
#include "QStandardItemModel"
#include "windowcontroller.h"

ParticipatorForm::ParticipatorForm(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ParticipatorForm)
{
    ui->setupUi(this);
}

ParticipatorForm::~ParticipatorForm()
{
    qDebug() << "Participator Form deleted";
    delete ui;
}

void ParticipatorForm::setParticipator(const Participator &participator)
{
    this->participator = participator;
}

Participator ParticipatorForm::getParticipator() const{
    return participator;
}

void ParticipatorForm::setParticipatorInfo()
{
    ui->label->setText("Welcome "+getParticipator().getName() +" "+getParticipator().getSurname());
}

void ParticipatorForm::createModel()
{
    model = new AuctionTableModel(AuctionQuery::getAuctionQuery(), this);
    ui->auctionTable->setModel(model);
}


void ParticipatorForm::on_logOutButton_clicked()
{
    this->close();
    WindowContoller::instance().showMain();
}

