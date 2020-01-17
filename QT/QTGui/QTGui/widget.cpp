#include "widget.h"
#include "ui_widget.h"
#include "qdebug.h"
#include "qmessagebox.h"

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

void Widget::on_pushButton_clicked()
{
    qDebug() << "Message";
    QMessageBox::information(this,"Message","You clicked on button",QMessageBox::Ok);

}
