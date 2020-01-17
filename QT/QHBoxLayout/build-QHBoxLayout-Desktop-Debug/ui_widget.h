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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *OneButton;
    QPushButton *TwoButton;
    QPushButton *ThreeButton;
    QPushButton *FourButton;
    QPushButton *FiveButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(469, 47);
        horizontalLayout_2 = new QHBoxLayout(Widget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        OneButton = new QPushButton(Widget);
        OneButton->setObjectName(QStringLiteral("OneButton"));

        horizontalLayout->addWidget(OneButton);

        TwoButton = new QPushButton(Widget);
        TwoButton->setObjectName(QStringLiteral("TwoButton"));

        horizontalLayout->addWidget(TwoButton);

        ThreeButton = new QPushButton(Widget);
        ThreeButton->setObjectName(QStringLiteral("ThreeButton"));

        horizontalLayout->addWidget(ThreeButton);

        FourButton = new QPushButton(Widget);
        FourButton->setObjectName(QStringLiteral("FourButton"));

        horizontalLayout->addWidget(FourButton);

        FiveButton = new QPushButton(Widget);
        FiveButton->setObjectName(QStringLiteral("FiveButton"));

        horizontalLayout->addWidget(FiveButton);


        horizontalLayout_2->addLayout(horizontalLayout);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0));
        OneButton->setText(QApplication::translate("Widget", "One", 0));
        TwoButton->setText(QApplication::translate("Widget", "Two", 0));
        ThreeButton->setText(QApplication::translate("Widget", "Three", 0));
        FourButton->setText(QApplication::translate("Widget", "Four", 0));
        FiveButton->setText(QApplication::translate("Widget", "Five", 0));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
