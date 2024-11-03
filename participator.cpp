#include "participator.h"

Participator::Participator() {}

Participator::Participator(int participatorId, QString email, QString name, QString surname, QString password)
    :participatorId{participatorId}, email{email}, name{name}, surname{surname}, password{password}
{
}

int Participator::getParticipatorId() const
{
    return participatorId;
}

QString Participator::getEmail() const{
    return email;
}

QString Participator::getName() const{
    return name;
}

QString Participator::getSurname() const{
    return surname;
}

void Participator::setParticipatorId(const int participatorId){
    this->participatorId = participatorId;
}

void Participator::setEmail(const QString email){
    this->email = email;
}

void Participator::setName(const QString name){
    this->name = name;
}

void Participator::setSurname(const QString surname){
    this->surname = surname;
}
