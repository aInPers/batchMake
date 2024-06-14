#include "namelistmanager.h"

NameListManager::NameListManager(QObject *parent)
    : QObject{parent}
{}

NameListManager::NameListManager(QMainWindow *father)
    : father{father}
{}

void NameListManager::setTable(QTableWidget* table){
    this->tab = table;
}

void NameListManager::addField(const QString& fieldname){
    int index = tab->columnCount();
    qDebug() << index;
    tab->setColumnCount(index);
    tab->insertColumn(index);
    header.append(fieldname);
    tab->setHorizontalHeaderLabels(header);
    updateInfo();
}

void NameListManager::removeField(const QString& fieldname){
    int index = header.indexOf(fieldname);
    qDebug() << index;
    header.removeOne(fieldname);
    tab->removeColumn(index);
    updateInfo();
}

void NameListManager::addRowInfo(const QString& data, const QString& fieldname){
    QStringList items = data.split("\n");
    items = cleanList(items);
    int index = header.indexOf(fieldname);
    int rowCount = items.count();
    tab->setRowCount(rowCount);
    for(int i = 0; i < rowCount; i++){
        tab->setItem(i,index,new QTableWidgetItem(items.at(i)));
    }
    return updateInfo();
}

QStringList NameListManager::cleanList(QStringList li){
    QStringList newLi{};
    for(const QString& i : li){
        if(i.isEmpty()){ continue; }
        newLi.push_back(i);
    }
    return newLi;
}

void NameListManager::updateInfo(){
    _li.clear();
    int rowCount = tab->rowCount();
    int columnCount = tab->columnCount();

    for (int row = 0; row < rowCount; ++row) {
        QList<QString> rowList;
        for (int col = 0; col < columnCount; ++col) {
            QTableWidgetItem* item = tab->item(row, col);
            if (item) {
                rowList.append(item->text());
            } else {
                rowList.append("");
            }
        }
        _li.append(rowList);
    }
    //printLi();
}

void NameListManager::printLi(){
    for(auto i : _li){
        for(int j = 0; j < header.count(); j++){
            qInfo() << header[j].toStdString() << ": " << i[j].toStdString() << "\t";
        }
        qInfo() << "\n";
    }
}

QList<QList<QString>> NameListManager::getNameList(){
    return this->_li;
}










