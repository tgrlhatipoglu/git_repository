#include "widget.h"
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>
#include "qdebug.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    //First name
    QLabel * firstnamelabel = new QLabel("First Name",this);
    firstnamelabel->setMinimumSize(70,50);
    firstnamelabel->move(10,10);

    QLineEdit * firstnamelineedit = new QLineEdit(this);
    firstnamelineedit->setMinimumSize(200,50);
    firstnamelineedit->move(120,10);

    //Last name
    QLabel * lastnamelabel = new QLabel("Second Name", this);
    lastnamelabel->setMinimumSize(70,50);
    lastnamelabel->move(10,70);

    QLineEdit * lastnamelineedit = new QLineEdit(this);
    lastnamelineedit->setMinimumSize(200,50);
    lastnamelineedit->move(120,70);

    //City
    QLabel * citylabel = new QLabel("City Name", this);
    citylabel->setMinimumSize(70,50);
    citylabel->move(10,130);

    QLineEdit * citylineedit = new QLineEdit(this);
    citylineedit->setMinimumSize(200,50);
    citylineedit->move(120,130);

    //Button
    QFont buttonFont("Times", 20, QFont::Bold);
    QPushButton * button = new QPushButton("Grap Data",this);
    button->setMinimumSize(200,100);
    button->setFont(buttonFont);
    button->move(80,190);
    connect(button,&QPushButton::clicked,[=](){
        QString firstname = firstnamelineedit->text();
        QString lastname = lastnamelineedit->text();
        QString city = citylineedit->text();
    if(!firstname.isEmpty() && !lastname.isEmpty() && !city.isEmpty())
    {
        qDebug() << "First Name is" << firstname;
        qDebug() << "Last Name is" << lastname;
        qDebug() << "City Name is" << city;
    }
    else
    {
         qDebug() << "One of your blanks are empty";
    }
    });

    //respond Signals to QLineEdit

    //Curser position changed
    //connect(firstnamelineedit,&QLineEdit::cursorPositionChanged,[=](){
        //qDebug() << "Current curser position is : " << firstnamelineedit->cursorPosition();
    //});

    //Editing finished
    /*connect(firstnamelineedit,&QLineEdit::editingFinished,[=](){
        qDebug() << "Editing Finished";
    });*/

    //Return Finished
    /*connect(firstnamelineedit,&QLineEdit::returnPressed,[=](){
        qDebug() << "Return Pressed";
    });*/

    //Selection Changed
    /*connect(firstnamelineedit,&QLineEdit::selectionChanged,[=](){
        qDebug() << "Selection Changed";
    });*/

    //Text Changed
    connect(firstnamelineedit,&QLineEdit::textChanged,[=](){
        qDebug() << "Text Changed" << firstnamelineedit->text();
    });

    firstnamelineedit->setPlaceholderText("Write Your First Name");
    lastnamelineedit->setPlaceholderText("Write Your Last Name");
    citylineedit->setPlaceholderText("Write your City Name");


}

Widget::~Widget()
{

}

QSize Widget::sizeHint() const
{
    return QSize(400,400);
}
