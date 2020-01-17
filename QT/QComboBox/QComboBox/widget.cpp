#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    //add planets to the combobox
    ui->comboBox->addItem("Earth");
    ui->comboBox->addItem("Venus");
    ui->comboBox->addItem("Mars");
    ui->comboBox->addItem("Pluton");
    ui->comboBox->addItem("Saturn");

    //Make the ComboBox Editable
    ui->comboBox->setEditable(true);

}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_capturePushButton_clicked()
{
    qDebug() << "ComboBox Text: " << ui->comboBox->currentText()
                << "Index: " << QString::number(ui->comboBox->currentIndex());
}

void Widget::on_setPushButton_clicked()
{
    ui->comboBox->setCurrentIndex(3);
}

void Widget::on_getPushButton_clicked()
{
    qDebug() << "Combobox currently has" << ui->comboBox->count();

    for(int i =0;i < ui->comboBox->count();i++)
    {
        qDebug()<< "Index:" << i+1 << ui->comboBox->itemText(i);
    }
}
