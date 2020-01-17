#include "widget.h"
#include "ui_widget.h"
#include "qdebug.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->listWidget->setSelectionMode(QAbstractItemView::MultiSelection);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_addItemButton_clicked()
{
    ui->listWidget->addItem("My Item");
}

void Widget::on_deleteItemButton_clicked()
{
    //delete item: take item
    ui->listWidget->takeItem(ui->listWidget->currentRow());
}

void Widget::on_selectedItemsButton_clicked()
{
    //get the list of selected items
    QList<QListWidgetItem *> list = ui->listWidget->selectedItems();

    for(int i = 0;i<list.count();i++)
    {
        qDebug() << "List: " << list.at(i)->text() << "index: " << ui->listWidget->row(list.at(i)) ;
    }

}
