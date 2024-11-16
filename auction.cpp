#include "auction.h"

Auction::Auction() {}

Auction::Auction(int auctionId, QString startTime, QString endTime, QString announcer, QString auctionType):
    auctionId{auctionId}, startTime{startTime}, endTime{endTime}, announcer{announcer}, auctionType{auctionType}
{
}

int Auction::getAuctionId() const
{
    return auctionId;
}

QString Auction::getStartTime() const
{
    return startTime;
}

QString Auction::getEndTime() const
{
    return endTime;
}

QString Auction::getAnnouncer() const
{
    return announcer;
}

QString Auction::getAuctionType() const
{
    return auctionType;
}

void Auction::setAuctionId(const int auctionId)
{
    this->auctionId = auctionId;
}

void Auction::setStartTime(const QString startTime)
{
    this->startTime = startTime;
}

void Auction::setEndTime(const QString endTime)
{
    this->endTime = endTime;
}

void Auction::setAnnouncer(const QString announcer)
{
    this->announcer = announcer;
}

void Auction::setAuctionType(const QString auctionType)
{
    this->auctionType = auctionType;
}


