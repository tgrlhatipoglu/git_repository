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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QCheckBox *windowsCheckBox;
    QCheckBox *macCheckBox;
    QCheckBox *linuxCheckBox;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *beerCheckBox;
    QCheckBox *juiceCheckBox;
    QCheckBox *coffeeCheckBox;
    QGroupBox *groupBox_3;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *aRadioButton;
    QRadioButton *bRadioButton;
    QRadioButton *cRadioButton;
    QPushButton *grapDataPushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(444, 436);
        verticalLayout_4 = new QVBoxLayout(Widget);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        windowsCheckBox = new QCheckBox(groupBox);
        windowsCheckBox->setObjectName(QStringLiteral("windowsCheckBox"));

        verticalLayout->addWidget(windowsCheckBox);

        macCheckBox = new QCheckBox(groupBox);
        macCheckBox->setObjectName(QStringLiteral("macCheckBox"));

        verticalLayout->addWidget(macCheckBox);

        linuxCheckBox = new QCheckBox(groupBox);
        linuxCheckBox->setObjectName(QStringLiteral("linuxCheckBox"));

        verticalLayout->addWidget(linuxCheckBox);


        horizontalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        beerCheckBox = new QCheckBox(groupBox_2);
        beerCheckBox->setObjectName(QStringLiteral("beerCheckBox"));

        verticalLayout_2->addWidget(beerCheckBox);

        juiceCheckBox = new QCheckBox(groupBox_2);
        juiceCheckBox->setObjectName(QStringLiteral("juiceCheckBox"));

        verticalLayout_2->addWidget(juiceCheckBox);

        coffeeCheckBox = new QCheckBox(groupBox_2);
        coffeeCheckBox->setObjectName(QStringLiteral("coffeeCheckBox"));

        verticalLayout_2->addWidget(coffeeCheckBox);


        horizontalLayout->addWidget(groupBox_2);


        verticalLayout_4->addLayout(horizontalLayout);

        groupBox_3 = new QGroupBox(Widget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        widget = new QWidget(groupBox_3);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(30, 40, 119, 80));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        aRadioButton = new QRadioButton(widget);
        aRadioButton->setObjectName(QStringLiteral("aRadioButton"));

        verticalLayout_3->addWidget(aRadioButton);

        bRadioButton = new QRadioButton(widget);
        bRadioButton->setObjectName(QStringLiteral("bRadioButton"));

        verticalLayout_3->addWidget(bRadioButton);

        cRadioButton = new QRadioButton(widget);
        cRadioButton->setObjectName(QStringLiteral("cRadioButton"));

        verticalLayout_3->addWidget(cRadioButton);


        verticalLayout_4->addWidget(groupBox_3);

        grapDataPushButton = new QPushButton(Widget);
        grapDataPushButton->setObjectName(QStringLiteral("grapDataPushButton"));

        verticalLayout_4->addWidget(grapDataPushButton);

        pushButton_2 = new QPushButton(Widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout_4->addWidget(pushButton_2);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0));
        groupBox->setTitle(QApplication::translate("Widget", "Choose OS (Exlusive)", 0));
        windowsCheckBox->setText(QApplication::translate("Widget", "Windows", 0));
        macCheckBox->setText(QApplication::translate("Widget", "Mac", 0));
        linuxCheckBox->setText(QApplication::translate("Widget", "Linux", 0));
        groupBox_2->setTitle(QApplication::translate("Widget", "Choose Drink (Non Exlusive)", 0));
        beerCheckBox->setText(QApplication::translate("Widget", "Beer", 0));
        juiceCheckBox->setText(QApplication::translate("Widget", "Juice", 0));
        coffeeCheckBox->setText(QApplication::translate("Widget", "Coffee", 0));
        groupBox_3->setTitle(QApplication::translate("Widget", "Choose Answer", 0));
        aRadioButton->setText(QApplication::translate("Widget", "A", 0));
        bRadioButton->setText(QApplication::translate("Widget", "B", 0));
        cRadioButton->setText(QApplication::translate("Widget", "C", 0));
        grapDataPushButton->setText(QApplication::translate("Widget", "Grap Data", 0));
        pushButton_2->setText(QApplication::translate("Widget", "Set State", 0));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
