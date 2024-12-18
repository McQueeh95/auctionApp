#ifndef EXPERTFORM_H
#define EXPERTFORM_H

#include <QWidget>
#include "expert.h"

namespace Ui {
class ExpertForm;
}

class ExpertForm : public QWidget
{
    Q_OBJECT

public:
    explicit ExpertForm(QWidget *parent = nullptr);
    Expert getExpert() const;
    void setExpert(const Expert &expert);
    void setExpertInfo();
    void createModel();
    ~ExpertForm();

private slots:
    void on_logOutButton_clicked();
    void on_addAppraisalButton_clicked();
    void refreshSignal();

private:
    Ui::ExpertForm *ui;
    Expert expert;

};

#endif // EXPERTFORM_H
