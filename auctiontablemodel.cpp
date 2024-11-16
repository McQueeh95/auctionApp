#include "auctiontablemodel.h"
#include "auctionquery.h"

AuctionTableModel::AuctionTableModel(const QVector<Auction> &auctions, QObject *parent)
    : QAbstractTableModel{parent}, mAuctions{auctions}
{}

int AuctionTableModel::rowCount(const QModelIndex &parent) const
{
    if(!parent.isValid())
        return mAuctions.size();
    return 0;
}

int AuctionTableModel::columnCount(const QModelIndex &parent) const{
    if(!parent.isValid()){
        return 4;
    }
    return 0;
}


QVariant AuctionTableModel::data(const QModelIndex &index, int role) const{

    if(role == Qt::DisplayRole){
        const Auction& auction = mAuctions.at(index.row());
        if(index.column() == 0){
            return auction.getAuctionType();
            /*const QVector<std::pair<int, QString>> types = AuctionQuery::auctionTypes();
            auto it = std::find_if(types.begin(), types.end(), [typeId = auction.getAuctionTypeId()](const std::pair<int, QString> &type){
                return type.first == typeId;
            });
            if(it != types.end()){
                return it->second;
                }
            return QVariant();*/
        }
        if(index.column() == 1){
            return auction.getStartTime();
        }
        if(index.column() == 2){
            return auction.getEndTime();
        }
        if(index.column() == 3){
            return auction.getAnnouncer();
            /*const QVector<std::pair<int, QString>> announcers = AuctionQuery::getAnnouncers();
            auto it = std::find_if(announcers.begin(), announcers.end(), [announcerId = auction.getAnnouncerId()](const std::pair<int, QString> &announcer){
                return announcer.first == announcerId;
            });
            if(it != announcers.end()){
                return it->second;*/
        }
    }
    return QVariant();
}

QVariant AuctionTableModel::headerData(int section, Qt::Orientation orientation, int role) const
{
    if(orientation == Qt::Horizontal && role == Qt::DisplayRole){
        switch(section){
        case 0:
            return "Type";
            break;
        case 1:
            return "Start";
            break;
        case 2:
            return "End";
            break;
        case 3:
            return "Announcer";
            break;
        }
    }
    return {};
}
