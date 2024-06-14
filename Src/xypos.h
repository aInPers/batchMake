#ifndef XYPOS_H
#define XYPOS_H

#include <QObject>
#include <QWidget>
#include <QLabel>

class XYpos : public QObject
{
    Q_OBJECT
public:
    explicit XYpos(QObject *parent = nullptr);
    explicit XYpos(QLabel *x,QLabel *y);

    void updateXPosYPosDisplay(const QPointF& pos);
    void updateYPos(qreal y);
    void updateXPos(qreal x);
    void reset();

    QLabel *X;
    QLabel *Y;

signals:
};

#endif // XYPOS_H
