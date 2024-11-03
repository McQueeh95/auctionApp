#ifndef SELLERFORM_H
#define SELLERFORM_H

#include "seller.h"
#include <QWidget>

namespace Ui {
class SellerForm;
}

class SellerForm : public QWidget
{
    Q_OBJECT

public:
    explicit SellerForm(QWidget *parent = nullptr);
    ~SellerForm();
    void setSellerInfo();
    void setSeller(Seller seller){
        this->seller = seller;
    }
    Seller getSeller(){
        return this->seller;
    }

private slots:
    void on_addLotButton_clicked();

    void on_logOutButton_clicked();

    void on_yourLotsButton_clicked();

private:
    Ui::SellerForm *ui;
    Seller seller;
};

#endif // SELLERFORM_H
