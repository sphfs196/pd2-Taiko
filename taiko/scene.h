#ifndef SCENE_H
#define SCENE_H
#include "itemmm.h"
//#include "gamewindow.h"
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QGraphicsItem>
#include <QTimer>
#include <QtCore>
#include <QWidget>

#include <QGlobal.h>
#include <QTime>
#include <QKeyEvent>
#include <QMediaPlayer>



class scene : public QGraphicsScene
{
    Q_OBJECT
public:
    scene();

    void TheMoveTimer();
    void headTimerFunc();

    QGraphicsPixmapItem *movingHead[9];
    itemmm *pillow;
    itemmm *heart;
    itemmm *boom;

    QTimer *moveTimer;
    QTimer *bornHeadTimer;
    QTimer *hearttimer;
    QTimer *boomtimer;

    int R;
    int originPlace[9];
    int picType[9];

    //QGraphicsScene *sceneee;
    //qraphicview *view;

    void headArrFunc();
    void addheart();
    void addboom();

private:

public slots:
    void movehead();
    void removeheart();
    void removeboom();
};

#endif // SCENE_H
