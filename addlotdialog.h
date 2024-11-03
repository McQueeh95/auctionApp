#ifndef ADDLOTDIALOG_H
#define ADDLOTDIALOG_H

#include <QDialog>

namespace Ui {
class AddLotDialog;
}

class AddLotDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AddLotDialog(QWidget *parent = nullptr);
    ~AddLotDialog();
    void setSellerId(int sellerId){
        this->sellerId = sellerId;
    }
    int getSellerId(){
        return sellerId;
    }

private slots:
    void on_buttonBox_accepted();

private:
    Ui::AddLotDialog *ui;
    QList<std::pair<int, QString>> stringList;
    int sellerId;
};

#endif // ADDLOTDIALOG_H
