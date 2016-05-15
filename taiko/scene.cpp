#include "gamewindow.h"
#include "scene.h"

scene::scene()
{
    pillow = new itemmm();
    QPixmap pillow_img;
    pillow_img.load(":/pics/pillow1.png");
    pillow_img = pillow_img.scaled(150,150,Qt::KeepAspectRatio);
    pillow->setPixmap(pillow_img);
    pillow->setPos(80,150);
    addItem(pillow);


}

void scene::headArrFunc()
{
    //x=750;
    QTime time = QTime::currentTime();
    qsrand((uint)time.msec());

    for(int i=0;i<9;i++)
    {
        this->movingHead[i] = new QGraphicsPixmapItem();
        QPixmap head_img;
        R=qrand();

        if(R%11<=4)
        {
            head_img.load(":/pics/head1.png");
            picType[i]=1;
        }

        else if(R%11<=7)
        {
          head_img.load(":/pics/head3.png");         
          picType[i]=2;
        }

        else if(R%11<=9)
        {
          head_img.load(":/pics/head5.png");
          picType[i]=3;
        }

        else if(R%11==10)
        {
            head_img.load(":/pics/005_1.png");
            picType[i]=4;
        }

        head_img = head_img.scaled(150,150,Qt::KeepAspectRatio);

        movingHead[i]->setPixmap(head_img);
      //movingHead[i]->setPos(0,130);
        addItem(movingHead[i]);
    }

    originPlace[0]=1000;
    for(int i=1;i<9;i++)
    {
        R=qrand();
        originPlace[i]=originPlace[i-1]+R%300+200;
    }
    for(int i=0;i<9;i++)
    {
        movingHead[i]->setPos(originPlace[i],130);
    }

    moveTimer=new QTimer;    
    connect(moveTimer,SIGNAL(timeout()),this,SLOT(movehead()));
    moveTimer->start(5);
}

void scene::movehead()
{
    for(int i=0;i<9;i++)
    {
        originPlace[i]=originPlace[i]-1;
        movingHead[i]->setPos(originPlace[i],130);
    }

    if(originPlace[8]<0)
    {
        originPlace[0]=1000;
        for(int i=1;i<9;i++)
        {
            R=qrand();
            originPlace[i]=originPlace[i-1]+R%300+200;
            //movingHead[i]->show();
        }

        for(int i=0;i<9;i++)
        {
            //this->movingHead[i] = new QGraphicsPixmapItem();
            QPixmap head_img;
            R=qrand();

            if(R%11<=4)
            {
              head_img.load(":/pics/head1.png");
              picType[i]=1;
            }

            else if(R%11<=7)
            {
              head_img.load(":/pics/head3.png");
              picType[i]=2;
            }

            else if(R%11<=9)
            {
              head_img.load(":/pics/head5.png");
              picType[i]=3;
            }

            else if(R%11==10)
            {
              head_img.load(":/pics/005_1.png");
              picType[i]=4;
            }

            head_img = head_img.scaled(150,150,Qt::KeepAspectRatio);

            movingHead[i]->setPixmap(head_img);         
        }
    }
}

void scene::addheart()
{
    heart = new itemmm();
    QPixmap heart_img;
    heart_img.load(":/pics/heart.png");
    heart_img = heart_img.scaled(50,50,Qt::KeepAspectRatio);

    heart->setPixmap(heart_img);
    heart->setPos(200,100);
    addItem(heart);

    hearttimer = new QTimer;
    connect(hearttimer,SIGNAL(timeout()),this,SLOT(removeheart()));
    hearttimer->start(500);
}

void scene::removeheart()
{
    removeItem(heart);
    hearttimer->stop();
}

void scene::addboom()
{
    boom = new itemmm();
    QPixmap boom_img;
    boom_img.load(":/pics/boom2.png");
    boom_img = boom_img.scaled(200,200,Qt::KeepAspectRatio);

    boom->setPixmap(boom_img);
    boom->setPos(60,130);
    addItem(boom);

    boomtimer = new QTimer;
    connect(boomtimer,SIGNAL(timeout()),this,SLOT(removeboom()));
    boomtimer->start(2000);
}

void scene::removeboom()
{
    removeItem(boom);
    boomtimer->stop();
}
