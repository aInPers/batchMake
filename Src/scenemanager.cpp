  #include "scenemanager.h"

SceneManager::SceneManager(QObject *parent)
    : QObject{parent}
{}

SceneManager::SceneManager(QMainWindow *father, QGraphicsScene *scene, QListWidget *listwidget)
    : scene{scene}, father{father}, listwidget{listwidget}, zv{0.99}
{}

void SceneManager::appendText(const QString& text, const QString& name){
    if(text.isEmpty() || name.isEmpty()){ return; }
    for(QGraphicsItem* i : scene->items()){
        GTextItem* it = qgraphicsitem_cast<GTextItem*>(i);
        if(it != nullptr && it->name == name){
            QMessageBox::warning(father,"命名错误", "已存在相同名称，请换一个名称");
            return;
        }
    }
    GTextItem* item = new GTextItem(name);
    item->setPlainText(text);
    item->setZValue(zv);
    item->setFont(QFont("黑体",30));
    zv -= 0.01;
    connect(item, &GTextItem::moving, xypos, &XYpos::updateXPosYPosDisplay);
    scene->addItem(item);
    item->setPos(scene->width()/2,scene->height()/2);
    this->listwidget->addItem(name);
    this->listwidgetsc->addItem(name);
    nlmgr->addField(name);
}

void SceneManager::setListWidget(QListWidget* listwidget)
{
    this->listwidget = listwidget;
}

void SceneManager::setScListWidget(QListWidget* sclistwidget){
    this->listwidgetsc = sclistwidget;
}

void SceneManager::removeText(const QString& name){
    if(listwidget->findItems(name, Qt::MatchExactly).isEmpty()){
        QMessageBox::warning(father, "错误", "不存在该文本");
        return;
    }
    QListWidgetItem* it1 = listwidget->findItems(name, Qt::MatchExactly).at(0);
    QListWidgetItem* it2 = listwidgetsc->findItems(name, Qt::MatchExactly).at(0);
    int index1 = listwidget->row(it1);
    int index2 = listwidgetsc->row(it2);
    for(QGraphicsItem* i : scene->items()){
        GTextItem* item = qgraphicsitem_cast<GTextItem*>(i);
        if(item != nullptr && item->name == name){
            scene->removeItem(item);
            listwidget->takeItem(index1);
            listwidgetsc->takeItem(index2);
            nlmgr->removeField(name);
            delete item;
            delete it1;
            delete it2;
            return;
        }
    }
    QMessageBox::information(father, "删除失败", "没有该文字");
    zv += 0.01;
    return;
}

bool SceneManager::isSelectItem(){
    auto items = scene->selectedItems();
    return items.isEmpty() ? false : true;
}

void SceneManager::setXYPos(XYpos* xypos){
    this->xypos = xypos;
}

void SceneManager::setFontColor(){
    auto items = scene->selectedItems();
    if(items.isEmpty()){
        QMessageBox::information(father, "注意", "请先选择一个文字");
        return;
    }
    GTextItem* item = qgraphicsitem_cast<GTextItem*>(scene->selectedItems().at(0));
    if(item == nullptr){
        QMessageBox::information(father, "注意", "请先选择一个文字");
        return;
    }
    QColor color = QColorDialog::getColor(item->defaultTextColor(),father);
    if(!color.isValid()){
        //QMessageBox::warning(father, "错误", "颜色非法");
        return;
    }
    item->setDefaultTextColor(color);
}

void SceneManager::setFont(){
    if(!isSelectItem()){
        QMessageBox::information(father, "注意", "请先选择一个文字");
        return;
    }
    GTextItem* item = qgraphicsitem_cast<GTextItem*>(scene->selectedItems().at(0));
    if(item == nullptr){
        QMessageBox::information(father, "注意", "请先选择一个文字");
        return;
    }
    bool isok;
    QFont font = QFontDialog::getFont(&isok,father);
    if(!isok){ return; }
    item->setFont(font);
}

void SceneManager::setNameList(NameListManager *list){
    nlmgr = list;
}

void SceneManager::changeAllText(QStringList strli){
    auto items = scene->items();
    for(int i = 0; i < strli.size(); i++){
        GTextItem* item = qgraphicsitem_cast<GTextItem*>(items[i]);
        item->setPlainText(strli[i]);
    }
}

void SceneManager::saveImage(const QString& filename, const char* format){
    QImage image{scene->sceneRect().size().toSize(),QImage::Format_RGB888};
    QPainter painter(&image);
    scene->render(&painter);
    image.save(filename,format);
}

void SceneManager::setModes(QButtonGroup* modes){
    this->modes = modes;
}











