#ifndef AUCTION_H
#define AUCTION_H
#include <QString>
class Auction
{
private:
    int auctionId;
    QString startTime;
    QString endTime;
    QString announcer;
    QString auctionType;
public:
    Auction();
    Auction(int auctionId, QString startTime, QString endTime, QString announcer, QString auctionType);
    int getAuctionId() const;
    QString getStartTime() const;
    QString getEndTime() const;
    QString getAnnouncer() const;
    QString getAuctionType() const;
    void setAuctionId(const int auctionId);
    void setStartTime(const QString startTime);
    void setEndTime(const QString endTime);
    void setAnnouncer(const QString announcer);
    void setAuctionType(const QString auctionType);


};

#endif // AUCTION_H
