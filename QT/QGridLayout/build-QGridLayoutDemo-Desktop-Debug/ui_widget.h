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
    QPushButton *button1;
    QPushButton *button2;
    QPushButton *button5;
    QPushButton *button7;
    QPushButton *button9;
    QPushButton *button4;
    QPushButton *button3;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(572, 391);
        button1 = new QPushButton(Widget);
        button1->setObjectName(QStringLiteral("button1"));
        button1->setGeometry(QRect(61, 41, 99, 27));
        button2 = new QPushButton(Widget);
        button2->setObjectName(QStringLiteral("button2"));
        button2->setGeometry(QRect(166, 41, 99, 27));
        button5 = new QPushButton(Widget);
        button5->setObjectName(QStringLiteral("button5"));
        button5->setGeometry(QRect(166, 74, 99, 27));
        button7 = new QPushButton(Widget);
        button7->setObjectName(QStringLiteral("button7"));
        button7->setGeometry(QRect(61, 107, 99, 27));
        button9 = new QPushButton(Widget);
        button9->setObjectName(QStringLiteral("button9"));
        button9->setGeometry(QRect(271, 107, 99, 27));
        button4 = new QPushButton(Widget);
        button4->setObjectName(QStringLiteral("button4"));
        button4->setGeometry(QRect(61, 74, 99, 27));
        button3 = new QPushButton(Widget);
        button3->setObjectName(QStringLiteral("button3"));
        button3->setGeometry(QRect(271, 41, 99, 27));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(button3->sizePolicy().hasHeightForWidth());
        button3->setSizePolicy(sizePolicy);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0));
        button1->setText(QApplication::translate("Widget", "One", 0));
        button2->setText(QApplication::translate("Widget", "Two", 0));
        button5->setText(QApplication::translate("Widget", "Five", 0));
        button7->setText(QApplication::translate("Widget", "Seven", 0));
        button9->setText(QApplication::translate("Widget", "Nine", 0));
        button4->setText(QApplication::translate("Widget", "Four", 0));
        button3->setText(QApplication::translate("Widget", "Three", 0));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
