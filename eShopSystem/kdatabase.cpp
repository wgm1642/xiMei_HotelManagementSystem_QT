#include "kdatabase.h"
#include "QDebug"
#include <QSqlError>
#include <QSqlQuery>
#include "qslider.h"
#include "QMessageBox"

Kdatabase::Kdatabase(QObject *parent)
{
       qDebug()<<" Kdatabase() ";
      initdatabase();
}

Kdatabase::~Kdatabase()//调用析构函数时关闭数据库连接
{

    if(eShop_db.open())
    {
        eShop_db.close();
    }
}

void Kdatabase::initdatabase()
{


    bool ok;
    eShop_db = QSqlDatabase::addDatabase("QSQLITE");
    eShop_db.setDatabaseName("eShop.db");

    ok = eShop_db.open();
    if(!ok)
    {
        qDebug() << "[KDataBase::initDataBase]:: "<<eShop_db.lastError().text() ;
        return ;
    }

    createTables();
}

bool Kdatabase::isUserExit(QString user, QString password)
{

    qDebug()<<user <<"    "<<password;
    bool ok;
    QSqlQuery query;
    QString sql="select * from user Where user=? and password=?" ;//
    query.prepare(sql);
    query.bindValue(0,user);
    query.bindValue(1,password);
    ok = query.exec();
    if(!ok)
    {
        qDebug() << "[KDataBase::dbSerachUser]: " << query.lastError().text();
        return false;
    }

    if(query.next()) //查询在结果集合中是否有下一条记录
    {
        return true;
    }
    return false;
}

void Kdatabase::createTables()
{

    bool ok;
    QSqlQuery query;
    QString sql = "CREATE TABLE IF NOT EXISTS user(id integer primary key AUTOINCREMENT ,"
                                      "name text not null,"
                                      "password text not null);";

    ok = query.exec(sql); //执行 SQL 语句
    if(!ok)
    {
        qDebug() << "[KDataBase::createTables]: " << query.lastError().text();
        return ;
    }

}

bool Kdatabase::adduser(QString user, QString password)
{
    QSqlQuery sql_query;

    QString insert_sql = "insert into  user(user,password) values( ?, ?)";
    sql_query.prepare(insert_sql);
    sql_query.addBindValue(user);
    sql_query.addBindValue(password);
    if(!sql_query.exec())
    {
        qDebug() << sql_query.lastError();
    }
    else
    {
        QMessageBox::information(NULL,  "提示信息",  "账号"+user+"注册成功", QMessageBox::Yes);
        return true;
    }

    return false;
}

bool Kdatabase::addproduct(const QString &type, const QString &name,  double price,  double sell, const int &numbers)
{
    QSqlQuery sql_query;

    QString insert_sql = "insert into  commodities(type,name,price,sell,numbers) values(?,?,?,?,?)";
    sql_query.prepare(insert_sql);
    sql_query.addBindValue(type);
    sql_query.addBindValue(name);
    sql_query.addBindValue(price);
    sql_query.addBindValue(sell);
    sql_query.addBindValue(numbers);
    if(!sql_query.exec())
    {
        qDebug() << sql_query.lastError();
    }
    else
    {
        QMessageBox::information(NULL,  "提示信息",  "商品"+name+"入库成功", QMessageBox::Yes);
        return true;
    }

    return false;
}

void Kdatabase::clear()
{
    QSqlQuery sql_query;

    QString sqlDelete = "delete from commodities";

    if(!sql_query.exec(sqlDelete))
    {
        qDebug() << sql_query.lastError();
    }
    else
    {
        QMessageBox::information(NULL,  "提示信息",  "清仓成功", QMessageBox::Yes);
        return ;
    }
}
