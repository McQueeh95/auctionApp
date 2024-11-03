#include "sellerslots.h"
#include "ui_sellerslots.h"
#include "uiquery.h"
#include <QLabel>

SellersLots::SellersLots(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::SellersLots)
{
    ui->setupUi(this);


}

SellersLots::~SellersLots()
{
    delete ui;
}

void SellersLots::loadLots(){
    QList<Lot> lots = LotQuery::getLotsSellerQuery(seller);
    size_t i{0};
    for(auto lot: lots){
        i+=40;
        QLabel* nameLabel = new QLabel(this);
        QLabel* yearLabel = new QLabel(this);
        QFont labelFont("Times", 20, QFont::Bold);
        nameLabel->setFont(labelFont);
        yearLabel->setFont(labelFont);
        nameLabel->setText(lot.getName());
        yearLabel->setText(QString::number(lot.getYear()));
        nameLabel->move(10, i);
        yearLabel->move (250, i);
    }
}

void SellersLots::setSeller(const Seller seller){
    this->seller = seller;
}

void SellersLots::createModel(){
    model = new lotTableModel(LotQuery::getLotsSellerQuery(this->getSeller()), this);
      ui->tableView->setModel(model);
}

Seller SellersLots::getSeller() const{
    return seller;
}

