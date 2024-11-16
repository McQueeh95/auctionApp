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


std::pair<int, Participator> LoginQuery::participatorLogin(QString login, QString password)
{
    QSqlDatabase db = DataBaseManager::databaseConnection();
    QSqlQuery query;
    query.prepare("SELECT participator_id, email, name, surname FROM participator WHERE email = :login AND password = :password");
    query.bindValue(":login", login);
    query.bindValue(":password", password);
    Participator participator{};
    if(query.exec()){
        while(query.next()){
            participator.setParticipatorId(query.value(0).toInt());
            participator.setEmail(query.value(1).toString());
            participator.setName(query.value(2).toString());
            participator.setSurname(query.value(3).toString());
        }
        if(participator.getParticipatorId() > 0){
            return std::pair{2, participator};
        }
    }
    return std::pair<int, Participator>{};
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

std::pair<int, Expert> LoginQuery::expertLogin(QString login, QString password)
{
    QSqlDatabase db = DataBaseManager::databaseConnection();
    QSqlQuery query;
    query.prepare("SELECT expert_id, email, name, surname, experience, phone_number FROM expert WHERE email = :login AND password = :password");
    query.bindValue(":login", login);
    query.bindValue(":password", password);
    query.exec();
    Expert expert{};
    while(query.next()){
        expert.setExpertId(query.value(0).toInt());
        expert.setEmail(query.value(1).toString());
        expert.setName(query.value(2).toString());
        expert.setSurname(query.value(3).toString());
        expert.setExperience(query.value(4).toInt());
        expert.setPhoneNumber(query.value(5).toString());
    }
    if(expert.getExpertId() > 0){
        return std::pair{4, expert};
    }
    return std::pair<int, Expert>{};
}

