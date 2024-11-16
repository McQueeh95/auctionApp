#ifndef EXPERT_H
#define EXPERT_H
#include <QString>

class Expert
{
private:
    int expertId;
    QString name;
    QString surname;
    QString email;
    int experience;
    QString phoneNumber;
    QString password;

public:
    Expert();
    Expert(int expertId, QString email, QString name, QString surname, int experience, QString phoneNumber, QString password);
    int getExpertId() const;
    QString getName() const;
    QString getSurname() const;
    QString getEmail() const;
    int getExperience() const;
    QString getPhoneNumber() const;
    void setExpertId(const int expertId);
    void setName(const QString name);
    void setSurname(const QString surname);
    void setEmail(const QString email);
    void setExperience(const int experience);
    void setPhoneNumber(const QString phoneNumber);
    void setPassword(const QString password);
};

#endif // EXPERT_H
