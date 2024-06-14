/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *hello_paper;
    QGridLayout *gridLayout_2;
    QPlainTextEdit *hello_html;
    QWidget *posedit_paper;
    QGridLayout *gridLayout_3;
    QFrame *line;
    QPushButton *addval_bt;
    QLabel *y_pos;
    QPushButton *setfont_bt;
    QLabel *x_pos;
    QListWidget *vallist_li;
    QGraphicsView *view;
    QPushButton *getimg_bt;
    QPushButton *setcolor_bt;
    QPushButton *delval_bt;
    QWidget *batchmake_paper;
    QGridLayout *gridLayout_4;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_5;
    QLabel *label;
    QLabel *selectional;
    QListWidget *vals;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_6;
    QTextEdit *input_list;
    QPushButton *start_make_bt;
    QPushButton *importList_bt;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_7;
    QTableWidget *namelist;
    QProgressBar *progressBar;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1116, 694);
        MainWindow->setMinimumSize(QSize(1090, 636));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        hello_paper = new QWidget();
        hello_paper->setObjectName(QString::fromUtf8("hello_paper"));
        gridLayout_2 = new QGridLayout(hello_paper);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        hello_html = new QPlainTextEdit(hello_paper);
        hello_html->setObjectName(QString::fromUtf8("hello_html"));
        hello_html->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"border: 2px groove gray;\n"
"padding: 1px 18px 1px 3px;\n"
"background-color: rgba(255, 255, 255, 0);"));
        hello_html->setReadOnly(true);

        gridLayout_2->addWidget(hello_html, 0, 0, 1, 1);

        tabWidget->addTab(hello_paper, QString());
        posedit_paper = new QWidget();
        posedit_paper->setObjectName(QString::fromUtf8("posedit_paper"));
        gridLayout_3 = new QGridLayout(posedit_paper);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        line = new QFrame(posedit_paper);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line, 2, 0, 1, 2);

        addval_bt = new QPushButton(posedit_paper);
        addval_bt->setObjectName(QString::fromUtf8("addval_bt"));

        gridLayout_3->addWidget(addval_bt, 3, 0, 1, 1);

        y_pos = new QLabel(posedit_paper);
        y_pos->setObjectName(QString::fromUtf8("y_pos"));

        gridLayout_3->addWidget(y_pos, 1, 1, 1, 1);

        setfont_bt = new QPushButton(posedit_paper);
        setfont_bt->setObjectName(QString::fromUtf8("setfont_bt"));

        gridLayout_3->addWidget(setfont_bt, 3, 1, 1, 1);

        x_pos = new QLabel(posedit_paper);
        x_pos->setObjectName(QString::fromUtf8("x_pos"));

        gridLayout_3->addWidget(x_pos, 1, 0, 1, 1);

        vallist_li = new QListWidget(posedit_paper);
        vallist_li->setObjectName(QString::fromUtf8("vallist_li"));
        vallist_li->setMinimumSize(QSize(300, 500));

        gridLayout_3->addWidget(vallist_li, 0, 0, 1, 2);

        view = new QGraphicsView(posedit_paper);
        view->setObjectName(QString::fromUtf8("view"));
        view->setMinimumSize(QSize(700, 500));

        gridLayout_3->addWidget(view, 0, 2, 5, 1);

        getimg_bt = new QPushButton(posedit_paper);
        getimg_bt->setObjectName(QString::fromUtf8("getimg_bt"));

        gridLayout_3->addWidget(getimg_bt, 5, 2, 1, 1);

        setcolor_bt = new QPushButton(posedit_paper);
        setcolor_bt->setObjectName(QString::fromUtf8("setcolor_bt"));

        gridLayout_3->addWidget(setcolor_bt, 5, 1, 1, 1);

        delval_bt = new QPushButton(posedit_paper);
        delval_bt->setObjectName(QString::fromUtf8("delval_bt"));

        gridLayout_3->addWidget(delval_bt, 5, 0, 1, 1);

        tabWidget->addTab(posedit_paper, QString());
        batchmake_paper = new QWidget();
        batchmake_paper->setObjectName(QString::fromUtf8("batchmake_paper"));
        gridLayout_4 = new QGridLayout(batchmake_paper);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        groupBox = new QGroupBox(batchmake_paper);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMinimumSize(QSize(319, 0));
        groupBox->setMaximumSize(QSize(419, 16777215));
        gridLayout_5 = new QGridLayout(groupBox);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_5->addWidget(label, 0, 0, 1, 1);

        selectional = new QLabel(groupBox);
        selectional->setObjectName(QString::fromUtf8("selectional"));

        gridLayout_5->addWidget(selectional, 0, 1, 1, 1);

        vals = new QListWidget(groupBox);
        vals->setObjectName(QString::fromUtf8("vals"));
        vals->setMinimumSize(QSize(300, 0));
        vals->setMaximumSize(QSize(400, 16777215));

        gridLayout_5->addWidget(vals, 1, 0, 1, 2);


        gridLayout_4->addWidget(groupBox, 0, 0, 3, 1);

        groupBox_2 = new QGroupBox(batchmake_paper);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_6 = new QGridLayout(groupBox_2);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        input_list = new QTextEdit(groupBox_2);
        input_list->setObjectName(QString::fromUtf8("input_list"));

        gridLayout_6->addWidget(input_list, 0, 0, 1, 1);

        start_make_bt = new QPushButton(groupBox_2);
        start_make_bt->setObjectName(QString::fromUtf8("start_make_bt"));
        start_make_bt->setMinimumSize(QSize(0, 200));

        gridLayout_6->addWidget(start_make_bt, 0, 1, 1, 1);

        importList_bt = new QPushButton(groupBox_2);
        importList_bt->setObjectName(QString::fromUtf8("importList_bt"));

        gridLayout_6->addWidget(importList_bt, 1, 0, 1, 2);


        gridLayout_4->addWidget(groupBox_2, 0, 1, 1, 1);

        groupBox_3 = new QGroupBox(batchmake_paper);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_7 = new QGridLayout(groupBox_3);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        namelist = new QTableWidget(groupBox_3);
        namelist->setObjectName(QString::fromUtf8("namelist"));
        namelist->setEditTriggers(QAbstractItemView::NoEditTriggers);
        namelist->setColumnCount(0);

        gridLayout_7->addWidget(namelist, 0, 0, 1, 1);


        gridLayout_4->addWidget(groupBox_3, 2, 1, 1, 1);

        progressBar = new QProgressBar(batchmake_paper);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(0);

        gridLayout_4->addWidget(progressBar, 1, 1, 1, 1);

        tabWidget->addTab(batchmake_paper, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1116, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\345\210\266\344\275\234\345\231\250", nullptr));
        hello_html->setPlainText(QString());
        tabWidget->setTabText(tabWidget->indexOf(hello_paper), QCoreApplication::translate("MainWindow", "\346\254\242\350\277\216", nullptr));
        addval_bt->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\346\226\207\345\255\227", nullptr));
        y_pos->setText(QCoreApplication::translate("MainWindow", "Y:", nullptr));
        setfont_bt->setText(QCoreApplication::translate("MainWindow", "\345\255\227\344\275\223", nullptr));
        x_pos->setText(QCoreApplication::translate("MainWindow", "X:", nullptr));
        getimg_bt->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\345\233\276\347\211\207", nullptr));
        setcolor_bt->setText(QCoreApplication::translate("MainWindow", "\345\255\227\344\275\223\351\242\234\350\211\262", nullptr));
        delval_bt->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\346\226\207\345\255\227", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(posedit_paper), QCoreApplication::translate("MainWindow", "\344\275\215\347\275\256\351\200\211\345\256\232", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\346\226\207\345\255\227\345\210\227\350\241\250", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\351\200\211\344\270\255\351\241\271:", nullptr));
        selectional->setText(QCoreApplication::translate("MainWindow", "null", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "\345\257\274\345\205\245\345\220\215\345\215\225", nullptr));
        start_make_bt->setText(QCoreApplication::translate("MainWindow", "\345\274\200\345\247\213\345\210\266\344\275\234", nullptr));
        importList_bt->setText(QCoreApplication::translate("MainWindow", "\345\257\274\345\205\245", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "\345\220\215\345\215\225\351\242\204\350\247\210", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(batchmake_paper), QCoreApplication::translate("MainWindow", "\346\211\271\351\207\217\345\210\266\344\275\234", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
