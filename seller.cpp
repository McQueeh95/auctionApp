#include "seller.h"

Seller::Seller() {}

Seller::Seller(int sellerId, QString email, QString name, QString surname, QString phoneNumber, QString password):
    sellerId{sellerId}, email{email}, name{name}, surname{surname}, phoneNumber{phoneNumber}, password{password}
{
}

int Seller::getSellerId() const
{
    return sellerId;
}
QString Seller::getEmail() const{
    return email;
}

QString Seller::getName() const
{
    return name;
}

QString Seller::getSurname() const
{
    return surname;
}

QString Seller::getPhoneNumber() const
{
    return phoneNumber;
}

QString Seller::getPassword() const
{
    return password;
}

void Seller::setSellerId(const int sellerId)
{
    this->sellerId = sellerId;
}

void Seller::setEmail(const QString email)
{
    this->email = email;
}

void Seller::setName(const QString name)
{
    this->name = name;
}

void Seller::setSurname(const QString surname)
{
    this->surname = surname;
}

void Seller::setPhoneNumber(const QString phoneNumber)
{
    this->phoneNumber = phoneNumber;
}

void Seller::setPassword(const QString password)
{
    this->password = password;
}
