#ifndef ADDAPPRAISALFORM_H
#define ADDAPPRAISALFORM_H

#include <QDialog>
#include "lot.h"
#include "expert.h"

namespace Ui {
class AddAppraisalForm;
}

class AddAppraisalForm : public QDialog
{
    Q_OBJECT

public:
    explicit AddAppraisalForm(QWidget *parent = nullptr);
    ~AddAppraisalForm();
    void setLot(const Lot &lot);
    Lot getLot() const;
    void setLotInfo();
    void setExpert(const Expert &expert);
signals:
    void refreshSignal();
private slots:
    void on_buttonBox_accepted();
    void sendRefresh();

private:
    Ui::AddAppraisalForm *ui;
    Lot lot;
    Expert expert;
};

#endif // ADDAPPRAISALFORM_H
