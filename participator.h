#ifndef PARTICIPATOR_H
#define PARTICIPATOR_H
#include <QString>

class Participator
{
private:
    int participatorId;
    QString email;
    QString name;
    QString surname;
    QString password;
public:
    Participator();
    Participator(int participatorId, QString email, QString name, QString surname, QString password);
    int getParticipatorId() const;
    QString getEmail() const;
    QString getName() const;
    QString getSurname() const;
    void setParticipatorId(const int participatorId);
    void setEmail(const QString email);
    void setName(const QString name);
    void setSurname(const QString surname);
};

#endif // PARTICIPATOR_H
