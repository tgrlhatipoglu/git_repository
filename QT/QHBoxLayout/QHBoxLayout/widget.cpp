#include "widget.h"
#include "ui_widget.h"
#include <QHBoxLayout>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

#if 0
    //Define the Layout
    QHBoxLayout * layout = new QHBoxLayout();

    //Add things to the layout
    layout->addWidget(ui->OneButton);
    layout->addWidget(ui->TwoButton);
    layout->addWidget(ui->ThreeButton);
    layout->addWidget(ui->FourButton);
    layout->addWidget(ui->FiveButton);

    //Set the layout
    setLayout(layout);
#endif

}

Widget::~Widget()
{
    delete ui;
}
