#include "sellerform.h"
#include "ui_sellerform.h"
#include "addlotdialog.h"
#include "widget.h"
#include "sellerslots.h"
#include "windowcontroller.h"

SellerForm::SellerForm(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::SellerForm)
{
    ui->setupUi(this);
}

SellerForm::~SellerForm()
{
    delete ui;
}

void SellerForm::setSellerInfo(){
    this->ui->sellerInfoLabel->setText("Welcome " + this->seller.getName() + " " + this->seller.getSurname() + "!");
}
void SellerForm::on_addLotButton_clicked()
{
    AddLotDialog* addLot = new AddLotDialog();
    addLot->setFocus();
    addLot->setSellerId(getSeller().getSellerId());
    addLot->setAttribute(Qt::WA_DeleteOnClose);
    addLot->setModal(true);
    addLot->show();
}


void SellerForm::on_logOutButton_clicked()
{
    WindowContoller::instance().showMain();
    this->close();
}


void SellerForm::on_yourLotsButton_clicked()
{
    SellersLots* sellersLots = new SellersLots();
    sellersLots->setSeller(this->seller);
    qDebug() << sellersLots->getSeller().getSellerId();

    //sellersLots->loadLots();
    sellersLots->createModel();
    sellersLots->setAttribute(Qt::WA_DeleteOnClose);
    sellersLots->show();
}

