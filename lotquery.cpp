#include "lotquery.h"
#include "databasemanager.h"
#include "QSqlQuery"
LotQuery::LotQuery() {}

int LotQuery::addLotQuery(QString name, int year, float desirePrice, int type, int sellerId, QString description)
{
    QSqlDatabase db = DataBaseManager::databaseConnection();
    QSqlQuery query;
    query.prepare("INSERT INTO lot (name, year, desire_price, type, seller_id, description)"
                  "VALUES (:name, :year, :desire_price, :type, :seller_id, :description)");
    query.bindValue(":name", name);
    query.bindValue(":year", year);
    query.bindValue(":desire_price", desirePrice);
    query.bindValue(":type", type);
    query.bindValue(":seller_id", sellerId);
    query.bindValue(":description", description);
    if(query.exec())
        return 1;
    return -1;
}

QVector<Lot> LotQuery::getLotsSellerQuery(const Seller& seller){
    QSqlDatabase db = DataBaseManager::databaseConnection();
    QSqlQuery query;
    QVector<Lot> lots{};
    query.prepare("SELECT lot.name, lot.year, lot.desire_price, lt.lot_type, lot.description FROM lot "
                  "INNER JOIN lot_type as lt ON lt.lot_type_id = lot.type "
                  "WHERE seller_id = :seller_id");
    query.bindValue(":seller_id", seller.getSellerId());
    query.exec();
    while(query.next()){
        Lot lot{query.value(0).toString(), query.value(1).toInt(), query.value(3).toString(), query.value(2).toFloat(), query.value(4).toString(), seller.getSellerId()};
        lots.append(lot);
    }
    return lots;
}

QVector<Lot> LotQuery::getLotsAuctionQuery(const Auction &auction){
    QSqlDatabase db = DataBaseManager::databaseConnection();
    QSqlQuery query;
    qDebug() << "getLotsQuery" << auction.getAuctionId();
    QVector<Lot> lots{};
    query.prepare("SELECT lot.name, lot.year, lot.desire_price, lt.lot_type, lot.description, lot.seller_id FROM lot "
                "INNER JOIN lot_auction ON lot_auction.auction_id = :auction_id "
                "INNER JOIN lot_type AS lt ON lt.lot_type_id = lot.type "
                "WHERE lot_auction.lot_id = lot.lot_id");
    query.bindValue(":auction_id", auction.getAuctionId());
    query.exec();
    while(query.next()){
        Lot lot{query.value(0).toString(), query.value(1).toInt(), query.value(3).toString(), query.value(2).toFloat(), query.value(4).toString(), query.value(5).toInt()};
        qDebug() << "getLotsQueryLoop" << lot.getName();
        lots.append(lot);
    }
    return lots;
}
