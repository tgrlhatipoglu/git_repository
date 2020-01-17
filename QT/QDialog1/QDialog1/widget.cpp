#include "widget.h"
#include "ui_widget.h"
#include "infodialog.h"
#include "qdebug.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_provideInfoButton_clicked()
{
    InfoDialog *dialog = new InfoDialog(this);

    //Show the dialog model
    /*int ret = dialog->exec();

    if(ret == QDialog::Accepted)
    {
        QString position = dialog->getPosition();
        QString os = dialog->getFavoriteOs();
        qDebug() << "Accepted" << position << os;
        ui->infoLabel->setText(position+os);
    }
    else if(ret == QDialog::Rejected)
    {
        qDebug() << "Rejected";
    }*/

    //Show the dialog non model
    dialog->show();
    dialog->raise();
    dialog->activateWindow();

    connect(dialog,&InfoDialog::accepted,[=](){

    qDebug() << "Accepted";
    });

    connect(dialog,&InfoDialog::rejected,[=](){

    qDebug() << "Rejected";
    });
}
