#include "lottablemodel.h"

lotTableModel::lotTableModel(const QVector<Lot> &lots, QObject *parent)
    : QAbstractTableModel{parent}, mLots{lots}
{
    qDebug() << "LotTableModel Constructor";
    for(const auto& l: lots){
        qDebug() << l.getName();
    }
}


int lotTableModel::rowCount(const QModelIndex &parent) const
{
    if(!parent.isValid())
        return mLots.size();
    return 0;
}

int lotTableModel::columnCount(const QModelIndex &parent) const
{
    if(!parent.isValid() && mLots.at(0).getDesirePrice() == 0)
        return 4;
    else if(!parent.isValid())
        return 5;
    return 0;
}

QVariant lotTableModel::data(const QModelIndex &index, int role) const
{
    if(role == Qt::DisplayRole){
        const Lot& lot = mLots.at(index.row());
        if(index.column() == 0)
            return lot.getName();
        if(index.column() == 1)
            return lot.getYear();
        if(index.column() == 2)
            return lot.getType();
        if(index.column() == 3)
            return lot.getDescription();
        if(index.column() == 4 && lot.getDesirePrice()>0)
            return lot.getDesirePrice();
        else
            return "Add Appraisal";
    }
    return QVariant();
}

QVariant lotTableModel::headerData(int section, Qt::Orientation orientation, int role) const
{
    if(orientation == Qt::Horizontal && role == Qt::DisplayRole){
        switch(section){
        case 0:
            return "Name";
            break;
        case 1:
            return "Year";
            break;
        case 2:
            return "Type";
            break;
        case 3:
            return "Description";
            break;
        case 4:
            return "Desire Price";
            break;
            return "";
        }
    }
    return {};
}
