#ifndef SELLERSQUERY_H
#define SELLERSQUERY_H
#include "lot.h"
#include "seller.h"

class SellersQuery
{
public:
    SellersQuery();
    QList<Lot>loadSellersLots() const;

};

#endif // SELLERSQUERY_H
