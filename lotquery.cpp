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
    query.prepare("SELECT lot.name, lot.year, sp.starting_bid, lt.lot_type, lot.description FROM lot "
                  "INNER JOIN lot_type as lt ON lt.lot_type_id = lot.type "
                  "INNER JOIN start_price AS sp ON lot.start_bid = sp.start_price_id "
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
    QVector<Lot> lots{};
    query.prepare("SELECT lot.name, lot.year, lot.desire_price, lt.lot_type, lot.description, lot.seller_id FROM lot "
                "INNER JOIN lot_auction ON lot_auction.auction_id = :auction_id "
                "INNER JOIN lot_type AS lt ON lt.lot_type_id = lot.type "
                "INNER JOIN start_price AS sp ON lot.start_bid = sp.start_price_id "
                "WHERE lot_auction.lot_id = lot.lot_id");
    query.bindValue(":auction_id", auction.getAuctionId());
    query.exec();
    while(query.next()){
        Lot lot{query.value(0).toString(), query.value(1).toInt(), query.value(3).toString(), query.value(2).toFloat(), query.value(4).toString(), query.value(5).toInt()};
        lots.append(lot);
    }
    return lots;
}

QVector<Lot> LotQuery::getLotsForAppraisal()
{
    QSqlDatabase db = DataBaseManager::databaseConnection();
    QSqlQuery query;
    QVector<Lot> lots{};
    query.prepare("SELECT lot.name, lot.year, lt.lot_type, lot.description, lot.seller_id, lot.lot_id FROM lot "
                  "INNER JOIN lot_type AS lt ON lt.lot_type_id = lot.type "
                  "WHERE lot.start_bid IS NULL");
    if(!query.exec())
        qDebug() << "getLotsForAppraisal!";
    while(query.next()){
        Lot lot{query.value(0).toString(), query.value(1).toInt(), query.value(2).toString(), query.value(3).toString(), query.value(4).toInt()};
        lot.setLotId(query.value(5).toInt());
        lots.append(lot);
    }
    return lots;
}

int LotQuery::addAppraisal(int lotId, int expertId, float startingBid)
{
    QSqlDatabase db = DataBaseManager::databaseConnection();
    QSqlQuery query;
    query.prepare("DECLARE @inserted_id TABLE (start_price_id INT);"
                  ""
                  "INSERT INTO start_price(starting_bid, lot_id, expert_id) "
                  "OUTPUT INSERTED.start_price_id INTO @inserted_id "
                  "VALUES (:starting_bid, :lot_id, :expert_id);"
                  ""
                  "DECLARE @bid_id INT;"
                  "SELECT @bid_id = start_price_id FROM @inserted_id;"
                  ""
                  "UPDATE lot "
                  "SET start_bid = @bid_id "
                  "WHERE lot_id = :lot_id");
    query.bindValue(":starting_bid", startingBid);
    query.bindValue(":lot_id", lotId);
    query.bindValue(":expert_id", expertId);
    if(query.exec())
        return 1;
    return -1;
}




