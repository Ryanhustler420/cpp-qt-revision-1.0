#include "rockwidget.h"
#include <QLabel>       // basic ui component to show some text on widget.
#include <QPushButton>
#include <QMessageBox>

RockWidget::RockWidget(QWidget *parent) : QWidget(parent)
{
    QPalette main;
    main.setColor(QPalette::Window, Qt::white);

    setWindowTitle("Software Name");
    // resize(500,500);
    setPalette(main);
    setAutoFillBackground(true);

    QLabel *label = new QLabel("This is my label", this);


    // Add a styled widget and move it around

    QPalette label1Palette;
    label1Palette.setColor(QPalette::Window, Qt::yellow);
    label1Palette.setColor(QPalette::WindowText, Qt::blue);

    QFont label1Font("Times", 20, QFont::Bold);

    QLabel *label1 = new QLabel(this);
    label1->setText("ah ha");
    label1->setFont(label1Font);
    label1->setAutoFillBackground(true);
    label1->setPalette(label1Palette);
    label1->move(50,50);

    // Add another label just for fun

    QPalette label2Palette;
    label1Palette.setColor(QPalette::Window, Qt::black);
    label1Palette.setColor(QPalette::WindowText, Qt::white);

    QFont label2Font("Times", 20, QFont::Bold);

    QLabel *label2 = new QLabel(this);
    label2->setText("Ready\n Search\n   Go");
    label2->setFont(label1Font);
    label2->setAutoFillBackground(true);
    label2->setPalette(label1Palette);
    label2->move(100,100);

    // Adding a button and connect to slot
    QFont buttonFont("Times", 20, QFont::Bold);
    QPushButton *button = new QPushButton(this);
    button->setText("Click Me");
    button->setFont(buttonFont);
    button->move(150,300);
    connect(button, SIGNAL(clicked()), this, SLOT(buttonClicked()));

}

void RockWidget::buttonClicked()
{
    QMessageBox::information(this,"Message", "You clicked on my button");
}

QSize RockWidget::sizeHint() const
{
    return QSize(500, 500);
}
