#ifndef AUCTION_H
#define AUCTION_H
#include <QString>
class Auction
{
private:
    int auctionId;
    QString startTime;
    QString endTime;
    int announcerId;
    int auctionTypeId;
public:
    Auction();
    Auction(int auctionId, QString startTime, QString endTime, int announcerId, int auctionTypeId);
    int getAuctionId() const;
    QString getStartTime() const;
    QString getEndTime() const;
    int getAnnouncerId() const;
    int getAuctionTypeId() const;
    void setAuctionId(const int auctionId);
    void setStartTime(const QString startTime);
    void setEndTime(const QString endTime);
    void setAnnouncerId(const int announcerId);
    void setAuctionTypeId(const int auctionTypeId);


};

#endif // AUCTION_H
