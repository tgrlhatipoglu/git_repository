#include "widget.h"
#include "ui_widget.h"
#include <QButtonGroup>
#include "qdebug.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    QButtonGroup * buttongroup = new QButtonGroup(this);
    buttongroup->addButton(ui->windowsCheckBox);
    buttongroup->addButton(ui->macCheckBox);
    buttongroup->addButton(ui->linuxCheckBox);

    buttongroup->setExclusive(true);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_windowsCheckBox_toggled(bool checked)
{
    if(checked)
        qDebug() << "Windows Checkbox is checked";
    else
        qDebug() << "Windows Checkboc is unchecked";
}

void Widget::on_beerCheckBox_toggled(bool checked)
{
    if(checked)
        qDebug() << "Beer Checkbox is checked";
    else
        qDebug() << "Beer Checkboc is unchecked";
}

void Widget::on_grapDataPushButton_clicked()
{
    if(ui->windowsCheckBox->isChecked())
        qDebug() << "Windows Checkbox is checked";
    else
       qDebug() << "Windows Checkbox is checked";
}

void Widget::on_pushButton_2_clicked()
{
    //Exclusive
    if(ui->windowsCheckBox->isChecked())
       ui->windowsCheckBox->setChecked(false);
    else
       ui->windowsCheckBox->setChecked(true);

    //Non Exclusive
    if(ui->beerCheckBox->isChecked())
       ui->beerCheckBox->setChecked(false);
    else
       ui->beerCheckBox->setChecked(true);

}
