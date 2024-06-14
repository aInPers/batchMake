/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
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
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
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
    QPushButton *getimg_bt;
    QGraphicsView *view;
    QLabel *y_pos;
    QPushButton *delval_bt;
    QListWidget *vallist_li;
    QRadioButton *yuan_mode;
    QPushButton *setfont_bt;
    QPushButton *addval_bt;
    QLabel *x_pos;
    QFrame *line;
    QLabel *label_3;
    QSlider *SceneSuoFang;
    QPushButton *setcolor_bt;
    QLabel *label_2;
    QPushButton *reset_bt;
    QRadioButton *nomarl_mode;
    QRadioButton *ek_mode;
    QWidget *batchmake_paper;
    QGridLayout *gridLayout_4;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_5;
    QLabel *label;
    QLabel *selectional;
    QListWidget *vals;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_6;
    QPushButton *importList_bt;
    QPushButton *start_make_bt;
    QTextEdit *input_list;
    QRadioButton *isten;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_7;
    QTableWidget *namelist;
    QProgressBar *progressBar;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1236, 712);
        MainWindow->setMinimumSize(QSize(1090, 636));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        hello_paper = new QWidget();
        hello_paper->setObjectName("hello_paper");
        gridLayout_2 = new QGridLayout(hello_paper);
        gridLayout_2->setObjectName("gridLayout_2");
        hello_html = new QPlainTextEdit(hello_paper);
        hello_html->setObjectName("hello_html");
        hello_html->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"border: 2px groove gray;\n"
"padding: 1px 18px 1px 3px;\n"
"background-color: rgba(255, 255, 255, 0);"));
        hello_html->setReadOnly(true);

        gridLayout_2->addWidget(hello_html, 0, 0, 1, 1);

        tabWidget->addTab(hello_paper, QString());
        posedit_paper = new QWidget();
        posedit_paper->setObjectName("posedit_paper");
        gridLayout_3 = new QGridLayout(posedit_paper);
        gridLayout_3->setObjectName("gridLayout_3");
        getimg_bt = new QPushButton(posedit_paper);
        getimg_bt->setObjectName("getimg_bt");

        gridLayout_3->addWidget(getimg_bt, 7, 2, 1, 6);

        view = new QGraphicsView(posedit_paper);
        view->setObjectName("view");
        view->setMinimumSize(QSize(700, 500));

        gridLayout_3->addWidget(view, 0, 2, 5, 6);

        y_pos = new QLabel(posedit_paper);
        y_pos->setObjectName("y_pos");
        y_pos->setMaximumSize(QSize(200, 16777215));

        gridLayout_3->addWidget(y_pos, 1, 1, 1, 1);

        delval_bt = new QPushButton(posedit_paper);
        delval_bt->setObjectName("delval_bt");
        delval_bt->setMaximumSize(QSize(200, 16777215));

        gridLayout_3->addWidget(delval_bt, 7, 0, 1, 1);

        vallist_li = new QListWidget(posedit_paper);
        vallist_li->setObjectName("vallist_li");
        vallist_li->setMinimumSize(QSize(300, 500));
        vallist_li->setMaximumSize(QSize(400, 16777215));

        gridLayout_3->addWidget(vallist_li, 0, 0, 1, 2);

        yuan_mode = new QRadioButton(posedit_paper);
        yuan_mode->setObjectName("yuan_mode");

        gridLayout_3->addWidget(yuan_mode, 6, 2, 1, 1);

        setfont_bt = new QPushButton(posedit_paper);
        setfont_bt->setObjectName("setfont_bt");
        setfont_bt->setMaximumSize(QSize(200, 16777215));

        gridLayout_3->addWidget(setfont_bt, 6, 1, 1, 1);

        addval_bt = new QPushButton(posedit_paper);
        addval_bt->setObjectName("addval_bt");
        addval_bt->setMaximumSize(QSize(200, 16777215));

        gridLayout_3->addWidget(addval_bt, 6, 0, 1, 1);

        x_pos = new QLabel(posedit_paper);
        x_pos->setObjectName("x_pos");
        x_pos->setMaximumSize(QSize(200, 16777215));

        gridLayout_3->addWidget(x_pos, 1, 0, 1, 1);

        line = new QFrame(posedit_paper);
        line->setObjectName("line");
        line->setMaximumSize(QSize(400, 16777215));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line, 5, 0, 1, 2);

        label_3 = new QLabel(posedit_paper);
        label_3->setObjectName("label_3");

        gridLayout_3->addWidget(label_3, 5, 6, 1, 1);

        SceneSuoFang = new QSlider(posedit_paper);
        SceneSuoFang->setObjectName("SceneSuoFang");
        SceneSuoFang->setMaximum(200);
        SceneSuoFang->setValue(100);
        SceneSuoFang->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(SceneSuoFang, 5, 5, 1, 1);

        setcolor_bt = new QPushButton(posedit_paper);
        setcolor_bt->setObjectName("setcolor_bt");
        setcolor_bt->setMaximumSize(QSize(200, 16777215));

        gridLayout_3->addWidget(setcolor_bt, 7, 1, 1, 1);

        label_2 = new QLabel(posedit_paper);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_2, 5, 4, 1, 1);

        reset_bt = new QPushButton(posedit_paper);
        reset_bt->setObjectName("reset_bt");

        gridLayout_3->addWidget(reset_bt, 5, 2, 1, 1);

        nomarl_mode = new QRadioButton(posedit_paper);
        nomarl_mode->setObjectName("nomarl_mode");
        nomarl_mode->setChecked(true);

        gridLayout_3->addWidget(nomarl_mode, 6, 4, 1, 1);

        ek_mode = new QRadioButton(posedit_paper);
        ek_mode->setObjectName("ek_mode");

        gridLayout_3->addWidget(ek_mode, 6, 5, 1, 1);

        tabWidget->addTab(posedit_paper, QString());
        batchmake_paper = new QWidget();
        batchmake_paper->setObjectName("batchmake_paper");
        gridLayout_4 = new QGridLayout(batchmake_paper);
        gridLayout_4->setObjectName("gridLayout_4");
        groupBox = new QGroupBox(batchmake_paper);
        groupBox->setObjectName("groupBox");
        groupBox->setMinimumSize(QSize(319, 0));
        groupBox->setMaximumSize(QSize(419, 16777215));
        gridLayout_5 = new QGridLayout(groupBox);
        gridLayout_5->setObjectName("gridLayout_5");
        label = new QLabel(groupBox);
        label->setObjectName("label");

        gridLayout_5->addWidget(label, 0, 0, 1, 1);

        selectional = new QLabel(groupBox);
        selectional->setObjectName("selectional");

        gridLayout_5->addWidget(selectional, 0, 1, 1, 1);

        vals = new QListWidget(groupBox);
        vals->setObjectName("vals");
        vals->setMinimumSize(QSize(300, 0));
        vals->setMaximumSize(QSize(400, 16777215));

        gridLayout_5->addWidget(vals, 1, 0, 1, 2);


        gridLayout_4->addWidget(groupBox, 0, 0, 3, 1);

        groupBox_2 = new QGroupBox(batchmake_paper);
        groupBox_2->setObjectName("groupBox_2");
        gridLayout_6 = new QGridLayout(groupBox_2);
        gridLayout_6->setObjectName("gridLayout_6");
        importList_bt = new QPushButton(groupBox_2);
        importList_bt->setObjectName("importList_bt");

        gridLayout_6->addWidget(importList_bt, 2, 0, 1, 2);

        start_make_bt = new QPushButton(groupBox_2);
        start_make_bt->setObjectName("start_make_bt");
        start_make_bt->setMinimumSize(QSize(0, 200));

        gridLayout_6->addWidget(start_make_bt, 0, 1, 1, 1);

        input_list = new QTextEdit(groupBox_2);
        input_list->setObjectName("input_list");

        gridLayout_6->addWidget(input_list, 0, 0, 2, 1);

        isten = new QRadioButton(groupBox_2);
        isten->setObjectName("isten");
        isten->setChecked(true);

        gridLayout_6->addWidget(isten, 1, 1, 1, 1);


        gridLayout_4->addWidget(groupBox_2, 0, 1, 1, 1);

        groupBox_3 = new QGroupBox(batchmake_paper);
        groupBox_3->setObjectName("groupBox_3");
        gridLayout_7 = new QGridLayout(groupBox_3);
        gridLayout_7->setObjectName("gridLayout_7");
        namelist = new QTableWidget(groupBox_3);
        namelist->setObjectName("namelist");
        namelist->setEditTriggers(QAbstractItemView::NoEditTriggers);
        namelist->setColumnCount(0);

        gridLayout_7->addWidget(namelist, 0, 0, 1, 1);


        gridLayout_4->addWidget(groupBox_3, 2, 1, 1, 1);

        progressBar = new QProgressBar(batchmake_paper);
        progressBar->setObjectName("progressBar");
        progressBar->setValue(0);

        gridLayout_4->addWidget(progressBar, 1, 1, 1, 1);

        tabWidget->addTab(batchmake_paper, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1236, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\345\210\266\344\275\234\345\231\250", nullptr));
        hello_html->setPlainText(QString());
        tabWidget->setTabText(tabWidget->indexOf(hello_paper), QCoreApplication::translate("MainWindow", "\346\254\242\350\277\216", nullptr));
        getimg_bt->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\345\233\276\347\211\207", nullptr));
        y_pos->setText(QCoreApplication::translate("MainWindow", "Y:", nullptr));
        delval_bt->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\346\226\207\345\255\227", nullptr));
        yuan_mode->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\346\227\266\344\275\277\347\224\250\345\216\237\347\205\247\347\211\207\345\210\206\350\276\250\347\216\207", nullptr));
        setfont_bt->setText(QCoreApplication::translate("MainWindow", "\345\255\227\344\275\223", nullptr));
        addval_bt->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\346\226\207\345\255\227", nullptr));
        x_pos->setText(QCoreApplication::translate("MainWindow", "X:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\346\224\276\345\244\247", nullptr));
        setcolor_bt->setText(QCoreApplication::translate("MainWindow", "\345\255\227\344\275\223\351\242\234\350\211\262", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\347\274\251\345\260\217", nullptr));
        reset_bt->setText(QCoreApplication::translate("MainWindow", "\345\244\215\344\275\215", nullptr));
        nomarl_mode->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\346\227\266\344\275\277\347\224\250\345\216\213\347\274\251\345\210\206\350\276\250\347\216\207", nullptr));
        ek_mode->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\346\227\266\345\233\272\345\256\2328k\345\210\206\350\276\250\347\216\207", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(posedit_paper), QCoreApplication::translate("MainWindow", "\344\275\215\347\275\256\351\200\211\345\256\232", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\346\226\207\345\255\227\345\210\227\350\241\250", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\351\200\211\344\270\255\351\241\271:", nullptr));
        selectional->setText(QCoreApplication::translate("MainWindow", "null", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "\345\257\274\345\205\245\345\220\215\345\215\225", nullptr));
        importList_bt->setText(QCoreApplication::translate("MainWindow", "\345\257\274\345\205\245", nullptr));
        start_make_bt->setText(QCoreApplication::translate("MainWindow", "\345\274\200\345\247\213\345\210\266\344\275\234", nullptr));
        isten->setText(QCoreApplication::translate("MainWindow", "\344\275\277\347\224\25010\350\277\233\345\210\266\351\207\217", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "\345\220\215\345\215\225\351\242\204\350\247\210", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(batchmake_paper), QCoreApplication::translate("MainWindow", "\346\211\271\351\207\217\345\210\266\344\275\234", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
