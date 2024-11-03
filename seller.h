#ifndef SELLER_H
#define SELLER_H
#include <QString>

class Seller
{
private:
    int sellerId = -1;
    QString email;
    QString name;
    QString surname;
    QString phoneNumber;
    QString password;
public:
    Seller();
    Seller(int sellerId, QString email, QString name, QString surname, QString phoneNumber, QString password);
    int getSellerId() const;
    QString getEmail() const;
    QString getName() const;
    QString getSurname() const;
    QString getPhoneNumber() const;
    QString getPassword() const;
    void setSellerId(const int sellerId);
    void setEmail(const QString email);
    void setName(const QString name);
    void setSurname(const QString surname);
    void setPhoneNumber(const QString phoneNumber);
    void setPassword(const QString password);


};

#endif // SELLER_H
