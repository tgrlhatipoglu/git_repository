#include "widget.h"
#include <QPushButton>
#include <QMessageBox>
#include "qdebug.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    QPushButton *button = new QPushButton(this);
    button->setText("Click Me");
    button->move(200,200);
    connect(button,&QPushButton::clicked,[=](){

        //Hard way
        /*
        QMessageBox message;
        message.setMinimumSize(200,300);
        message.setWindowTitle("Window Title");
        message.setText("Something happened");
        message.setInformativeText("Do you want to do something about it");
        message.setIcon(QMessageBox::Critical);
        message.setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
        message.setDefaultButton(QMessageBox::Cancel);

        int ret = message.exec();
        */
        //Critical Message

        //int ret = QMessageBox::critical(this,"Window Title", "Something happened Do you want to do about it?", QMessageBox::Ok | QMessageBox::Cancel);

        //Information Message

        //int ret = QMessageBox::information(this,"Window Title", "Something happened Do you want to do about it?", QMessageBox::Ok | QMessageBox::Cancel);

        //Question Message

        //int ret = QMessageBox::question(this,"Window Title", "Something happened Do you want to do about it?", QMessageBox::Ok | QMessageBox::Cancel);

        //Warning Message

        int ret = QMessageBox::warning(this,"Window Title", "Something happened Do you want to do about it?", QMessageBox::Ok | QMessageBox::Cancel);

        if(ret == QMessageBox::Ok)
        {
            qDebug() << "User clicked ok";
        }
        else if (ret == QMessageBox::Cancel)
        {
            qDebug() << "User clicked cancel";
        }


    });

}

Widget::~Widget()
{

}
