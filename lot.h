#ifndef LOT_H
#define LOT_H
#include <QString>

class Lot
{
private:
    int lotId;
    QString name;
    int year;
    int type; //make String
    float desirePrice;
    QString description;
    int sellerId;
public:
    Lot();
    Lot(QString name, int year, int type, float desirePrice, QString description, int sellerId);
    QString getName() const;
    int getYear() const;
    int getType() const;
    int getDesirePrice() const;
    QString getDescription() const;
    void setLotId(int lotId);
    void setName(QString name);
    void setYear(int year);
    void setType(int type);
    void setDesirePrice(int type);
    void setDescription(QString description);
    void setSellerId(int sellerId);

};

#endif // LOT_H
