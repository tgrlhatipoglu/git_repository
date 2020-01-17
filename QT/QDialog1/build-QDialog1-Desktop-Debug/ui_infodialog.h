/********************************************************************************
** Form generated from reading UI file 'infodialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFODIALOG_H
#define UI_INFODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_InfoDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *windowsRadioButton;
    QRadioButton *macRadioButton;
    QRadioButton *linuxRadioButton;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *InfoDialog)
    {
        if (InfoDialog->objectName().isEmpty())
            InfoDialog->setObjectName(QStringLiteral("InfoDialog"));
        InfoDialog->resize(400, 312);
        verticalLayout = new QVBoxLayout(InfoDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(InfoDialog);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(InfoDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEdit = new QLineEdit(InfoDialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        groupBox = new QGroupBox(InfoDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        windowsRadioButton = new QRadioButton(groupBox);
        windowsRadioButton->setObjectName(QStringLiteral("windowsRadioButton"));

        verticalLayout_2->addWidget(windowsRadioButton);

        macRadioButton = new QRadioButton(groupBox);
        macRadioButton->setObjectName(QStringLiteral("macRadioButton"));

        verticalLayout_2->addWidget(macRadioButton);

        linuxRadioButton = new QRadioButton(groupBox);
        linuxRadioButton->setObjectName(QStringLiteral("linuxRadioButton"));

        verticalLayout_2->addWidget(linuxRadioButton);


        verticalLayout->addWidget(groupBox);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(128, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        okButton = new QPushButton(InfoDialog);
        okButton->setObjectName(QStringLiteral("okButton"));

        horizontalLayout_2->addWidget(okButton);

        cancelButton = new QPushButton(InfoDialog);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        horizontalLayout_2->addWidget(cancelButton);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(InfoDialog);

        QMetaObject::connectSlotsByName(InfoDialog);
    } // setupUi

    void retranslateUi(QDialog *InfoDialog)
    {
        InfoDialog->setWindowTitle(QApplication::translate("InfoDialog", "Dialog", 0));
        label->setText(QApplication::translate("InfoDialog", "Your Information", 0));
        label_2->setText(QApplication::translate("InfoDialog", "Position :", 0));
        groupBox->setTitle(QApplication::translate("InfoDialog", "Favorite OS", 0));
        windowsRadioButton->setText(QApplication::translate("InfoDialog", "Windows", 0));
        macRadioButton->setText(QApplication::translate("InfoDialog", "Mac", 0));
        linuxRadioButton->setText(QApplication::translate("InfoDialog", "Linux", 0));
        okButton->setText(QApplication::translate("InfoDialog", "OK", 0));
        cancelButton->setText(QApplication::translate("InfoDialog", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class InfoDialog: public Ui_InfoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFODIALOG_H
