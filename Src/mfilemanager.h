#ifndef MFILEMANAGER_H
#define MFILEMANAGER_H

#include <QObject>
#include <QFile>
#include <QImage>
#include <QPixmap>
#include <QTextStream>
#include <QFileDialog>
#include <QMessageBox>
#include <QMainWindow>
#include <QStandardPaths>

class MFileManager : public QObject
{
    Q_OBJECT
public:
    explicit MFileManager(QObject *parent = nullptr);

public:
    QString getAllText(const QString& filename);
    QImage* getImage(const QString& filename);
    QPixmap*    getPixmap(const QString& filename);
    static QString getdesktopdir();
    //QStringList getTextList(const QString& filename);
    //QStringList strTurnList(const QString& str);

signals:
};

#endif // MFILEMANAGER_H
