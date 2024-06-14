#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow), mfm{ new MFileManager{this} }, scene{new QGraphicsScene}
    , smgr{ new SceneManager{this, scene, nullptr} }, _img{new QGraphicsPixmapItem}
    , nlmgr{new NameListManager{this}}, modegroup{ new QButtonGroup }
{
    ui->setupUi(this);
    ui->view->setBackgroundBrush(QBrush(Qt::gray));
    scene->setBackgroundBrush(QBrush(Qt::black));
    scene->setSceneRect(0,0,300,300);
    scene->addItem(_img);
    ui->view->setAlignment(Qt::AlignCenter);
    ui->hello_html->appendHtml(mfm->getAllText(":/hello/index.html"));
    ui->view->setScene(scene);
    modegroup->addButton(ui->nomarl_mode, 1);
    modegroup->addButton(ui->yuan_mode, 0);
    modegroup->addButton(ui->ek_mode, 2);

    QFont font{};
    font.setBold(true);
    ui->selectional->setFont(font);

    _img->setZValue(0.01);
    nlmgr->setTable(ui->namelist);
    smgr->setListWidget(ui->vallist_li);
    smgr->setScListWidget(ui->vals);
    smgr->setXYPos(new XYpos(ui->x_pos,ui->y_pos));
    smgr->setNameList(nlmgr);

    connect(ui->addval_bt, &QPushButton::clicked, this, &MainWindow::addText);
    connect(ui->getimg_bt, &QPushButton::clicked, this, &MainWindow::setBackImage);
    connect(ui->delval_bt, &QPushButton::clicked, this, &MainWindow::removeText);
    connect(ui->setcolor_bt, &QPushButton::clicked, smgr, &SceneManager::setFontColor);
    connect(ui->setfont_bt, &QPushButton::clicked, smgr, &SceneManager::setFont);
    connect(ui->importList_bt, &QPushButton::clicked, this, &MainWindow::importList);
    connect(ui->vals, &QListWidget::itemClicked, this, &MainWindow::updateSelection);
    connect(ui->start_make_bt, &QPushButton::clicked, this, &MainWindow::Start_);
    connect(ui->SceneSuoFang, &QSlider::valueChanged, this, &MainWindow::turnSuoFang);
    connect(ui->reset_bt, &QPushButton::clicked, this, &MainWindow::resetView);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::addText(){
    QString name = QInputDialog::getText(this, "请输入名称", "name");
    smgr->appendText(name,name);
}

void MainWindow::setBackImage(){
    QString filename = QFileDialog::getOpenFileName(this, "打开图片", mfm->getdesktopdir(), "图片(*.jpg);;网络图片(*.png)");
    if(filename.isEmpty()){ return; }
    QPixmap* pixmap = mfm->getPixmap(filename);
    qDebug() << modegroup->checkedId();
    switch (modegroup->checkedId()) {
    case 0:{
        scene->setSceneRect(pixmap->rect());
        _img->setPixmap(*pixmap);
        break;
    }
    case 1:{
        *pixmap = pixmap->scaled(1280, 720, Qt::KeepAspectRatio);
        scene->setSceneRect(pixmap->rect());
        _img->setPixmap(*pixmap);
        break;
    }
    case 2:{
        *pixmap = pixmap->scaled(8000,8000, Qt::KeepAspectRatio);
        scene->setSceneRect(pixmap->rect());
        _img->setPixmap(*pixmap);
        break;
    }
    default:
        break;
    }

}

void MainWindow::removeText(){
    const QString& name = QInputDialog::getText(this, "请输入名称", "请输入要删除的文字名称");
    if(name.isEmpty()){ return; }
    smgr->removeText(name);
    updateSelection();
}

void MainWindow::importList(){
    QListWidgetItem* item = ui->vals->currentItem();
    if(item == nullptr){
        QMessageBox::warning(this, "导入错误", "未选择列表项");
        return;
    }
    QString text = item->text();
    this->nlmgr->addRowInfo(ui->input_list->toPlainText(),text);
}

void MainWindow::startMake(){

}

void MainWindow::updateSelection(){
    if(ui->vals->currentItem()!=nullptr)
        ui->selectional->setText(ui->vals->currentItem()->text());
    else{
        ui->selectional->setText("null");
    }
}

void MainWindow::Start_(){
    auto namelist = nlmgr->getNameList();
    if(namelist.isEmpty()){
        QMessageBox::warning(this, "错误", "名单为空");
        return;
    }
    QString FolderName = QFileDialog::getExistingDirectory(this, "打开保存文件夹", mfm->getdesktopdir());
    if(FolderName.isEmpty()){
        return;
    }
    ui->progressBar->setMaximum(namelist.count());
    int v = 1;
    if(ui->isten->isChecked())
    {
        for(QStringList li : namelist){
            smgr->changeAllText(li);
            smgr->saveImage(FolderName+"/"+li.at(0)+QString::number(v)+".png", "PNG");
            ui->progressBar->setValue(v);
            v++;
        }
    }
    else{
        for(QStringList li : namelist){
            smgr->changeAllText(li);
            smgr->saveImage(FolderName+"/"+li.at(0)+".png", "PNG");
            ui->progressBar->setValue(v);
            v++;
        }
    }
}

void MainWindow::allDisable(){
    ui->importList_bt->setEnabled(false);
    ui->start_make_bt->setEnabled(false);
}

void MainWindow::turnSuoFang(int value){
    ui->view->setTransformationAnchor(QGraphicsView::AnchorViewCenter);
    double scaleFactor = 1.0;
    if(value > scaleFactor_m){ scaleFactor = 1.1; }
    else{ scaleFactor = 0.9; }
    ui->view->scale(scaleFactor,scaleFactor);
    scaleFactor_m = value;
}

void MainWindow::resetView(){
    ui->view->resetTransform();
    ui->SceneSuoFang->setValue(100);
    this->scaleFactor_m = 100;
}







