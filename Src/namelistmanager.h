#ifndef NAMELISTMANAGER_H
#define NAMELISTMANAGER_H

#include <QObject>
#include <QMainWindow>
#include <QTableWidget>
#include <iostream>

class NameListManager : public QObject
{
    Q_OBJECT
public:
    explicit NameListManager(QObject *parent = nullptr);
    explicit NameListManager(QMainWindow *father);

    void setTable(QTableWidget* table);
    void addField(const QString& fieldname);
    void removeField(const QString& fieldname);

    void addRowInfo(const QString& data, const QString& fieldname);
    void updateInfo();
    void printLi();

    QList<QList<QString>> getNameList();

private:
    QStringList cleanList(QStringList li);

private:
    QMainWindow* father;
    QTableWidget* tab;
    QStringList header;
    QList<QList<QString>> _li;

signals:
};

#endif // NAMELISTMANAGER_H
