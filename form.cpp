#include "form.h"
#include "ui_form.h"
#include "widget.h"
#include "addlotdialog.h"
#include "WindowController.h"

Form::Form(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Form)
{
    ui->setupUi(this);
}

Form::~Form()
{
    qDebug() << "Form deleted";
    delete ui;
}

void Form::on_logOutButton_clicked()
{
    this->close();
    WindowContoller::instance().showMain();
}


void Form::on_addLotButton_clicked()
{
    AddLotDialog* addLot = new AddLotDialog();
    addLot->setFocus();
    addLot->setAttribute(Qt::WA_DeleteOnClose);
    addLot->show();
}

