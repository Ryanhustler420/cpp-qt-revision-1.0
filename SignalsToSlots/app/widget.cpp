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

    // using 1st way. String Notation
    /*
        connect(ui->horizontalSlider, SIGNAL(valueChanged(int)),
                ui->progressBar, SLOT(setValue(int)));
    */

    // using 2nd way. Normal Slots
    /*
        connect(ui -> horizontalSlider, &QSlider::valueChanged, ui->progressBar,
                &QProgressBar::setValue);
    */

    // using 3rd way. Functor Notation
    /*
        connect(ui ->horizontalSlider, &QSlider::valueChanged, [=](int val){
           ui->progressBar->setValue(val);
           // ui->progressBar->setValue(ui->horizontalSlider->value()); works same as above live
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

