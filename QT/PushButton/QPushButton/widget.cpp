#include "widget.h"
#include <QPushButton>
#include "qdebug.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    //Clicked Signal
    QPushButton * button = new QPushButton("Button 1",this);
    QFont buttonFont("Times", 20, QFont::Bold);
    setMinimumSize(200,100);
    button->setFont(buttonFont);
    connect(button,&QPushButton::clicked,[=](){
        qDebug() << "Button Clicked";
    });

    //Clicked Signal
    QPushButton * button2 = new QPushButton("Button 2",this);
    setMinimumSize(200,100);
    button2->move(205,0);
    button2->setFont(buttonFont);
    connect(button2,&QPushButton::pressed,[=](){
        qDebug() << "Button 2 Pressed";
    });
    connect(button2,&QPushButton::released,[=](){
        qDebug() << "Button 2 released";
    });
}

Widget::~Widget()
{

}
