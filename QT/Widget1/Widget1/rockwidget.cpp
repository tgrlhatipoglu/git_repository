#include "rockwidget.h"
#include <QLabel>
#include <QPushButton>
#include <QMessageBox>

RockWidget::RockWidget(QWidget *parent) :
    QWidget(parent)
{
    //Add a label to the widget
    QLabel * label = new QLabel("This is my label",this);

    //Add styled widget

    QPalette label1Palette;
    label1Palette.setColor(QPalette::Window,Qt::yellow);
    label1Palette.setColor(QPalette::WindowText,Qt::blue);

    QFont label1Font("Times", 20, QFont::Bold);

    QLabel *label1 = new QLabel(this);
    label1->setAutoFillBackground(true);
    label1->setText("Colered label");
    label1->setFont(label1Font);
    label1->setPalette(label1Palette);
    label1->move(50,50);

    //Add another label

    QPalette label2Palette;
    label2Palette.setColor(QPalette::Window,Qt::green);
    label2Palette.setColor(QPalette::WindowText,Qt::black);

    QFont label2Font("Times", 20, QFont::Bold);

    QLabel *label2 = new QLabel(this);
    label2->setAutoFillBackground(true);
    label2->setText("Colered label 2");
    label2->setFont(label2Font);
    label2->setPalette(label2Palette);
    label2->move(170,70);
    
    //Add a button and connect to slot

    QFont buttonFont("Times", 30, QFont::Bold);

    QPushButton *button = new QPushButton(this);
    button->setText("Click Me");
    button->setFont(buttonFont);
    button->move(100,250);
    connect(button,SIGNAL(clicked()),this,SLOT(buttonClicked()));
}

void RockWidget::buttonClicked()
{    
    QMessageBox::information(this,"Message","You clicked me");
}

QSize RockWidget::sizeHint() const
{
    return QSize(500,500);
}

