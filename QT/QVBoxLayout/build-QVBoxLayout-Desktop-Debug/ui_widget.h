/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *oneButton;
    QPushButton *threeButton;
    QPushButton *fourButton;
    QPushButton *twoButton;
    QPushButton *fiveButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(400, 300);
        oneButton = new QPushButton(Widget);
        oneButton->setObjectName(QStringLiteral("oneButton"));
        oneButton->setGeometry(QRect(140, 60, 99, 27));
        threeButton = new QPushButton(Widget);
        threeButton->setObjectName(QStringLiteral("threeButton"));
        threeButton->setGeometry(QRect(130, 140, 99, 27));
        fourButton = new QPushButton(Widget);
        fourButton->setObjectName(QStringLiteral("fourButton"));
        fourButton->setGeometry(QRect(140, 190, 99, 27));
        twoButton = new QPushButton(Widget);
        twoButton->setObjectName(QStringLiteral("twoButton"));
        twoButton->setGeometry(QRect(130, 100, 99, 27));
        fiveButton = new QPushButton(Widget);
        fiveButton->setObjectName(QStringLiteral("fiveButton"));
        fiveButton->setGeometry(QRect(150, 230, 99, 27));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0));
        oneButton->setText(QApplication::translate("Widget", "One", 0));
        threeButton->setText(QApplication::translate("Widget", "Three", 0));
        fourButton->setText(QApplication::translate("Widget", "Four", 0));
        twoButton->setText(QApplication::translate("Widget", "Two", 0));
        fiveButton->setText(QApplication::translate("Widget", "Five", 0));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
