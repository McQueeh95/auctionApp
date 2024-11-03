#include "addlotdialog.h"
#include "ui_addlotdialog.h"
#include "uiquery.h"
#include "lot.h"
#include "lotquery.h"
#include <QSqlQuery>

AddLotDialog::AddLotDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AddLotDialog)
{
    ui->setupUi(this);
    stringList = UiQuery::getLotTypes();
    for(const auto &type: stringList){
        ui->typeComboBox->addItem(type.second, QVariant(type.first));
        qDebug() << type;
    }
}

AddLotDialog::~AddLotDialog()
{
    qDebug() << "Add Lot deleted";
    delete ui;
}

void AddLotDialog::on_buttonBox_accepted()
{
    QString name = ui->nameLineEdit->text();
    int year = ui->yearLineEdit->text().toInt();
    int type = ui->typeComboBox->currentIndex();
    float desirePrice = ui->desirePriceLineEdit->text().toFloat();
    QString description = ui->descriptionTextEdit->toPlainText();
    int sellerId = getSellerId();

    qDebug() << name << year << type << desirePrice << description << sellerId;
    LotQuery::addLotQuery(name, year, desirePrice, type, sellerId, description);



}

