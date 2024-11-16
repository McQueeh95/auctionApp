#include "expert.h"

Expert::Expert() {}

Expert::Expert(int expertId, QString email, QString name, QString surname, int experience, QString phoneNumber, QString password)
    :expertId(expertId), email{email}, name{name}, surname{surname}, experience{experience}, phoneNumber{phoneNumber}, password{password}
{
}

int Expert::getExpertId() const
{
    return expertId;
}

QString Expert::getEmail() const{
    return email;
}

QString Expert::getName() const{
    return name;
}

QString Expert::getSurname() const{
    return surname;
}

int Expert::getExperience() const{
    return experience;
}

QString Expert::getPhoneNumber() const{
    return phoneNumber;
}

void Expert::setExpertId(const int expertId){
    this->expertId = expertId;
}

void Expert::setEmail(const QString email){
    this->email = email;
}

void Expert::setName(const QString name){
    this->name = name;
}

void Expert::setSurname(const QString surname){
    this->surname = surname;
}

void Expert::setExperience(const int experience){
    this->experience = experience;
}

void Expert::setPhoneNumber(const QString phoneNumber){
    this->phoneNumber = phoneNumber;
}

void Expert::setPassword(const QString password){
    this->password = password;
}
