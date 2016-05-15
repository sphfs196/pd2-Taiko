/********************************************************************************
** Form generated from reading UI file 'gamewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEWINDOW_H
#define UI_GAMEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_GameWindow
{
public:
    QLabel *label;
    QLCDNumber *lcdNumber;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QGraphicsView *graphicsView;

    void setupUi(QDialog *GameWindow)
    {
        if (GameWindow->objectName().isEmpty())
            GameWindow->setObjectName(QStringLiteral("GameWindow"));
        GameWindow->resize(1280, 1024);
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(32);
        font.setBold(true);
        font.setWeight(75);
        GameWindow->setFont(font);
        label = new QLabel(GameWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(-2, -1, 1050, 800));
        label->setPixmap(QPixmap(QString::fromUtf8(":/pics/game_bg1.gif")));
        lcdNumber = new QLCDNumber(GameWindow);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setEnabled(true);
        lcdNumber->setGeometry(QRect(710, 30, 291, 111));
        lcdNumber->setMouseTracking(false);
        lcdNumber->setAcceptDrops(false);
        lcdNumber->setAutoFillBackground(false);
        lcdNumber->setSmallDecimalPoint(false);
        label_2 = new QLabel(GameWindow);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(710, 50, 301, 81));
        QFont font1;
        font1.setFamily(QStringLiteral("Agency FB"));
        font1.setPointSize(32);
        font1.setBold(false);
        font1.setWeight(50);
        label_2->setFont(font1);
        label_2->setTextFormat(Qt::AutoText);
        label_3 = new QLabel(GameWindow);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(-10, 210, 1041, 141));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/pics/game_bg3.jpg")));
        label_4 = new QLabel(GameWindow);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(770, 150, 321, 221));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/pics/movie2.png")));
        label_5 = new QLabel(GameWindow);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(790, 290, 61, 61));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/pics/game_bg3.jpg")));
        graphicsView = new QGraphicsView(GameWindow);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 1050, 900));
        graphicsView->setStyleSheet(QStringLiteral(""));
        graphicsView->setInteractive(true);
        label->raise();
        lcdNumber->raise();
        label_2->raise();
        label_3->raise();
        label_5->raise();
        label_4->raise();
        graphicsView->raise();

        retranslateUi(GameWindow);

        QMetaObject::connectSlotsByName(GameWindow);
    } // setupUi

    void retranslateUi(QDialog *GameWindow)
    {
        GameWindow->setWindowTitle(QApplication::translate("GameWindow", "Dialog", 0));
        label->setText(QString());
        label_2->setText(QApplication::translate("GameWindow", "Time:", 0));
        label_3->setText(QString());
        label_4->setText(QString());
        label_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class GameWindow: public Ui_GameWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEWINDOW_H
