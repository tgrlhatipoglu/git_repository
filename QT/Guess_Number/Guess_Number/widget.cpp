#include "widget.h"
#include "ui_widget.h"
#include <stdlib.h>
#include <time.h>
#include "qdebug.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    //initialize
    srand(time(NULL));

    //generate
    secretNumber = rand() % 10 +1;
    qDebug()<<"Secret Number is generated" << QString::number(secretNumber)<<endl;
     ui->StartOverButton->setDisabled(true);
     ui->MessageLabel->setText("");
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_GuessButton_clicked()
{
    guessNumber = ui->spinBox->value();
    if(guessNumber == secretNumber)
    {
        //Congratulation
        ui->MessageLabel->setText("Congratulation!!! Number is: " + QString::number(secretNumber));
        ui->GuessButton->setDisabled(true);
        ui->StartOverButton->setDisabled(false);
    }
    else
    {
        if(guessNumber<secretNumber)
        {
            ui->MessageLabel->setText("Number is higher than that");
        }
        else
        {
            ui->MessageLabel->setText("Number is lower than that");
        }

    }
}

void Widget::on_StartOverButton_clicked()
{
    ui->GuessButton->setDisabled(false);
    ui->StartOverButton->setDisabled(true);
    ui->spinBox->setValue(1);
    secretNumber = rand() % 10 +1;
    ui->MessageLabel->setText("");
}
