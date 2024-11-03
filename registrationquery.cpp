#include "registrationquery.h"
#include <QDebug>
#include <QSqlError>
#include <QSqlQuery>



RegistrationQuery::RegistrationQuery() {}

int RegistrationQuery::addParticipator(const QString email, const QString name, const QString surname, const QString password)
{
    QSqlDatabase db = DataBaseManager::databaseConnection();
    QSqlQuery query;
    query.prepare("INSERT INTO participator (email, name, surname, password)"
                  "VALUES (:email, :name, :surname, :password)");
    query.bindValue(":email", email);
    query.bindValue(":name", name);
    query.bindValue(":surname", surname);
    query.bindValue(":password", password);
    if(!query.exec())
        return -1;
    return 1;
}

int RegistrationQuery::addSeller(const QString email, const QString name, const QString surname, const QString phone, const QString password)
{
    QSqlDatabase db = DataBaseManager::databaseConnection();
    QSqlQuery query;
    query.prepare("INSERT INTO seller (email, name, surname, phone_number, password)"
                  "VALUES (:email, :name, :surname, :phone, :password)");
    query.bindValue(":email", email);
    query.bindValue(":name", name);
    query.bindValue(":surname", surname);
    query.bindValue(":phone", phone);
    query.bindValue(":password", password);
    if(!query.exec())
        return -1;
    return 1;
}

int RegistrationQuery::addExpert(const QString email, const QString name, const QString surname, const QString phone, const int experience, const QString password)
{
    QSqlDatabase db = DataBaseManager::databaseConnection();
    QSqlQuery query;
    query.prepare("INSERT INTO expert (email, name, surname, experience, phone_number, password)"
                  "VALUES (:email, :name, :surname, :experience, :phone, :password)");
    query.bindValue(":email", email);
    query.bindValue(":name", name);
    query.bindValue(":surname", surname);
    query.bindValue(":experience", experience);
    query.bindValue(":phone", phone);
    query.bindValue(":password", password);
    if(!query.exec())
        return -1;
    return 1;
}




