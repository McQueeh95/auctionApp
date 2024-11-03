#ifndef LOGINQUERY_H
#define LOGINQUERY_H
#include <QSqlQuery>
#include "seller.h"
#include "admin.h"
#include "participator.h"

#include "databasemanager.h"

enum userType{
    admin = 1,
    participator = 2,
    seller = 3
};

class LoginQuery
{
private:
    LoginQuery();
public:
    static std::pair<int, Admin> adminLogin(QString login, QString password);
    static std::pair<int, Participator> participatorLogin(QString login, QString password);
    static std::pair<int, Seller> sellerLogin(QString login, QString password);

};

#endif // LOGINQUERY_H
