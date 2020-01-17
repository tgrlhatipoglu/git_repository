#include "widget.h"
#include "ui_widget.h"
#include <qdebug.h>

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
    qDebug() << "Submitting Data";
    qDebug() << "First Name is : " << ui->FirstNameLineEdit->text();
    qDebug() << "Last Name is : " << ui->LastNameLineEdit->text();
    qDebug() << "Message is : " << ui->MessageTextEdit->toPlainText();
}
