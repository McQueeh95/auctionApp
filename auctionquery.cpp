#include "auctionquery.h"
#include <QSqlQuery>
#include <QDateTime>
#include "databasemanager.h"


AuctionQuery::AuctionQuery() {}

QVector<Auction> AuctionQuery::getAuctionQuery()
{
    QDateTime now = QDateTime::currentDateTime();
    QSqlDatabase db = DataBaseManager::databaseConnection();
    QSqlQuery query;
    query.prepare("SELECT auction_id, start_time, end_time, announcer_id, auction_type_id  FROM auction WHERE start_time > :time_now");
    query.bindValue(":time_now", now);
    query.exec();
    QVector<Auction> auctions{};
    while(query.next()){
        Auction auction{query.value(0).toInt(), query.value(1).toString(), query.value(2).toString(), query.value(3).toInt(), query.value(4).toInt()};
        QString sTime = auction.getStartTime();
        QString eTime = auction.getEndTime();
        eTime.replace('T', ' ');
        sTime.replace('T', ' ');
        auction.setStartTime(sTime);
        auction.setEndTime(eTime);
        auctions.push_back(auction);
    }
    return auctions;
}

QVector<std::pair<int, QString>> AuctionQuery::auctionTypes()
{
    QSqlDatabase db = DataBaseManager::databaseConnection();
    QSqlQuery query;
    query.prepare("SELECT auction_type_id, auction_type FROM auction_type");
    QVector<std::pair<int, QString>> auctionTypes{};
    query.exec();
    while(query.next())
        auctionTypes.push_back({query.value(0).toInt(), query.value(1).toString()});
    return auctionTypes;
}

QVector<std::pair<int, QString> > AuctionQuery::getAnnouncers()
{
    QSqlDatabase db = DataBaseManager::databaseConnection();
    QSqlQuery query;
    query.prepare("SELECT announcer_id, name, surname FROM announcer");
    QVector<std::pair<int, QString>> announcers{};
    query.exec();
    while(query.next()){
        QString name{query.value(1).toString()};
        name += " ";
        name += query.value(2).toString();
        announcers.push_back({query.value(0).toInt(), name});
    }
    return announcers;
}
