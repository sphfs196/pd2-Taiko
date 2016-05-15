#include "gamewindow.h"
#include "ui_gamewindow.h"

//#include "mainwindow.h"

//#include "scene.h"

#include <QTimer>
//#include<QDateTime>
#include <QtCore>
//#include<QDebug>

//#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsItem>

#include <QGraphicsPixmapItem>
//#include <QComboBox>

#include <QMovie>
#include <QMediaPlayer>
#include <QKeyEvent>

#include <QString>

GameWindow::GameWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GameWindow)
{
    ui->setupUi(this);
    this->setFocus();

    music_gaming = new QMediaPlayer();
    music_gaming->setMedia(QUrl("qrc:/sound/g11.mp3"));
    music_gaming->play();

    ui->label_8->hide();
    ui->pushButton->hide();
    ui->pushButton_2->hide();
    ui->label_9->hide();
    ui->label_10->hide();
    ui->label_11->hide();


    ui->pushButton_3->hide();
    ui->pushButton_4->hide();
    ui->label_12->hide();
    ui->label_13->hide();
    ui->label_14->hide();

    Scene = new scene();
    ui->graphicsView->setScene(Scene);
    Scene->setSceneRect(0,0,1024,768);
    ui->graphicsView->setStyleSheet("background: transparent");

    movie_3 = new QMovie(":/pics/movie2.png");
    ui->label_4->setMovie(movie_3);
    movie_3->start();

    movie_4 = new QMovie(":/pics/movie6.png");
    ui->label_15->setMovie(movie_4);
    movie_4->start();

    count=30;
    ui->lcdNumber->display(count);
    timer=new QTimer;
   // ui->lcdNumber->setDigitCount(2);
    connect(timer,SIGNAL(timeout()),this,SLOT(showTime()));
    timer->start(1000);



    Scene->headArrFunc();

    firstScore = 0;
    QString scoreNum;
    scoreNum =QString::number(firstScore);
    ui->label_7->setText(scoreNum);

}

void GameWindow::showTime()
{
    count--;
    if(count<0)
    {
        return;
    }
    ui->lcdNumber->display(count);

    if(count==0)
    {
        ui->label_8->show();
        ui->pushButton->show();
        ui->pushButton_2->show();
        ui->label_9->show();

        QString scoreNum;
        scoreNum =QString::number(firstScore);
        ui->label_10->setText(scoreNum);
        ui->label_10->show();

        if(firstScore<10)
        {
            QMovie *movie_end = new QMovie(":/pics/bear6.png");
            ui->label_11->setMovie(movie_end);
            movie_end->start();
            ui->label_11->show();
        }

        if(firstScore>=10 && firstScore<20)
        {
            QMovie *movie_end = new QMovie(":/pics/movie4.png");
            ui->label_11->setMovie(movie_end);
            movie_end->start();
            ui->label_11->show();
        }

        if(firstScore>20)
        {
            QMovie *movie_end = new QMovie(":/pics/movie3.png");
            ui->label_11->setMovie(movie_end);
            movie_end->start();
            ui->label_11->show();
        }

        /*timer->stop();
        Scene->moveTimer->stop();
        Scene->bornHeadTimer->stop();*/
        //QKeyEvent a(QKeyEvent::KeyPress,Qt::Key_Any,Qt::NoModifier);
        //this->keyPressEvent(&a);

        //music_gaming->stop();
    }
}

void GameWindow::gameoverbg()
{
    music_gaming->stop();



    ui->label_12->show();
    ui->label_13->show();
    ui->label_14->show();

    ui->pushButton_3->show();
    ui->pushButton_4->show();
}

GameWindow::~GameWindow()
{
    delete ui;
}

void GameWindow::keyPressEvent(QKeyEvent *event)
{
    if(event->key() == Qt::Key_A)
    {
        for(int i=0;i<9;i++)
        {
            if(Scene->picType[i]==4)
            {
                if((Scene->originPlace[i]) < 160 && (Scene->originPlace[i]) > 30)
                {
                    music_gaming->stop();
                    QMediaPlayer *music_start = new QMediaPlayer();
                    music_start->setMedia(QUrl("qrc:/sound/explosion2.mp3"));
                    music_start->setVolume(100);
                    music_start->play();

                    Scene->originPlace[i]=-1500;
                    Scene->movingHead[i]->setPos(Scene->originPlace[i],130);

                    Scene->moveTimer->stop();
                    timer->stop();

                    movie_3->stop();
                    movie_4->stop();

                    Scene->addboom();

                    connect(Scene->boomtimer,SIGNAL(timeout()),this,SLOT(gameoverbg()));
                }
            }
            else if(Scene->picType[i]==1)
            {
                if((Scene->originPlace[i]) < 160 && (Scene->originPlace[i]) > 30)
                {
                    QMediaPlayer *music_start = new QMediaPlayer();
                    music_start->setMedia(QUrl("qrc:/sound/jump02.mp3"));
                    music_start->setVolume(50);
                    music_start->play();

                    Scene->originPlace[i]=-1500;
                    Scene->movingHead[i]->setPos(Scene->originPlace[i],130);
                    firstScore++;
                    QString scoreNum;
                    scoreNum= scoreNum + QString::number(firstScore);
                    ui->label_7->setText(scoreNum);
                    Scene->addheart();                    
                }
            }
        }
    }

    if(event->key() == Qt::Key_S)
    {
        for(int i=0;i<9;i++)
        {
            if(Scene->picType[i]==4)
            {
                if((Scene->originPlace[i]) < 160 && (Scene->originPlace[i]) > 30)
                {
                    music_gaming->stop();
                    QMediaPlayer *music_start = new QMediaPlayer();
                    music_start->setMedia(QUrl("qrc:/sound/explosion2.mp3"));
                    music_start->setVolume(100);
                    music_start->play();

                    Scene->originPlace[i]=-1500;
                    Scene->movingHead[i]->setPos(Scene->originPlace[i],130);
                    Scene->moveTimer->stop();
                    timer->stop();
                    movie_3->stop();
                    movie_4->stop();
                    Scene->addboom();
                    connect(Scene->boomtimer,SIGNAL(timeout()),this,SLOT(gameoverbg()));
                }
            }
            else if(Scene->picType[i]==2)
            {
                if((Scene->originPlace[i]) < 160 && (Scene->originPlace[i]) > 30)
                {                    
                    QMediaPlayer *music_start = new QMediaPlayer();
                    music_start->setMedia(QUrl("qrc:/sound/jump02.mp3"));
                    music_start->setVolume(50);
                    music_start->play();

                    Scene->originPlace[i]=-1500;
                    Scene->movingHead[i]->setPos(Scene->originPlace[i],130);
                    firstScore=firstScore+2;
                    QString scoreNum;
                    scoreNum= scoreNum + QString::number(firstScore);
                    ui->label_7->setText(scoreNum);
                    Scene->addheart();
                }
            }
        }
    }

    if(event->key() == Qt::Key_D)
    {
        for(int i=0;i<9;i++)
        {
            if(Scene->picType[i]==4)
            {
                if((Scene->originPlace[i]) < 160 && (Scene->originPlace[i]) > 30)
                {
                    music_gaming->stop();
                    QMediaPlayer *music_start = new QMediaPlayer();
                    music_start->setMedia(QUrl("qrc:/sound/explosion2.mp3"));
                    music_start->setVolume(100);
                    music_start->play();

                    Scene->originPlace[i]=-1500;
                    Scene->movingHead[i]->setPos(Scene->originPlace[i],130);
                    Scene->moveTimer->stop();
                    timer->stop();
                    Scene->addboom();
                    connect(Scene->boomtimer,SIGNAL(timeout()),this,SLOT(gameoverbg()));
                }
            }
            else if(Scene->picType[i]==3)
            {
                if((Scene->originPlace[i]) < 160 && (Scene->originPlace[i]) > 30)
                {
                    QMediaPlayer *music_start = new QMediaPlayer();
                    music_start->setMedia(QUrl("qrc:/sound/jump02.mp3"));
                    music_start->setVolume(50);
                    music_start->play();

                    Scene->originPlace[i]=-1500;
                    Scene->movingHead[i]->setPos(Scene->originPlace[i],130);
                    firstScore=firstScore+3;
                    QString scoreNum;
                    scoreNum = scoreNum + QString::number(firstScore);
                    ui->label_7->setText(scoreNum);
                 Scene->addheart();
                }
            }
        }
    }
}

void GameWindow::on_pushButton_clicked()
{
    music_gaming->stop();
    music_gaming->play();

    ui->label_8->hide();
    ui->pushButton->hide();
    ui->pushButton_2->hide();
    ui->label_9->hide();
    ui->label_10->hide();
    ui->label_11->hide();

    count=30;
    ui->lcdNumber->display(count);

    firstScore = 0;
    QString scoreNum;
    scoreNum =QString::number(firstScore);
    ui->label_7->setText(scoreNum);

    Scene->originPlace[0]=1000;
    for(int i=1;i<9;i++)
    {
        R=qrand();
        Scene->originPlace[i]=Scene->originPlace[i-1]+R%300+200;
    }
    for(int i=0;i<9;i++)
    {
        Scene->movingHead[i]->setPos(Scene->originPlace[i],130);
    }
    for(int i=0;i<9;i++)
    {
        QPixmap head_img;
        R=qrand();

        if(R%11<=4)
        {
          head_img.load(":/pics/head1.png");
          Scene->picType[i]=1;
        }

        else if(R%11<=7)
        {
          head_img.load(":/pics/head3.png");
          Scene->picType[i]=2;
        }

        else if(R%11<=9)
        {
          head_img.load(":/pics/head5.png");
          Scene->picType[i]=3;
        }

        else if(R%11==10)
        {
          head_img.load(":/pics/005_1.png");
          Scene->picType[i]=4;
        }

        head_img = head_img.scaled(150,150,Qt::KeepAspectRatio);
        Scene->movingHead[i]->setPixmap(head_img);
    }

    music_gaming->play();
}

void GameWindow::on_pushButton_2_clicked()
{
    QApplication::exit();
}

void GameWindow::on_pushButton_3_clicked()
{
    Scene->moveTimer->start();
    timer->start();

    movie_3->start();
    movie_4->start();

    ui->pushButton_3->hide();
    ui->pushButton_4->hide();
    ui->label_12->hide();
    ui->label_13->hide();
    ui->label_14->hide();

    on_pushButton_clicked();
}

void GameWindow::on_pushButton_4_clicked()
{
    on_pushButton_2_clicked();
}
