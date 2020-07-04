#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_check_button_clicked();

    void on_start_over_button_clicked();

    int getSecretNumber();
    void setSecretNumber();
    void enableStartOverButton();
    void enableCheckButton();
    void disableStartOverButton();
    void disableCheckButton();
    void updateGuessLeftText();
    void resetNumberOfGuessesTook();
    bool canIGuess();
private:
    Ui::Widget *ui;
    int secretNumber;
    int guessNumber;
    int numberOfGuessesTook = 0;
    int const winUnderGuessTime = 5;
};
#endif // WIDGET_H
