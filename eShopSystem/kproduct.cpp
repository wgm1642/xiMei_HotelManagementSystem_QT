#include "kproduct.h"
#include <QSqlRecord>
#include <QDebug>
#include <QSqlError>
kproduct::kproduct(QObject *parent)
{
    initSqlModel();
}

 kproduct::initSqlModel()
{
     qDebug()<<"initSqlModel";
    m_model = new QSqlTableModel(this);
    m_model->setTable("commodities");
    m_model->setEditStrategy(QSqlTableModel::OnManualSubmit);//设置手动提交

    m_model->select();//查询数据库，将结果显示到关联的 tableview 上面
    m_model->setHeaderData(0,Qt::Horizontal,QString("商品类型"));
    m_model->setHeaderData(1,Qt::Horizontal,QString("商品名称"));
    m_model->setHeaderData(2,Qt::Horizontal,QString("进价(￥)"));
    m_model->setHeaderData(3,Qt::Horizontal,QString("售价(￥)"));
    m_model->setHeaderData(4,Qt::Horizontal,QString("库存"));
}

QSqlTableModel *kproduct::getSqlModel() const
{
    return m_model;
}
bool kproduct::addProduct(const QString &type,const QString &name,const QString &price, const QString &sell, const QString &numbers)
{
    QSqlRecord record;// 数据库记录对象
    record = m_model->record();
    record.setValue("type",type);
    record.setValue("name",name);
    record.setValue("price",price.toDouble());
    record.setValue("sell",sell.toDouble());
    record.setValue("numbers",numbers.toInt());

    m_model->insertRecord(-1,record);

    if(!m_model->submitAll())
     {
        qDebug() << "[kproduct::addStudents]: " << m_model->lastError().text();
        return false;
      }

    return true;

}
