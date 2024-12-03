#ifndef LOT_H
#define LOT_H
#include <QString>

class Lot
{
private:
    int lotId;
    QString name;
    int year;
    QString type; //make String
    float desirePrice;
    QString description;
    int sellerId;
public:
    Lot();
    Lot(QString name, int year, QString type, float desirePrice, QString description, int sellerId);
    Lot (QString name, int year, QString type, QString description, int sellerId);
    int getId() const;
    QString getName() const;
    int getYear() const;
    QString getType() const;
    int getDesirePrice() const;
    QString getDescription() const;
    int getSellerId() const;
    void setLotId(int lotId);
    void setName(QString name);
    void setYear(int year);
    void setType(QString type);
    void setDesirePrice(int type);
    void setDescription(QString description);
    void setSellerId(int sellerId);

};

#endif // LOT_H
