#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
#include <QMessageBox>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

// right-click on ui button > go to slot... > onClick();
void Widget::on_clickMe_clicked()
{
    qDebug() << "clicked on button";
    QMessageBox::information(this,"Message","You clicked on that button",QMessageBox::Ok);
    ui->clickMe->setText("Well Done");
}
