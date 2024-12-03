#ifndef LOTQUERY_H
#define LOTQUERY_H
#include <QString>
#include "seller.h"
#include "lot.h"
#include "auction.h"
class LotQuery
{
public:
    LotQuery();
    static int addLotQuery(QString name, int year, float desirePrice, int type, int sellerId, QString description);
    static QVector<Lot> getLotsSellerQuery(const Seller& seller);
    static QVector<Lot> getLotsAuctionQuery(const Auction &auction);
    static QVector<Lot> getLotsForAppraisal();
    static int addAppraisal(int lotId, int expertId, float startingBid);
};

#endif // LOTQUERY_H
