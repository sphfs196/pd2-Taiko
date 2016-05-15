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
#include <QtWidgets/QPushButton>

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
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *label_15;

    void setupUi(QDialog *GameWindow)
    {
        if (GameWindow->objectName().isEmpty())
            GameWindow->setObjectName(QStringLiteral("GameWindow"));
        GameWindow->resize(1024, 768);
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(32);
        font.setBold(true);
        font.setWeight(75);
        GameWindow->setFont(font);
        GameWindow->setFocusPolicy(Qt::StrongFocus);
        label = new QLabel(GameWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(-2, -1, 1024, 816));
        label->setFocusPolicy(Qt::NoFocus);
        label->setPixmap(QPixmap(QString::fromUtf8(":/pics/game_bg1.gif")));
        lcdNumber = new QLCDNumber(GameWindow);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setEnabled(true);
        lcdNumber->setGeometry(QRect(710, 30, 291, 111));
        lcdNumber->setMouseTracking(false);
        lcdNumber->setFocusPolicy(Qt::NoFocus);
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
        label_2->setFocusPolicy(Qt::NoFocus);
        label_2->setTextFormat(Qt::AutoText);
        label_3 = new QLabel(GameWindow);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(-10, 210, 1041, 141));
        label_3->setFocusPolicy(Qt::NoFocus);
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/pics/game_bg3.jpg")));
        label_4 = new QLabel(GameWindow);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(770, 150, 321, 221));
        label_4->setFocusPolicy(Qt::NoFocus);
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/pics/movie2.png")));
        label_5 = new QLabel(GameWindow);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(790, 290, 61, 61));
        label_5->setFocusPolicy(Qt::NoFocus);
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/pics/game_bg3.jpg")));
        graphicsView = new QGraphicsView(GameWindow);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 1100, 900));
        graphicsView->setFocusPolicy(Qt::NoFocus);
        graphicsView->setStyleSheet(QStringLiteral(""));
        graphicsView->setInteractive(true);
        label_6 = new QLabel(GameWindow);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(140, 350, 131, 61));
        QFont font2;
        font2.setPointSize(16);
        label_6->setFont(font2);
        label_7 = new QLabel(GameWindow);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(200, 400, 131, 61));
        label_7->setFont(font2);
        label_8 = new QLabel(GameWindow);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(0, -15, 1050, 800));
        label_8->setPixmap(QPixmap(QString::fromUtf8(":/pics/endbg2.jpg")));
        pushButton = new QPushButton(GameWindow);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(540, 640, 200, 90));
        QFont font3;
        font3.setPointSize(14);
        pushButton->setFont(font3);
        pushButton->setFocusPolicy(Qt::NoFocus);
        pushButton_2 = new QPushButton(GameWindow);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(780, 640, 200, 90));
        pushButton_2->setFont(font3);
        pushButton_2->setFocusPolicy(Qt::NoFocus);
        label_9 = new QLabel(GameWindow);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(30, -20, 300, 200));
        label_10 = new QLabel(GameWindow);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(118, 130, 221, 151));
        label_11 = new QLabel(GameWindow);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(80, 150, 400, 400));
        label_12 = new QLabel(GameWindow);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(0, 0, 1024, 768));
        label_12->setPixmap(QPixmap(QString::fromUtf8(":/pics/gameoverbg.jpg")));
        label_13 = new QLabel(GameWindow);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(0, -50, 454, 340));
        QFont font4;
        font4.setFamily(QStringLiteral("Curlz MT"));
        font4.setPointSize(20);
        label_13->setFont(font4);
        label_13->setPixmap(QPixmap(QString::fromUtf8(":/pics/gameover4.png")));
        label_14 = new QLabel(GameWindow);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(50, 40, 1000, 500));
        QFont font5;
        font5.setFamily(QStringLiteral("Algerian"));
        font5.setPointSize(12);
        font5.setItalic(true);
        label_14->setFont(font5);
        pushButton_3 = new QPushButton(GameWindow);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(80, 350, 200, 70));
        QFont font6;
        font6.setFamily(QStringLiteral("Algerian"));
        font6.setPointSize(14);
        font6.setBold(true);
        font6.setItalic(true);
        font6.setWeight(75);
        pushButton_3->setFont(font6);
        pushButton_3->setFocusPolicy(Qt::NoFocus);
        pushButton_4 = new QPushButton(GameWindow);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(330, 350, 200, 70));
        QFont font7;
        font7.setFamily(QStringLiteral("Algerian"));
        font7.setPointSize(14);
        font7.setItalic(true);
        pushButton_4->setFont(font7);
        pushButton_4->setFocusPolicy(Qt::NoFocus);
        label_15 = new QLabel(GameWindow);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(-130, 0, 500, 500));
        label_15->setPixmap(QPixmap(QString::fromUtf8(":/pics/movie6.png")));
        label->raise();
        lcdNumber->raise();
        label_2->raise();
        label_3->raise();
        label_6->raise();
        label_4->raise();
        label_5->raise();
        label_15->raise();
        graphicsView->raise();
        label_7->raise();
        label_8->raise();
        label_9->raise();
        label_10->raise();
        pushButton->raise();
        pushButton_2->raise();
        label_11->raise();
        label_12->raise();
        label_13->raise();
        label_14->raise();
        pushButton_3->raise();
        pushButton_4->raise();

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
        label_6->setText(QApplication::translate("GameWindow", "score:", 0));
        label_7->setText(QApplication::translate("GameWindow", "TextLabel", 0));
        label_8->setText(QString());
        pushButton->setText(QApplication::translate("GameWindow", "~restart~", 0));
        pushButton_2->setText(QApplication::translate("GameWindow", "~exit~", 0));
        label_9->setText(QApplication::translate("GameWindow", "score:", 0));
        label_10->setText(QApplication::translate("GameWindow", "TextLabel", 0));
        label_11->setText(QApplication::translate("GameWindow", "TextLabel", 0));
        label_12->setText(QString());
        label_13->setText(QString());
        label_14->setText(QApplication::translate("GameWindow", "That is not a good choice......", 0));
        pushButton_3->setText(QApplication::translate("GameWindow", "retry", 0));
        pushButton_4->setText(QApplication::translate("GameWindow", "exit", 0));
        label_15->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class GameWindow: public Ui_GameWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEWINDOW_H
