#include "widget.h"
#include "ui_widget.h"
#include "infodialog.h"
#include "qdebug.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_showInfoButton_clicked()
{
    infoDialog * dialog = new infoDialog(this);

    connect(dialog,&infoDialog::accepted,[=](){
        qDebug() << "Accepted";

    });

    connect(dialog,&infoDialog::rejected,[=](){
        qDebug() << "Rejected";

    });

    dialog->exec();
}
