#ifndef AUCTIONTABLEMODEL_H
#define AUCTIONTABLEMODEL_H

#include <QAbstractTableModel>
#include "auction.h"
class AuctionTableModel : public QAbstractTableModel
{
private:
    QVector<Auction> mAuctions;
public:
    explicit AuctionTableModel(const QVector<Auction> &auctions, QObject *parent = nullptr);
    int rowCount(const QModelIndex &parent) const;
    int columnCount(const QModelIndex &parent) const;
    QVariant data(const QModelIndex &index, int role) const;
    QVariant headerData(int section, Qt::Orientation orientation, int role) const;

};

#endif // AUCTIONTABLEMODEL_H
