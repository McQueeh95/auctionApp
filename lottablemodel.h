#ifndef LOTTABLEMODEL_H
#define LOTTABLEMODEL_H

#include <QAbstractTableModel>
#include "lot.h"
#include "lotquery.h"
#include "seller.h"
#include "uiquery.h"

class lotTableModel : public QAbstractTableModel
{
public:
    explicit lotTableModel(const QVector<Lot> &lots, QObject *parent = nullptr);
    //explicit lotTableModel(const  Auction &auctions, QObject *parent = nullptr);
    // QAbstractItemModel interface
    int rowCount(const QModelIndex &parent) const;
    int columnCount(const QModelIndex &parent) const;
    QVariant data(const QModelIndex &index, int role) const;
    QVariant headerData(int section, Qt::Orientation orientation, int role) const;
private:
    QVector<Lot> mLots;
};

#endif // LOTTABLEMODEL_H
