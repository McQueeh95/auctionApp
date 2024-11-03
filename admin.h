#ifndef ADMIN_H
#define ADMIN_H
#include <QString>
class Admin
{
private:
    int adminId = -1;
    QString login;
    QString password;
public:
    Admin();
    Admin(int adminId, QString login, QString password);
    void setAdminId(int adminId);
    void setLogin(QString login);
    void setPassword(QString password);
    int getAdminId();
    QString getLogin();
    QString getPassword();
};

#endif // ADMIN_H
