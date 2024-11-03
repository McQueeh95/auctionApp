#include "admin.h"

Admin::Admin() {
}

Admin::Admin(int adminId, QString login, QString password):
    adminId{adminId}, login{login}, password{password}
{

}
void Admin::setAdminId(int adminId){
    this->adminId = adminId;
}
void Admin::setLogin(QString login)
{
    this->login = login;
}

void Admin::setPassword(QString password)
{
    this->password = password;
}

int Admin::getAdminId()
{
    return adminId;
}

QString Admin::getLogin()
{
    return login;
}

QString Admin::getPassword()
{
    return password;
}
