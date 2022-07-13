/********************************************************************************
** Form generated from reading UI file 'registdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTDIALOG_H
#define UI_REGISTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_registDialog
{
public:
    QPushButton *confirm;
    QPushButton *cancel;
    QLineEdit *username;
    QLineEdit *password;
    QLineEdit *resure;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QDialog *registDialog)
    {
        if (registDialog->objectName().isEmpty())
            registDialog->setObjectName(QStringLiteral("registDialog"));
        registDialog->resize(400, 300);
        registDialog->setStyleSheet(QLatin1String("\n"
"background-color: rgb(208, 208, 208);"));
        confirm = new QPushButton(registDialog);
        confirm->setObjectName(QStringLiteral("confirm"));
        confirm->setGeometry(QRect(70, 210, 93, 28));
        cancel = new QPushButton(registDialog);
        cancel->setObjectName(QStringLiteral("cancel"));
        cancel->setGeometry(QRect(180, 210, 93, 28));
        username = new QLineEdit(registDialog);
        username->setObjectName(QStringLiteral("username"));
        username->setGeometry(QRect(170, 60, 113, 21));
        password = new QLineEdit(registDialog);
        password->setObjectName(QStringLiteral("password"));
        password->setGeometry(QRect(170, 100, 113, 21));
        resure = new QLineEdit(registDialog);
        resure->setObjectName(QStringLiteral("resure"));
        resure->setGeometry(QRect(170, 140, 113, 21));
        label = new QLabel(registDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 60, 72, 15));
        label_2 = new QLabel(registDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(80, 100, 71, 21));
        label_3 = new QLabel(registDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(80, 140, 72, 15));
        label_4 = new QLabel(registDialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(40, 10, 341, 31));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        font.setWeight(75);
        font.setKerning(false);
        label_4->setFont(font);
        label_4->setLayoutDirection(Qt::RightToLeft);

        retranslateUi(registDialog);

        QMetaObject::connectSlotsByName(registDialog);
    } // setupUi

    void retranslateUi(QDialog *registDialog)
    {
        registDialog->setWindowTitle(QApplication::translate("registDialog", "Dialog", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        registDialog->setToolTip(QApplication::translate("registDialog", "<html><head/><body><p>\346\263\250\345\206\214</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        confirm->setText(QApplication::translate("registDialog", "\347\241\256\350\256\244", Q_NULLPTR));
        cancel->setText(QApplication::translate("registDialog", "\345\217\226\346\266\210", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        username->setWhatsThis(QApplication::translate("registDialog", "<html><head/><body><p>\350\276\223\345\205\245\350\264\246\345\217\267</p></body></html>", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_WHATSTHIS
        password->setWhatsThis(QApplication::translate("registDialog", "<html><head/><body><p>\350\276\223\345\205\245\345\257\206\347\240\201</p></body></html>", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_WHATSTHIS
        resure->setWhatsThis(QApplication::translate("registDialog", "<html><head/><body><p>\347\241\256\345\256\232\345\257\206\347\240\201</p></body></html>", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        label->setText(QApplication::translate("registDialog", "  \350\264\246\345\217\267  \357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("registDialog", "  \345\257\206\347\240\201  \357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("registDialog", "\347\241\256\350\256\244\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("registDialog", "         \346\263\250\345\206\214\350\264\246\345\217\267", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class registDialog: public Ui_registDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTDIALOG_H
