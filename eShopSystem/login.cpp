#include "login.h"
#include "mainwindow.h"
#include "QMessageBox"
#include "kdatabase.h"
#include "QDebug"
Login::Login(QObject *parent) : QObject(parent)//登录类
{    
}

bool Login::isExit()
{

       Kdatabase M_db;

       if(M_db.isUserExit(user,password))
           return true;
       return false;
}
bool Login::initLogin(QString use, QString passwd)
{
    if(use==nullptr||passwd==nullptr)
    {

        if(use==nullptr)
            QMessageBox::information(NULL,  "提示信息",  "用户名不能为空", QMessageBox::Yes );
        else
            QMessageBox::information(NULL,  "提示信息",  "密码不能为空", QMessageBox::Yes );
    }
    else
        {
            user=use;
            password=passwd;   
            qDebug()<<user<<"   "<<password;
            if(isExit())//判断账户密码是否存在
            {
                QMessageBox::information(NULL,  "提示信息",  "欢迎"+user+"登录", QMessageBox::Yes);
                return true;
            }
            else
            {
                 QMessageBox::information(NULL,  "提示信息",  "账号或密码错误", QMessageBox::Yes );
                 return false;
            }
    }


}
