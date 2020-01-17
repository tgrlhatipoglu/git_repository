#include "widget.h"
#include <QTextEdit>
#include <QLabel>
#include "qdebug.h"
#include <QPushButton>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    setupUI();
}

Widget::~Widget()
{

}

void Widget::setupUI()
{
    QFont labelFont("Times", 10, QFont::Bold);
    QLabel * mLabel = new QLabel("This is my text", this);
    mLabel->setFont(labelFont);
    mLabel->move(100,25);

    QTextEdit * textedit = new QTextEdit(this);
    textedit->move(70,55);

    //Text Changed
    /*connect(textedit,&QTextEdit::textChanged,[=](){
        qDebug() << "Text Changed";
    });*/

    //Copy cut & paste
    QPushButton *copyButton = new QPushButton("Copy",this);
    copyButton->setMinimumSize(50,25);
    copyButton->move(10,250);
    connect(copyButton,&QPushButton::clicked,[=](){
        textedit->copy();
    });

    QPushButton *cutButton = new QPushButton("Cut",this);
    cutButton->setMinimumSize(50,25);
    cutButton->move(110,250);
    connect(cutButton,&QPushButton::clicked,[=](){
        textedit->cut();
    });

    QPushButton *pasteButton = new QPushButton("Paste",this);
    pasteButton->setMinimumSize(50,25);
    pasteButton->move(210,250);
    connect(pasteButton,&QPushButton::clicked,[=](){
        textedit->paste();
    });

    //Undo Redo

    QPushButton *undoButton = new QPushButton("Undo",this);
    undoButton->setMinimumSize(50,25);
    undoButton->move(10,280);
    connect(undoButton,&QPushButton::clicked,[=](){
        textedit->undo();
    });

    QPushButton *redoButton = new QPushButton("Redo",this);
    redoButton->setMinimumSize(50,25);
    redoButton->move(110,280);
    connect(redoButton,&QPushButton::clicked,[=](){
        textedit->redo();
    });

    //Set text & html to the textedit
    QPushButton * plaintextbutton = new QPushButton("Plain text",this);
    plaintextbutton->setMinimumSize(100,25);
    plaintextbutton->move(10,310);
    connect(plaintextbutton,&QPushButton::clicked,[=](){
        textedit->setPlainText("Bu bir otomatik text'tir");
    });

    QPushButton * htmlbutton = new QPushButton("Html",this);
    htmlbutton->setMinimumSize(50,25);
    htmlbutton->move(120,310);
    connect(htmlbutton,&QPushButton::clicked,[=](){
        textedit->setHtml("<!DOCTYPE html> <html>  <body>  <h1>My First Heading</h1>     <p>My first paragraph.</p>     </body>      </html>");
    });

    //Grab text & html

    QPushButton * graptextbutton = new QPushButton("Grap text",this);
    graptextbutton->setMinimumSize(100,25);
    graptextbutton->move(10,340);
    connect(graptextbutton,&QPushButton::clicked,[=](){
        qDebug() << "Grap text: " << textedit->toPlainText();
    });

    QPushButton * graphtmlbutton = new QPushButton("Grap Html",this);
    graphtmlbutton->setMinimumSize(100,25);
    graphtmlbutton->move(120,340);
    connect(graphtmlbutton,&QPushButton::clicked,[=](){
        qDebug() << "Grap html: " << textedit->toHtml();
    });

    setFixedSize(500,500);
}
