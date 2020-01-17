#include <QCoreApplication>
#include <QDebug>
#include <QList>
//#include <iostream>
//#include "stdlib.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //Declare List
    QList<QString> stringList;


    //Put Data in the List
    stringList << "I am" << "lovin" << "QT";
    stringList.append("a");
    stringList.append("iot");

    //getData from the list
    qDebug() << "First item:" << stringList[0];

    qDebug() << "Number of the element of the list: " << stringList.count();

    for(int i=0;i<stringList.count();i++){

        qDebug() << QString::number(i+1) << ". item:" << stringList.at(i);

    }

    return a.exec();
}
