#include "registdialog.h"
#include "ui_registdialog.h"
#include "QDebug"
#include "QMessageBox"
#include "kdatabase.h"
registDialog::registDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::registDialog)
{
    ui->setupUi(this);
    ui->resure->setEchoMode ( QLineEdit::Password );
    ui->password->setEchoMode ( QLineEdit::Password );

    connect(ui->cancel,SIGNAL(clicked()),this,SLOT(cancel()));
    connect(ui->confirm,SIGNAL(clicked()),this,SLOT(confirm()));
}

registDialog::~registDialog()
{
    delete ui;
}

void registDialog::cancel()
{

    if (!(QMessageBox::information(this,tr("注册 Control View"),tr("Do you really want to log out 注册 Control View?"),tr("Yes"),tr("No"))))
    {
       this->close();
   }
    delete ui;
}

void registDialog::confirm()
{
    if(ui->username->text()==nullptr)
    {
        QMessageBox::information(NULL,  "提示信息",  "账号不能为空", QMessageBox::Yes);
        return ;
    }
    if(ui->password->text()==nullptr)
    {
        QMessageBox::information(NULL,  "提示信息",  "密码不能为空", QMessageBox::Yes);
        return ;
    }
    if(ui->resure->text()==nullptr)
    {
        QMessageBox::information(NULL,  "提示信息",  "需要再次确认密码", QMessageBox::Yes);
        return ;
    }
    if(ui->resure->text()!=ui->password->text())
    {
        QMessageBox::information(NULL,  "提示信息",  "两次密码不相同", QMessageBox::Yes);
        return ;
    }
    //先判断该账号是否存在，
    Kdatabase db;
    if(db.isUserExit(ui->username->text(),ui->password->text()))
    {
        QMessageBox::information(NULL,  "提示信息",  "该账户已经存在", QMessageBox::Yes);
    }
    else{

        if(db.adduser(ui->username->text(),ui->password->text()))
        {

        }
    }
    //不存在就可以注册，加入到数据库当中

    //注册完成退出




}
