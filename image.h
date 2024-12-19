#ifndef IMAGE_H
#define IMAGE_H

#include <QMainWindow>
#include <QAction>
#include <QMenu>
#include <QMenuBar>
#include <QImage>
#include <QPixmap>
#include <QLabel>
#include <QHBoxLayout>

class Image : public QMainWindow
{
    Q_OBJECT

public:
    Image(QWidget *parent = nullptr);
    ~Image();
    void creatActions();
    void creatMenus();
    void creatToolBars();
    void loadFile(QString filename);

private slots:
    void showOpenFile();

private:
    QWidget  *central;
    QMenu    *fileMenu;
    QToolBar *fileTool;
    QAction  *openFileAction;
    QAction  *exitAction;
    QImage    img;
    QLabel   *imgWin;
    QString   filename;
    QHBoxLayout *mainLayout;
};
#endif // IMAGE_H
