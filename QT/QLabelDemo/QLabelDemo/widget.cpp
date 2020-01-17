#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->miniontextlabel->move(100,30);

    //Add an image to the second label
    QPixmap minionPixmap("://image/minion_png.png");

    ui->imagelabel->move(0,70);
    ui->imagelabel->setPixmap(minionPixmap.scaled(315,315));
}

Widget::~Widget()
{
    delete ui;
}
