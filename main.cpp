#include "widget.h"
#include "databasemanager.h"

#include <QApplication>


int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    QSqlDatabase db = DataBaseManager::databaseConnection();
    db.open();
    Widget w;
    w.show();
    return a.exec();
}
