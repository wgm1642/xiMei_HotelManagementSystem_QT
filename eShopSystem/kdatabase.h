#ifndef KDATABASE_H
#define KDATABASE_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>

#include "QtSql/QSqlDatabase"
class Kdatabase
{

public:
    explicit Kdatabase(QObject *parent = nullptr);

    ~Kdatabase();
    void initdatabase();
    bool isUserExit(QString user,QString password);
    void createTables();
    bool adduser(QString user,QString password);
    bool addproduct(const QString &type, const QString &name, double price, double sell, const int &numbers);
    void clear();

private:
   QSqlDatabase eShop_db;
};

#endif // KDATABASE_H
