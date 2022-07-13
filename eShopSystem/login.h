#ifndef LOGIN_H
#define LOGIN_H
#include "QMessageBox"
#include <QObject>

class Login : public QObject
{
    Q_OBJECT
public:
    explicit Login(QObject *parent = nullptr);
    bool isExit();//判断输入的两个password 和user是否存在
    bool initLogin(QString use,QString passwd);

public slots:

private:
    QString user="";
    QString password="";
};

#endif // LOGIN_H
