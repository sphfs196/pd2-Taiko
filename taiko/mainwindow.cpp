#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QtCore>
#include<QtGui>

//#include<QLabel>

#include <QMediaPlayer>
#include <QMovie>

//#include"gamewindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    music = new QMediaPlayer();
    music->setMedia(QUrl("qrc:/sound/startmu1.mp3"));
    music->play();

    QMovie *movie = new QMovie(":/pics/movie.png");
    ui->label_2->setMovie(movie);
    movie->start();

    QMovie *movie_2 = new QMovie(":/pics/movie1.png");
    ui->label_3->setMovie(movie_2);
    movie_2->start();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{

    music->stop();
    GameWindow g;
    setCentralWidget(&g);
    g.show();
    g.exec();


}

void MainWindow::on_pushButton_2_clicked()
{
    this->close();
}

