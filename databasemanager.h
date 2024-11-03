#ifndef DATABASEMANAGER_H
#define DATABASEMANAGER_H
#include <QSqlDatabase>

class DataBaseManager
{
private:
    DataBaseManager();
    DataBaseManager(const DataBaseManager&) = delete;
    DataBaseManager& operator=(const DataBaseManager&) = delete;
public:
    static QSqlDatabase& databaseConnection();

};

#endif // DATABASEMANAGER_H
