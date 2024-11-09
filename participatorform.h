#ifndef PARTICIPATORFORM_H
#define PARTICIPATORFORM_H

#include <QWidget>
#include "participator.h"
#include "auctiontablemodel.h"

namespace Ui {
class ParticipatorForm;
}

class ParticipatorForm : public QWidget
{
    Q_OBJECT

public:
    explicit ParticipatorForm(QWidget *parent = nullptr);
    ~ParticipatorForm();
    void setParticipator(const Participator &participator);
    Participator getParticipator() const;
    void setParticipatorInfo();
    void createModel();

private slots:
    void on_logOutButton_clicked();

private:
    Ui::ParticipatorForm *ui;
    Participator participator;
    AuctionTableModel *model;
};

#endif // PARTICIPATORFORM_H
