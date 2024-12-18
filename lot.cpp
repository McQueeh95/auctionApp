#include "lot.h"

Lot::Lot() {}

int Lot::getId()const{
    return lotId;
}

QString Lot::getName() const
{
    return name;
}

int Lot::getYear() const
{
    return year;
}

QString Lot::getType() const{
    return type;
}

int Lot::getDesirePrice() const{
    return desirePrice;
}

QString Lot::getDescription() const{
    return description;
}

int Lot::getSellerId() const{
    return sellerId;
}

Lot::Lot(QString name, int year, QString type, float desirePrice, QString description, int sellerId):
    name{name}, year{year}, type{type}, desirePrice{desirePrice}, description{description}, sellerId(sellerId)
{

}

Lot::Lot(QString name, int year, QString type, QString description, int sellerId):
    name{name}, year{year}, type{type}, desirePrice{0}, description{description}, sellerId{sellerId}
{

}

void Lot::setLotId(int lotId){
    this->lotId = lotId;
}

void Lot::setName(QString name){
    this->name = name;
}

void Lot::setType(QString type){
    this->type = type;
}
void Lot::setYear(int year){
    this->year = year;
}
void Lot::setDesirePrice(int desirePrice){
    this->desirePrice = desirePrice;
}

void Lot::setDescription(QString description){
    this->description = description;
}

void Lot::setSellerId(int sellerId){
    this->sellerId = sellerId;
}
