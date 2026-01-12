#include "xypos.h"

XYpos::XYpos(QObject *parent)
    : QObject{parent}
{}

XYpos::XYpos(QLabel *x,QLabel *y)
    : X{x}, Y{y}
{}

void XYpos::updateXPosYPosDisplay(const QPointF& pos){
    X->setText(QString{"X: "}+QString::number(pos.x()));
    Y->setText(QString{"Y: "}+QString::number(pos.y()));
}

void XYpos::updateYPos(qreal y){
    Y->setText(QString{"Y: "}+QString::number(y));
}

void XYpos::updateXPos(qreal x){
    X->setText(QString{"X: "}+QString::number(x));
}

void XYpos::reset(){
    X->setText("X: ");
    Y->setText("Y: ");
}
