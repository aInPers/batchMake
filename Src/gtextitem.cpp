#include "gtextitem.h"

GTextItem::GTextItem(const QString& name)
    : name{name}
{
    setFlags(ItemSendsGeometryChanges | QGraphicsItem::ItemIsSelectable | QGraphicsItem::ItemIsMovable);
}

int GTextItem::type() const {
    return Type;
}

QVariant GTextItem::itemChange(GraphicsItemChange change,const QVariant& value) {
    if(change == GraphicsItemChange::ItemPositionChange && scene()){
        QPointF newPos = value.toPointF();
        QRectF rect = scene()->sceneRect();
        if (!rect.contains(newPos)) {
            newPos.setX(qMin(rect.right(), qMax(newPos.x(), rect.left())));
            newPos.setY(qMin(rect.bottom(), qMax(newPos.y(), rect.top())));
            return newPos;
        }
        emit moving(newPos);
    }
    return QGraphicsItem::itemChange(change,value);
}
