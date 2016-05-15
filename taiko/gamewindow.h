#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H

#include "scene.h"


#include <QDialog>
#include <QMediaPlayer>
#include <QMovie>

namespace Ui {
class GameWindow;
}

class GameWindow : public QDialog
{
    Q_OBJECT

public:
    explicit GameWindow(QWidget *parent = 0);
    ~GameWindow();

    void keyPressEvent(QKeyEvent *event);

    int firstScore;
    int count;
    int R;
    scene *Scene;
    QTimer *timer;
    QMediaPlayer *music_gaming;
    QMovie *movie_3;
    QMovie *movie_4;

private:
    Ui::GameWindow *ui;

private slots:
    void showTime();
    void gameoverbg();
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
};

#endif // GAMEWINDOW_H
