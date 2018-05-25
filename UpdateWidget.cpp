#include "UpdateWidget.h"
#include "ui_UpdateWidget.h"

#include <QDir>
#include <QTimer>

#include "DataUtil.h"
UpdateWidget::UpdateWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::UpdateWidget)
{
    ui->setupUi(this);
    InitWidget();
}

UpdateWidget::~UpdateWidget()
{
    delete ui;
}

void UpdateWidget::startMove()
{
    //复制临时文件到主目录
    DataUtil::copyDir(QCoreApplication::applicationDirPath()+QDir::separator()+"temp",QCoreApplication::applicationDirPath());
    //删除临时文件
    DataUtil::deleteDir(QCoreApplication::applicationDirPath()+QDir::separator()+"temp");

    //更新结束
    copyFinish();
}

void UpdateWidget::copyFinish()
{

}

void UpdateWidget::InitWidget()
{
    QTimer::singleShot(1000,this,,&UpdateWidget::startMove);
    //connect(ui->update,&QToolButton::clicked,this,&UpdateWidget::startMove);
    //connect(ui->cancel,&QToolButton::clicked,this,&UpdateWidget::close);

//    if(argc > 2)
//    {
//        DataUtil::copyDir(argv[1],argv[2]);
//        DataUtil::deleteDir(argv[1]);
//       // QMessageBox::information(nullptr,"update","success!");
//    }
}
