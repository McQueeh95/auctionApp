#include "auction.h"

Auction::Auction() {}

Auction::Auction(int auctionId, QString startTime, QString endTime, int announcerId, int auctionTypeId):
    auctionId{auctionId}, startTime{startTime}, endTime{endTime}, announcerId{announcerId}, auctionTypeId{auctionTypeId}
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

int Auction::getAnnouncerId() const
{
    return announcerId;
}

int Auction::getAuctionTypeId() const
{
    return auctionTypeId;
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

void Auction::setAnnouncerId(const int announcerId)
{
    this->announcerId = announcerId;
}

void Auction::setAuctionTypeId(const int auctionTypeId)
{
    this->auctionTypeId = auctionTypeId;
}


