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
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *label;
    QSpinBox *spinBox;
    QPushButton *GuessButton;
    QPushButton *StartOverButton;
    QLabel *MessageLabel;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(628, 300);
        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 30, 171, 17));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        spinBox = new QSpinBox(Widget);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(70, 90, 48, 27));
        spinBox->setMinimum(1);
        spinBox->setMaximum(10);
        GuessButton = new QPushButton(Widget);
        GuessButton->setObjectName(QStringLiteral("GuessButton"));
        GuessButton->setGeometry(QRect(140, 90, 99, 27));
        StartOverButton = new QPushButton(Widget);
        StartOverButton->setObjectName(QStringLiteral("StartOverButton"));
        StartOverButton->setGeometry(QRect(260, 90, 99, 27));
        MessageLabel = new QLabel(Widget);
        MessageLabel->setObjectName(QStringLiteral("MessageLabel"));
        MessageLabel->setGeometry(QRect(30, 190, 531, 51));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setWeight(75);
        MessageLabel->setFont(font1);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0));
        label->setText(QApplication::translate("Widget", "Guess My Number", 0));
        GuessButton->setText(QApplication::translate("Widget", "Guess", 0));
        StartOverButton->setText(QApplication::translate("Widget", "Start Over", 0));
        MessageLabel->setText(QApplication::translate("Widget", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
