#include "widget.h"
#include "ui_widget.h"
#include "qdebug.h"


Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    /*
    //1. string notation
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(changeText()));
    */

    //2. Functor Notation : Regular Slots
    //connect(ui->pushButton,&QPushButton::clicked,this,&Widget::changeText);

    //3. Lambda
    connect(ui->pushButton,&QPushButton::clicked,[=](){
      ui->label->setText("Lambda");
    });
}

Widget::~Widget()
{
    delete ui;
}

void Widget::changeText()
{
    qDebug()<<"User clicked on button"<<endl;
    ui->label->setText("Hello There");
}
