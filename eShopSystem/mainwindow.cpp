#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "login.h"
#include "QDebug"
#include "registdialog.h"
#include "mema.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);

    connect(ui->pushButton_login,SIGNAL(clicked()),this,SLOT(login()));//点击登录时
    connect(ui->register_2,SIGNAL(clicked()),this,SLOT(regist()));//当用户点击注册时。

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::login()
{
    Login lo;
    QString user=ui->user->text();
    QString password=ui->password->text();
    qDebug()<<user<<"    "<<password<<"     ";
    if( lo.initLogin(user,password))
    {
        this->close();
        //
        mema();
    }

}

void MainWindow::regist()
{

    registDialog r;
    r.show();

    r.exec();
}

void MainWindow::mema()
{

   MeMa m;
   m.show();
   m.initMeMa();//进入到管理商品页面

   m.exec();
   return;
}


