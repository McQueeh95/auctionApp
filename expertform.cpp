#include "expertform.h"
#include "ui_expertform.h"
#include "windowcontroller.h"
#include "lottablemodel.h"
#include "addappraisalform.h"

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

void ExpertForm::createModel()
{
    auto model = new lotTableModel(LotQuery::getLotsForAppraisal(), this);
    for(const auto &l: LotQuery::getLotsForAppraisal()){
        qDebug() << l.getName() << l.getType();
    }
    this->ui->lotTable->setModel(model);
    ui->lotTable->setSelectionMode(QAbstractItemView::SelectionMode::SingleSelection);
    ui->lotTable->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);
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



void ExpertForm::on_addAppraisalButton_clicked()
{
    AddAppraisalForm *appraisalForm = new AddAppraisalForm();
    QVector<Lot> lots = LotQuery::getLotsForAppraisal();
    auto index = this->ui->lotTable->selectionModel()->currentIndex();
    int lotNum = index.row();
    appraisalForm->setLot(lots.at(lotNum));
    qDebug() << this->expert.getExpertId();
    appraisalForm->setExpert(this->expert);
    appraisalForm->setModal(true);
    connect(appraisalForm, &AddAppraisalForm::refreshSignal, this, &ExpertForm::refreshSignal);
    appraisalForm->show();
}

void ExpertForm::refreshSignal()
{
    this->createModel();
}

