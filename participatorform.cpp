#include "participatorform.h"
#include "ui_participatorform.h"

ParticipatorForm::ParticipatorForm(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ParticipatorForm)
{
    ui->setupUi(this);
}

ParticipatorForm::~ParticipatorForm()
{
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
