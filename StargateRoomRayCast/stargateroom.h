#ifndef STARGATEROOM_H
#define STARGATEROOM_H

#include <QtCore>
#include <QtWidgets>
#include <qmath.h>



class StargateRoom : public QWidget
{
    Q_OBJECT

public:
    StargateRoom(QWidget *parent = nullptr);
    ~StargateRoom();

    void updatePlayer();
    void showFps();
    void render();

protected:
    void resizeEvent(QResizeEvent*);
    void timerEvent(QTimerEvent*);
    void paintEvent(QPaintEvent*);
    void keyPressEvent(QKeyEvent*);
    void keyReleaseEvent(QKeyEvent*);
    void mousePressEvent(QMouseEvent*);
    void mouseMoveEvent(QMouseEvent*);
    void mouseReleaseEvent(QMouseEvent*);

private:
    QElapsedTimer watch;
    QBasicTimer ticker;
    QImage buffer;
    qreal angle;
    QPointF playerPos;
    qreal angleDelta;
    qreal moveDelta;
    QImage textureImg;
    int textureCount;
    bool touchDevice;
    QRect trackPad;
    QPoint centerPad;
    QSize bufferSize;
};
#endif // STARGATEROOM_H
