#include "lottablemodel.h"

lotTableModel::lotTableModel(const QVector<Lot> &lots, QObject *parent)
    : QAbstractTableModel{parent}, m_lots{lots}
{}


int lotTableModel::rowCount(const QModelIndex &parent) const
{
    if(!parent.isValid())
        return m_lots.size();
    return 0;
}

int lotTableModel::columnCount(const QModelIndex &parent) const
{
    if(!parent.isValid())
        return 5;
    return 0;
}

QVariant lotTableModel::data(const QModelIndex &index, int role) const
{
    if(role == Qt::DisplayRole){
        const Lot& lot = m_lots.at(index.row());
        if(index.column() == 0)
            return lot.getName();
        if(index.column() == 1)
            return lot.getYear();
        if(index.column() == 2)
            return lot.getDesirePrice();
        if(index.column() == 3){
            QList<std::pair<int, QString>> types = UiQuery::getLotTypes();
            auto it = std::find_if(types.begin(), types.end(), [typeId = lot.getType()](const std::pair<int, QString>& type){
                return type.first == typeId;
            });
            if(it != types.end()){
                    return it->second;
                }
            return QVariant();}
        if(index.column() == 4)
            return m_lots.at(index.row()).getDescription();
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
            return "Desire Price";
            break;
        case 3:
            return "Type";
            break;
        case 4:
            return "Description";
            break;
            return "";
        }
    }
    return {};
}
