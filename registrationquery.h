#ifndef REGISTRATIONQUERY_H
#define REGISTRATIONQUERY_H
#include "databasemanager.h"

class RegistrationQuery
{
private:
    RegistrationQuery();
public:
    static int addParticipator(const QString email, const QString name, const QString surname, const QString password);
    static int addSeller(const QString email, const QString name, const QString surname, const QString phone, const QString password);
    static int addExpert(const QString email, const QString name, const QString surname, const QString phone, const int experience, const QString password);
};

#endif // REGISTRATIONQUERY_H
