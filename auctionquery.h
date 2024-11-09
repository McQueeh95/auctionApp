#ifndef AUCTIONQUERY_H
#define AUCTIONQUERY_H
#include "auction.h"

class AuctionQuery
{
public:
    AuctionQuery();
    static QVector<Auction> getAuctionQuery();
    static QVector<std::pair<int, QString>> auctionTypes();
    static QVector<std::pair<int, QString>> getAnnouncers();
};

#endif // AUCTIONQUERY_H
