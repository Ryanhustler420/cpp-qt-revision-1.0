#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    //1st way. String Notation
    /*
        connect(ui->pushButton, SIGNAL(clicked()),
                this, SLOT(changeText()));
    */

    //2nd way. Functor Notation : Regular Slots
    /*
        connect(ui -> pushButton, &QPushButton::clicked, this,
                &Widget::changeText);
    */

    //3rd way. Functor Notation : Lambdas
    /*
        connect(ui->pushButton, &QPushButton::clicked, [=](){
            ui->label->setText("Lambda Called");
        });
    */
}

Widget::~Widget()
{
    delete ui;
}

void Widget::changeText()
{
    qDebug() << "User clicked on button" << endl;
    ui->label->setText("Hello There");
}

