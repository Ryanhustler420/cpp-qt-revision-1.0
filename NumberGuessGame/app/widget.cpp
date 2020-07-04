#include "widget.h"
#include "ui_widget.h"
#include <stdlib.h>            /* srand rand */
#include <time.h>              /* time */
#include <QDebug>              /* log to terminal */
#include <QMessageBox>         /* dialog to throw message */

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    // Initialize
    srand(time(NULL));
    setSecretNumber();
}

Widget::~Widget()
{
    delete ui;
}

int Widget::getSecretNumber()
{
    return rand() % 10 + 1;
}

void Widget::on_start_over_button_clicked()
{
    this->ui->gameStateLabel->setText("Chose Number And Click \"Check\"");
    this->ui->spinBox->setValue(1);
    this->setSecretNumber();
    this->resetNumberOfGuessesTook();
    this->updateGuessLeftText();
}

void Widget::enableStartOverButton()
{
    this->ui->start_over_button->setDisabled(false);
}

void Widget::disableStartOverButton()
{
    this->ui->start_over_button->setDisabled(true);
}

void Widget::enableCheckButton()
{
    this->ui->check_button->setDisabled(false);
}

void Widget::disableCheckButton()
{
    this->ui->check_button->setDisabled(true);
}

void Widget::resetNumberOfGuessesTook()
{
    numberOfGuessesTook = 0;
}

bool Widget::canIGuess()
{
    this->numberOfGuessesTook = this->numberOfGuessesTook + 1;
    return numberOfGuessesTook < winUnderGuessTime;
}

void Widget::updateGuessLeftText()
{
    this->ui->guessLeftLabel->setText("Guess Left: "
    + QString::number(winUnderGuessTime - numberOfGuessesTook));
}

void Widget::setSecretNumber()
{
    this->secretNumber = this->getSecretNumber();
    this->disableStartOverButton();
    this->enableCheckButton();
    qDebug() << "Secret Number Generated: " << QString::number(this->secretNumber);
}

void Widget::on_check_button_clicked()
{
    if(canIGuess())
    {
        this->updateGuessLeftText();
        guessNumber = this->ui->spinBox->value();

        if(guessNumber == secretNumber)
        {
            ui->gameStateLabel->setText("Correct!");
            this->enableStartOverButton();
            this->disableCheckButton();
        }
        else
        {
            if(secretNumber < guessNumber)
            {
                ui->gameStateLabel->setText("Number is lower");
            }

            if(secretNumber > guessNumber)
            {
                ui->gameStateLabel->setText("Number is bigger");
            }
        }
    }
    else
    {
        QMessageBox::information(this,"Game Over","You lose the guess game, Better luck next time.", QMessageBox::Ok);
        on_start_over_button_clicked();
    }
}
