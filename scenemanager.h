#ifndef SCENEMANAGER_H
#define SCENEMANAGER_H

#include <QObject>
#include <QGraphicsScene>
#include <QMainWindow>
#include <QMessageBox>
#include <QListWidget>
#include <QColorDialog>
#include <QFontDialog>
#include <QPainter>
#include <QPen>
#include <QImage>
#include <QButtonGroup>
#include "gtextitem.h"
#include <xypos.h>
#include "namelistmanager.h"

class SceneManager : public QObject
{
    Q_OBJECT
public:
    explicit SceneManager(QObject *parent = nullptr);
    explicit SceneManager(QMainWindow *father, QGraphicsScene *scene, QListWidget *listwidget);

public:
    void appendText(const QString& text, const QString& name);
    void removeText(const QString& name);
    void setListWidget(QListWidget* listwidget);
    void setScListWidget(QListWidget* sclistwidget);
    void setXYPos(XYpos* xypos);
    void setNameList(NameListManager *list);
    void changeAllText(QStringList strli);
    void saveImage(const QString& filename, const char* format = nullptr) noexcept;
    void setModes(QButtonGroup* modes);

public slots:
    void setFontColor();
    void setFont();

private:
    bool isSelectItem();

signals:

private:
    QGraphicsScene *scene;
    QMainWindow *father;
    QListWidget *listwidget;
    QListWidget *listwidgetsc;
    XYpos *xypos;
    qreal zv;
    NameListManager *nlmgr;
    QButtonGroup* modes;
};

#endif // SCENEMANAGER_H
