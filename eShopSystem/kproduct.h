#ifndef KPRODUCT_H
#define KPRODUCT_H

#include <QObject>
#include "QSqlTableModel"
class kproduct :public QObject
{
    Q_OBJECT
public:
    explicit kproduct(QObject *parent = nullptr);

    initSqlModel();

    QSqlTableModel *getSqlModel() const;

    bool addProduct(const QString &type,
                     const QString &name,
                     const QString &price,
                     const QString &sell,
                     const QString &numbers
                     );


signals:

private:
    QSqlTableModel *m_model;
};

#endif // KPRODUCT_H
