#include "infodialog.h"
#include "ui_infodialog.h"
#include "qdebug.h"

infoDialog::infoDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::infoDialog)
{
    ui->setupUi(this);
}

infoDialog::~infoDialog()
{
    delete ui;
}

void infoDialog::on_buttonBox_clicked(QAbstractButton *button)
{
    QDialogButtonBox::StandardButton stdButton = ui->buttonBox->standardButton(button);

    if(stdButton == QDialogButtonBox::Ok)
    {
        qDebug() << "OK";
        accept();
    }
    if(stdButton == QDialogButtonBox::Cancel)
    {
        qDebug() << "Rejected";
        reject();
    }
}
