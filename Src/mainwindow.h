#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QInputDialog>
#include <QGraphicsPixmapItem>
#include <QPointF>
#include <QButtonGroup>
#include "mfilemanager.h"
#include "scenemanager.h"
#include "xypos.h"
#include "namelistmanager.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void addText();
    void setBackImage();
    void removeText();
    void importList();
    void startMake();
    void updateSelection();
    void Start_();

    void allDisable();
    void turnSuoFang(int value);
    void resetView();

private:
    Ui::MainWindow *ui;
    MFileManager *mfm;
    QGraphicsScene *scene;
    SceneManager *smgr;
    QGraphicsPixmapItem *_img;
    XYpos* xypos;
    NameListManager* nlmgr;
    QButtonGroup* modegroup;
    int scaleFactor_m{50};
    //WorkThread* workthr;
};
#endif // MAINWINDOW_H
