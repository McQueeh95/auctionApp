#ifndef PARTICIPATORFORM_H
#define PARTICIPATORFORM_H

#include <QWidget>
#include "participator.h"

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

private:
    Ui::ParticipatorForm *ui;
    Participator participator;
};

#endif // PARTICIPATORFORM_H
