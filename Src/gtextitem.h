#ifndef GTEXTITEM_H
#define GTEXTITEM_H

#include <QGraphicsTextItem>
#include <QGraphicsScene>
#include <QPointF>

class GTextItem : public QGraphicsTextItem
{
    Q_OBJECT
public:
    enum{
        Type = UserType+1
    };
    GTextItem(const QString& name);
    QString name;
    int type() const override;

protected:
    QVariant itemChange(GraphicsItemChange change,const QVariant& value) override;

signals:
    void moving(QPointF pos);

};

#endif // GTEXTITEM_H
