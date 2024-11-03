#ifndef LOTQUERY_H
#define LOTQUERY_H
#include <QString>
#include "seller.h"
#include "lot.h"
class LotQuery
{
public:
    LotQuery();
    static int addLotQuery(QString name, int year, float desirePrice, int type, int sellerId, QString description);
    static QVector<Lot> getLotsSellerQuery(const Seller& seller);
};

#endif // LOTQUERY_H
