#include "databasemanager.h"
#include <QDebug>
#include <QSqlError>

QSqlDatabase& DataBaseManager::databaseConnection()
{
    static QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    QString connectionString = QStringLiteral(
        "Driver={SQL Server};"
        "Server=MCQUEEN;"
        "Database=AuctionDatabase;"
        "Trusted_Connection=True;"
        );
    db.setDatabaseName(connectionString);
    return db;
}

DataBaseManager::DataBaseManager() {}
