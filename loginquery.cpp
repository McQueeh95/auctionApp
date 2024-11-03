#include "loginquery.h"

LoginQuery::LoginQuery() {}

std::pair<int, Admin> LoginQuery::adminLogin(QString login, QString password){
    QSqlDatabase db = DataBaseManager::databaseConnection();
    QSqlQuery query;
    query.prepare("SELECT admin_id, login, password FROM admin WHERE login = :login AND password = :password");
    query.bindValue(":login", login);
    query.bindValue(":password", password);
    query.exec();
    Admin admin{};
    while(query.next()){
        admin.setAdminId(query.value(0).toInt());
        admin.setLogin(query.value(1).toString());
        admin.setPassword(query.value(2).toString());
    }
    if(admin.getAdminId() > 0)
        return std::pair(1, admin);
    return std::pair<int, Admin> {};
}


std::pair<int, int> LoginQuery::userLogin(QString login, QString password)
{
    QSqlDatabase db = DataBaseManager::databaseConnection();
    QSqlQuery query;
    query.prepare("SELECT participator_id FROM participator WHERE email = :login AND password = :password");
    query.bindValue(":login", login);
    query.bindValue(":password", password);
    int result{};
    query.exec();
    while(query.next()){
        result = query.value(0).toInt();
    }
    if(result > 0)
        return std::pair<int, int>(2, result);
    return std::pair<int, int>{};
}

std::pair<int, Seller> LoginQuery::sellerLogin(QString login, QString password){
    QSqlDatabase db = DataBaseManager::databaseConnection();
    QSqlQuery query;
    query.prepare("SELECT seller_id, email, name, surname, phone_number, password FROM seller WHERE email = :login AND password = :password");
    query.bindValue(":login", login);
    query.bindValue(":password", password);
    Seller seller{};
    if(query.exec()){
        while(query.next()){
            seller.setSellerId(query.value(0).toInt());
            seller.setEmail(query.value(1).toString());
            seller.setName(query.value(2).toString());
            seller.setSurname(query.value(3).toString());
            seller.setPhoneNumber(query.value(4).toString());
            seller.setPassword(query.value(5).toString());
        }
        if(seller.getSellerId() > 0){
            return std::pair{3, seller};
        }
    }
    return std::pair<int, Seller>{};
}

