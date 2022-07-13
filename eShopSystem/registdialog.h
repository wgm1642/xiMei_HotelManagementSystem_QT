#ifndef REGISTDIALOG_H
#define REGISTDIALOG_H

#include <QDialog>

namespace Ui {
class registDialog;
}

class registDialog : public QDialog
{
    Q_OBJECT

public:
    explicit registDialog(QWidget *parent = 0);
    ~registDialog();
public slots:
    void cancel();
    void confirm();

private:
    Ui::registDialog *ui;

};

#endif // REGISTDIALOG_H
