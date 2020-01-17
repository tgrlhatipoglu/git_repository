#include "widget.h"
#include "ui_widget.h"
#include <QVBoxLayout>
#include "qdebug.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    QWidget *widget = new QWidget(this);

    QVBoxLayout *layout = new QVBoxLayout(this);

    layout->addWidget(new QPushButton("Button1",this));
    layout->addWidget(new QPushButton("Button2",this));
    layout->addWidget(new QPushButton("Button3",this));
    QPushButton *button4 = new QPushButton("Button4",this);
    connect(button4,&QPushButton::clicked,[=](){
        qDebug() << "Button 4 is clicked";
    });
    layout->addWidget(button4);
    layout->addSpacerItem(new QSpacerItem(100,200));

    widget->setLayout(layout);

    //ui->tabWidget->addTab(widget,"Tab 4");
    ui->tabWidget->insertTab(1,widget,"Tab 4");
}

Widget::~Widget()
{
    delete ui;
}
