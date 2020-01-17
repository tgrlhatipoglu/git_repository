#include "infodialog.h"
#include "ui_infodialog.h"

InfoDialog::InfoDialog(QWidget *parent) :
    QDialog(parent,Qt::WindowSystemMenuHint | Qt::WindowTitleHint),
    ui(new Ui::InfoDialog)
{
    ui->setupUi(this);
}

InfoDialog::~InfoDialog()
{
    delete ui;
}

void InfoDialog::on_okButton_clicked()
{
    QString userPositon = ui->lineEdit->text();

    if(!userPositon.isEmpty())
    {
         position = userPositon;
         if(ui->windowsRadioButton->isChecked())
             favoriteOs = "Windows";
         else if(ui->macRadioButton->isChecked())
             favoriteOs = "Mac";
         else if(ui->linuxRadioButton->isChecked())
             favoriteOs = "Linux";
         else
             favoriteOs = " ";
    }
    //accept the Dialog
    accept();
}

void InfoDialog::on_cancelButton_clicked()
{
    //reject the Dialog
    reject();
}
QString InfoDialog::getPosition() const
{
    return position;
}

void InfoDialog::setPosition(const QString &value)
{
    position = value;
}

QString InfoDialog::getFavoriteOs() const
{
    return favoriteOs;
}

void InfoDialog::setFavoriteOs(const QString &value)
{
    favoriteOs = value;
}

