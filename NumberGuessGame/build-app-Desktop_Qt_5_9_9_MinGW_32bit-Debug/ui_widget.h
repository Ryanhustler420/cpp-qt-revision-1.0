/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *AppLabel;
    QSpinBox *spinBox;
    QPushButton *check_button;
    QLabel *gameStateLabel;
    QPushButton *start_over_button;
    QLabel *guessLeftLabel;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(398, 236);
        QFont font;
        font.setPointSize(8);
        Widget->setFont(font);
        AppLabel = new QLabel(Widget);
        AppLabel->setObjectName(QStringLiteral("AppLabel"));
        AppLabel->setGeometry(QRect(60, 40, 271, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Segoe UI"));
        font1.setPointSize(14);
        AppLabel->setFont(font1);
        AppLabel->setAlignment(Qt::AlignCenter);
        spinBox = new QSpinBox(Widget);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(110, 110, 61, 25));
        spinBox->setMinimum(1);
        spinBox->setMaximum(10);
        check_button = new QPushButton(Widget);
        check_button->setObjectName(QStringLiteral("check_button"));
        check_button->setGeometry(QRect(200, 110, 80, 25));
        gameStateLabel = new QLabel(Widget);
        gameStateLabel->setObjectName(QStringLiteral("gameStateLabel"));
        gameStateLabel->setGeometry(QRect(60, 80, 271, 20));
        gameStateLabel->setLayoutDirection(Qt::LeftToRight);
        gameStateLabel->setAlignment(Qt::AlignCenter);
        start_over_button = new QPushButton(Widget);
        start_over_button->setObjectName(QStringLiteral("start_over_button"));
        start_over_button->setGeometry(QRect(80, 190, 231, 25));
        guessLeftLabel = new QLabel(Widget);
        guessLeftLabel->setObjectName(QStringLiteral("guessLeftLabel"));
        guessLeftLabel->setEnabled(false);
        guessLeftLabel->setGeometry(QRect(150, 160, 81, 16));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        AppLabel->setText(QApplication::translate("Widget", "Guess Hidden Number", Q_NULLPTR));
        check_button->setText(QApplication::translate("Widget", "Check", Q_NULLPTR));
        gameStateLabel->setText(QApplication::translate("Widget", "Chose Number And Click \"Check\"", Q_NULLPTR));
        start_over_button->setText(QApplication::translate("Widget", "Start Over", Q_NULLPTR));
        guessLeftLabel->setText(QApplication::translate("Widget", "Guess Left: 5", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
