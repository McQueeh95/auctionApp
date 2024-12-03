#include "addappraisalform.h"
#include "lotquery.h"
#include "ui_addappraisalform.h"
#include <QMessageBox>

AddAppraisalForm::AddAppraisalForm(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AddAppraisalForm)
{
    ui->setupUi(this);
    connect(this->ui->buttonBox, &QDialogButtonBox::accepted, this, &AddAppraisalForm::sendRefresh);
}

AddAppraisalForm::~AddAppraisalForm()
{
    delete ui;
}

void AddAppraisalForm::setLot(const Lot &lot)
{
    this->lot = lot;
}

Lot AddAppraisalForm::getLot() const
{
    return lot;
}

void AddAppraisalForm::setLotInfo()
{
    QString lotInfo = lot.getName() + " " + QString::number(lot.getYear()) + " " + lot.getType() + "\n" + lot.getDescription();
    this->ui->lotInfoLabel->setText(lotInfo);
}

void AddAppraisalForm::setExpert(const Expert &expert)
{
    this->expert = expert;
}





void AddAppraisalForm::on_buttonBox_accepted()
{
    QMessageBox messageBox;
    if(LotQuery::addAppraisal(this->lot.getId(), this->expert.getExpertId(), this->ui->appraisalLineEdit->text().toFloat()) == 1){
        messageBox.setIcon(QMessageBox::Information);
        messageBox.setText("Appraisal was added");}
    else{
        messageBox.setIcon(QMessageBox::Critical);
        messageBox.setText("Failed adding appraisal");}
    messageBox.exec();
}

void AddAppraisalForm::sendRefresh()
{
    emit refreshSignal();
}

