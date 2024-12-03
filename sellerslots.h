#ifndef SELLERSLOTS_H
#define SELLERSLOTS_H

#include <QWidget>
#include "seller.h"
#include "lotquery.h"
#include "lottablemodel.h"

namespace Ui {
class SellersLots;
}

class SellersLots : public QWidget
{
    Q_OBJECT

public:
    explicit SellersLots(QWidget *parent = nullptr);
    ~SellersLots();
    void loadLots();
    void setSeller(const Seller seller);
    Seller getSeller() const;
    void createModel();
    void createModelAuctions(const Auction &auction);
    void createModelExpert();
private:
    Ui::SellersLots *ui;
    lotTableModel *model;
    Seller seller;
};

#endif // SELLERSLOTS_H
