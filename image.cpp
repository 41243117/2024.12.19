#include "image.h"
#include <QFileDialog>
#include <QDebug>

Image::Image(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowTitle(QStringLiteral("影像處理器"));
    central = new QWidget();
    mainLayout = new QHBoxLayout(central);
    imgWin = new QLabel();
    QPixmap *initPixmap = new QPixmap(300,200);
    initPixmap->fill(QColor(255,0,255));
    imgWin->resize(300,200);
    imgWin->setPixmap(*initPixmap);
    imgWin->setScaledContents(true);
    mainLayout->addWidget(imgWin);
    setCentralWidget(central);
    creatActions();
    creatMenus();
    creatToolBars();
}

Image::~Image() {}
void Image::creatActions(){
    openFileAction = new QAction(QStringLiteral("開啟檔案"),this);
    openFileAction->setShortcut(tr("Ctrl+O"));
    openFileAction->setStatusTip(QStringLiteral("開啟影像檔案"));
    connect(openFileAction,SIGNAL(triggered()),this,SLOT(showOpenFile()));
    exitFileAction = new QAction(QStringLiteral("結束"),this);
    exitFileAction->setShortcut(tr("Ctrl+Q"));
    exitFileAction->setStatusTip(QStringLiteral("退出程式"));
    connect(openFileAction,SIGNAL(triggered()),this,SLOT(close()));
}
void Image::creatMenus(){

}
void Image::creatToolBars(){

}
void Image::loadFile(QString filename){

}
void Image::showOpenFile(){

}
