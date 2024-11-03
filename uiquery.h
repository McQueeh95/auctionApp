#ifndef UIQUERY_H
#define UIQUERY_H
#include <QString>
#include "lot.h"
class UiQuery
{
public:
    UiQuery();
    static QList<std::pair<int, QString>> getLotTypes();
    static QList<Lot> loadSellersLots(int sellerId);
};

#endif // UIQUERY_H
