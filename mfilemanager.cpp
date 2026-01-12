#include "mfilemanager.h"

MFileManager::MFileManager(QObject *parent)
    : QObject{parent}
{}

QString MFileManager::getAllText(const QString& filename){
    QFile file{filename};
    QMainWindow* widget = static_cast<QMainWindow*>(parent());
    if(widget==nullptr){ return {}; }
    if(!file.open(QIODevice::ReadOnly)){
        QMessageBox::warning(widget, "文件错误", "无法打开文件\n请检查完整性");
        return{};
    }
    QTextStream ts{&file};
    QString text{ts.readAll()};
    file.close();
    return text;
}

QImage* MFileManager::getImage(const QString& filename){
    QImage* img = new QImage(filename);
    return img;
}

QPixmap* MFileManager::getPixmap(const QString& filename){
    QPixmap* pixmap = new QPixmap{filename};
    return pixmap;
}

QString MFileManager::getdesktopdir(){
    return QDir::toNativeSeparators(QStandardPaths::writableLocation(QStandardPaths::DesktopLocation));;
}












