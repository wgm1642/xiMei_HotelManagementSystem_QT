#include "mema.h"
#include "ui_mema.h"
#include "QDebug"
#include "QMessageBox"
#include "kdatabase.h"
#include "QToolBox"
#include "QtSql/QSqlDatabase"
#include <QSqlQuery>
#include <QSqlError>
#include "QPushButton"
#include "QDateTime"
MeMa::MeMa(QDialog *parent) :
    QDialog(parent),
    ui(new Ui::MeMa)
{
    ui->setupUi(this);
    connect(ui->pushButton_into,SIGNAL(clicked()),this,SLOT(into()));
    connect(ui->pushButton_clear,SIGNAL(clicked()),this,SLOT(clear()));
    connect(ui->sell_2,SIGNAL(clicked()),this,SLOT(sell_2()));
    connect(ui->order,SIGNAL(clicked()),this,SLOT(order()));
    connect(ui->styp_2,SIGNAL(on_styp_2_activated(int index)),this,SLOT(on_styp_2_activated(const QString &arg1)));
    connect(ui->name_2,SIGNAL(on_name_2_activated(int index)),this,SLOT(on_name_2_activated(const QString &arg1)));
    connect(ui->count_2,SIGNAL(on_count_2_valueChanged(int arg1)),this,SLOT());


}

MeMa::~MeMa()
{
    delete ui;
}

void MeMa::initMeMa()
{
    /*步骤
     * 1、先将所有的仓库当中的商品陈列出来
     * 2、可以选择入库操作，通过输入的信息商品入库‘
     * 3、清仓，将数据库当中的所有数据输出，将所有的记录删除，留表
     *
     *  4、预售功能，没点击一次按钮，要将数据库当中的数据更改一次
     * 5、将更改的数据，在页面打印出来
     *
     * / //先将
   */
    m_product = new kproduct;

    ui->tableView->setModel(m_product->getSqlModel());


    ui->order->setEnabled(false);//设置下单按键不可用
    on_styp_2_activated();
    on_count_2_valueChanged();

}

void MeMa::print()//将商品在展示出来
{

}

void MeMa::into()
{

      QString type=ui->type_1->currentText();//获得商品类型
      QString name=ui->name_1->text();//获得商品名称
      QString  into_price=ui->price_1->text();//获得进价
      QString  sell_price=ui->sell_1->text();//获得售价
      QString  num=ui->count_1->text();//获得数目
      if(name==nullptr)
      {
          QMessageBox::information(NULL,  "提示信息",  "商品名称不能为空", QMessageBox::Yes);
          return ;
      }
      if(into_price==nullptr)
      {
          QMessageBox::information(NULL,  "提示信息",  "进价不能为空", QMessageBox::Yes);
          return ;
      }
      if(sell_price==nullptr)
      {
          QMessageBox::information(NULL,  "提示信息",  "售价不能为空", QMessageBox::Yes);
          return ;
      }
      if(num=="0")
      {
          QMessageBox::information(NULL,  "提示信息",  "数目不能为0", QMessageBox::Yes);
          return ;
      }
      if(into_price.toDouble()>sell_price.toDouble())
      {
          QMessageBox::information(NULL,  "提示信息",  "奸细，进价怎么能比卖价高呢,举报你", QMessageBox::Yes);
          return;
      }
      Kdatabase k;
      if(k.addproduct(type,name,into_price.toDouble(), sell_price.toDouble(),num.toInt()))
      {
          initMeMa();//重新载入数据库数据
      }
      else
      {
          QMessageBox::information(NULL,  "提示信息",  "录入失败", QMessageBox::Yes);
      }
}

void MeMa::clear()
{

      Kdatabase k;
      k.clear();
      initMeMa();//重新载入数据库数据
}
void MeMa::sell_2()//点击出售
{
    //第一个，先选择一个属性，属性出来之后，将商品展出来
    //第二个，才是参数的变化

    QString numbers=ui->count_2->text();
    if(numbers=="0")
    {
        QMessageBox::information(NULL,  "提示信息",  "数量不能为0", QMessageBox::Yes);
        return;
    }
    QString name=ui->name_2->currentText();

    QString price=ui->label_10->text();
    QString sumPri=ui->label_19->text();
    QDateTime curDateTime=QDateTime::currentDateTime();
    ui->textBrowser->append("--------------------------------------------------------");
    ui->textBrowser->append(curDateTime.toString ("hh:mm: ss11")+"售出： "+name);
    ui->textBrowser->append("           数量："+numbers+" 单价： "+price +" ￥  总价: "+sumPri +"￥");
    ui->textBrowser->append("--------------------------------------------------------");
    sumOrders++;//订单数加一
    sumPrice+=sumPri.toDouble();//价格加上
    ui->order->setEnabled(true);



     //将数据库当中的数据更新
    int n=ui->label_17->text().toInt()-ui->count_2->text().toInt();
    QString tpye=ui->name_2->currentText();
    QSqlQuery query;
    QString sql="UPDATE   commodities numbers=? Where type=? and name=?";
    query.prepare(sql);
    query.bindValue(0,n);
    query.bindValue(1,tpye);
    query.bindValue(2,name);
    if(query.exec())
    {
        qDebug() << query.lastError();
        return ;
    }
    else
    {
         QMessageBox::information(NULL,  "提示信息",  "出售成功", QMessageBox::Yes);
         on_styp_2_activated();
    }
}

void MeMa::order()//点击下单
{
    if(sumOrders==0)
    {
        QMessageBox::information(NULL,  "提示信息",  "还没有订单", QMessageBox::Yes);
        return ;
    }
      QMessageBox::information(NULL,  "提示信息",  "下单成功", QMessageBox::Yes);
       QDateTime curDateTime=QDateTime::currentDateTime();
       ui->textBrowser->append("日期："+curDateTime.toString ("yyyy-MM-dd hh:mm: ss11") );
       ui->textBrowser->append(" 订 单 号："+QString::number(sumOrders));
      ui->textBrowser->append( "应付款总额: " + QString::number(sumPrice) +"￥");
      ui->textBrowser->append("下单成功");
      sumOrders=0;
      sumPrice=0.0;
      ui->order->setEnabled(false);
}

void MeMa::styp_2change()
{

}


void MeMa::on_styp_2_activated()//预售订单的下拉框
{
    Kdatabase k;
    k.initdatabase();

    QString str = ui->styp_2->currentText();

    QString tpye=ui->styp_2->currentText();//获得当前的商品类别，将该商品类别的商品展示出来

    QSqlQuery query;
    QString sql="select name, sell, numbers from  commodities Where type=?";
    query.prepare(sql);
    query.bindValue(0,str);

    if(!query.exec())
    {
        qDebug() << query.lastError();
        return ;
    }
    QStringList  list;
    while(query.next())
    {
        qDebug()<<query.value(0).toString();
        list.append(query.value(0).toString());
    }
            ui->name_2->clear();
            ui->name_2->insertItems(1,list);
    on_name_2_activated();

}

void MeMa::on_name_2_activated()//商品名下拉框
{

    Kdatabase k;
    k.initdatabase();

    QString str = ui->name_2->currentText();//获得商品名

    QString tpye=ui->styp_2->currentText();//获得当前的商品类别，将该商品类别的商品展示出来

    QSqlQuery query;
    QString sql="select  sell, numbers from  commodities Where type=? and name=?";
    query.prepare(sql);
    query.bindValue(0,tpye);
    query.bindValue(1,str);

    if(!query.exec())
    {
        qDebug() << query.lastError();
        return ;
    }
    else
    {
       qDebug()<<  query.size();
        while(query.next())
        {
            ui->label_10->setText(query.value(0).toString());//单价
            ui->label_17->setText(query.value(1).toString());//库存

        }

    }
}

void MeMa::on_count_2_valueChanged(const QString &arg1)
{

}
void MeMa::on_count_2_valueChanged()//数目下拉框
{
     QString sell=ui->label_10->text();//获得单价
     QString count=ui->label_17->text();//获得库存数目
     ui->count_2->setRange(1,count.toInt());
     double allPrice=ui->count_2->text().toDouble()*sell.toDouble();
     ui->label_19->setText(QString::number(allPrice));
}


