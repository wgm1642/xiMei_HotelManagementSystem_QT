#ifndef MEMA_H
#define MEMA_H
#include "kproduct.h"
#include <QDialog>
#include <QDialog>
namespace Ui {
class MeMa;
}

class MeMa : public QDialog
{
    Q_OBJECT

public:
    explicit MeMa(QDialog *parent = 0);
    ~MeMa();
    void initMeMa();//进入到操操作页面
    /*步骤
     * 1、先将所有的仓库当中的商品陈列出来
     * 2、可以选择入库操作，通过输入的信息商品入库‘
     * 3、清仓，将数据库当中的所有数据输出，将所有的记录删除，留表
     */
     void print();//将所有的商品打印出来


signals:
    void MySignal(QString mess);
    void  on_styp_2_activated(int index);
    void  on_name_2_activated(int index);
public slots:
    void into();//入库
    void clear();//清仓
    void sell_2();
    void order();
    void styp_2change();
    void on_styp_2_activated();
    void on_name_2_activated();
    void on_count_2_valueChanged(const QString &arg1);
public:
    void emitSignal(){
        emit MySignal(message);
    }

private slots:
    void on_count_2_valueChanged();

    void on_type_1_activated(const QString &arg1);

private:
      QString message;
      Ui::MeMa *ui;
      kproduct *m_product;
      int sumOrders=0;
      double  sumPrice=0.0;

};



#endif // MEMA_H
