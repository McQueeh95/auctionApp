#include "uiquery.h"
#include "databasemanager.h"
#include <QSqlQuery>

UiQuery::UiQuery() {}

QList<std::pair<int, QString>> UiQuery::getLotTypes()
{
    QList<std::pair<int, QString>> lotTypes{};
    QSqlDatabase db = DataBaseManager::databaseConnection();
    QSqlQuery query;
    query.exec("SELECT lot_type_id, lot_type from lot_type");
    while (query.next()) {
        std::pair<int, QString> lotType(query.value(0).toInt(), query.value(1).toString());
        lotTypes.append(lotType);
    }
    return lotTypes;

}

QList<Lot> UiQuery::loadSellersLots(int sellerId)
{
    QSqlDatabase db = DataBaseManager::databaseConnection();
    QSqlQuery query;
    QList<Lot> lots{};
    query.prepare("SELECT name, year, desire_price, type, description FROM lot WHERE seller_id = :seller_id");
    query.bindValue(":seller_id", sellerId);
    query.exec();
    Lot lot{};
    while(query.next()){
        lot.setName(query.value(0).toString());
        lot.setYear(query.value(1).toInt());
        lot.setDesirePrice(query.value(2).toInt());
        lot.setType(query.value(3).toInt());
        lot.setDescription(query.value(4).toString());
        lots.append(lot);
    }
    return lots;
}
