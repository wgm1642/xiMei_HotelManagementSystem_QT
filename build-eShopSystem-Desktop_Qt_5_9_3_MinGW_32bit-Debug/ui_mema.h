/********************************************************************************
** Form generated from reading UI file 'mema.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEMA_H
#define UI_MEMA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBox>

QT_BEGIN_NAMESPACE

class Ui_MeMa
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QComboBox *comboBox;
    QToolBox *toolBox;
    QDialog *page;
    QFrame *frame;
    QPushButton *pushButton_clear;
    QPushButton *pushButton_into;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *price_1;
    QLineEdit *sell_1;
    QLabel *label_9;
    QSpinBox *count_1;
    QComboBox *comboBox_2;
    QComboBox *type_1;
    QLineEdit *name_1;
    QTableView *tableView;
    QDialog *page_2;
    QFrame *frame_2;
    QPushButton *order;
    QPushButton *sell_2;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QSpinBox *count_2;
    QComboBox *comboBox_4;
    QComboBox *styp_2;
    QComboBox *name_2;
    QLabel *label_31;
    QLabel *label_2;
    QTextBrowser *textBrowser;
    QLabel *label_10;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;

    void setupUi(QDialog *MeMa)
    {
        if (MeMa->objectName().isEmpty())
            MeMa->setObjectName(QStringLiteral("MeMa"));
        MeMa->resize(1084, 798);
        groupBox = new QGroupBox(MeMa);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 0, 1031, 781));
        groupBox->setStyleSheet(QStringLiteral("background-color: rgb(157, 235, 235);"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(350, 10, 221, 41));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setLayoutDirection(Qt::LeftToRight);
        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(10, 60, 841, 581));
        toolBox = new QToolBox(groupBox);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        toolBox->setGeometry(QRect(10, 60, 971, 651));
        page = new QDialog();
        page->setObjectName(QStringLiteral("page"));
        page->setGeometry(QRect(0, 0, 971, 591));
        frame = new QFrame(page);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 0, 991, 561));
        frame->setAutoFillBackground(false);
        frame->setStyleSheet(QStringLiteral("background-color: rgb(70, 177, 141);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        pushButton_clear = new QPushButton(frame);
        pushButton_clear->setObjectName(QStringLiteral("pushButton_clear"));
        pushButton_clear->setGeometry(QRect(70, 410, 93, 28));
        pushButton_into = new QPushButton(frame);
        pushButton_into->setObjectName(QStringLiteral("pushButton_into"));
        pushButton_into->setGeometry(QRect(70, 370, 93, 28));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 290, 71, 21));
        label_3->setStyleSheet(QStringLiteral("background-color: rgb(155, 217, 255);"));
        label_4 = new QLabel(frame);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 220, 72, 31));
        label_4->setStyleSheet(QStringLiteral("background-color: rgb(107, 184, 255);"));
        label_5 = new QLabel(frame);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(180, 150, 72, 21));
        label_5->setStyleSheet(QStringLiteral("background-color: rgb(139, 255, 103);"));
        label_6 = new QLabel(frame);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(30, 100, 72, 21));
        label_6->setStyleSheet(QStringLiteral("background-color: rgb(255, 150, 58);"));
        label_7 = new QLabel(frame);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(30, 40, 72, 21));
        label_7->setStyleSheet(QStringLiteral("background-color: rgb(255, 85, 0);"));
        label_8 = new QLabel(frame);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(30, 150, 72, 21));
        label_8->setStyleSheet(QStringLiteral("background-color: rgb(151, 236, 255);"));
        price_1 = new QLineEdit(frame);
        price_1->setObjectName(QStringLiteral("price_1"));
        price_1->setGeometry(QRect(110, 150, 71, 21));
        price_1->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        sell_1 = new QLineEdit(frame);
        sell_1->setObjectName(QStringLiteral("sell_1"));
        sell_1->setGeometry(QRect(250, 150, 71, 21));
        sell_1->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label_9 = new QLabel(frame);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(330, 150, 16, 21));
        count_1 = new QSpinBox(frame);
        count_1->setObjectName(QStringLiteral("count_1"));
        count_1->setGeometry(QRect(110, 220, 46, 31));
        count_1->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        comboBox_2 = new QComboBox(frame);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(370, 10, 471, 521));
        type_1 = new QComboBox(frame);
        type_1->setObjectName(QStringLiteral("type_1"));
        type_1->setGeometry(QRect(110, 40, 81, 22));
        name_1 = new QLineEdit(frame);
        name_1->setObjectName(QStringLiteral("name_1"));
        name_1->setGeometry(QRect(110, 100, 113, 21));
        name_1->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        tableView = new QTableView(frame);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(350, 0, 621, 591));
        tableView->setStyleSheet(QStringLiteral("background-color: rgb(255, 232, 198);"));
        toolBox->addItem(page, QString::fromUtf8("\345\225\206\345\223\201\345\205\245\345\272\223"));
        page_2 = new QDialog();
        page_2->setObjectName(QStringLiteral("page_2"));
        page_2->setGeometry(QRect(0, 0, 971, 591));
        frame_2 = new QFrame(page_2);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(20, 0, 941, 561));
        frame_2->setAutoFillBackground(false);
        frame_2->setStyleSheet(QStringLiteral("background-color: rgb(70, 177, 141);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        order = new QPushButton(frame_2);
        order->setObjectName(QStringLiteral("order"));
        order->setGeometry(QRect(210, 420, 93, 28));
        order->setCheckable(false);
        order->setAutoDefault(true);
        order->setFlat(false);
        sell_2 = new QPushButton(frame_2);
        sell_2->setObjectName(QStringLiteral("sell_2"));
        sell_2->setGeometry(QRect(210, 370, 93, 28));
        label_11 = new QLabel(frame_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(30, 220, 72, 31));
        label_11->setStyleSheet(QStringLiteral("background-color: rgb(107, 184, 255);"));
        label_12 = new QLabel(frame_2);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(180, 150, 72, 21));
        label_12->setStyleSheet(QStringLiteral("background-color: rgb(139, 255, 103);"));
        label_13 = new QLabel(frame_2);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(30, 100, 72, 21));
        label_13->setStyleSheet(QStringLiteral("background-color: rgb(255, 150, 58);"));
        label_14 = new QLabel(frame_2);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(30, 40, 72, 21));
        label_14->setStyleSheet(QStringLiteral("background-color: rgb(255, 85, 0);"));
        label_15 = new QLabel(frame_2);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(30, 150, 72, 21));
        label_15->setStyleSheet(QStringLiteral("background-color: rgb(151, 236, 255);"));
        label_16 = new QLabel(frame_2);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(330, 150, 16, 21));
        label_16->setStyleSheet(QStringLiteral("font: 9pt \"Adobe Arabic\";"));
        count_2 = new QSpinBox(frame_2);
        count_2->setObjectName(QStringLiteral("count_2"));
        count_2->setGeometry(QRect(110, 220, 46, 31));
        count_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        comboBox_4 = new QComboBox(frame_2);
        comboBox_4->setObjectName(QStringLiteral("comboBox_4"));
        comboBox_4->setGeometry(QRect(370, 10, 471, 521));
        styp_2 = new QComboBox(frame_2);
        styp_2->setObjectName(QStringLiteral("styp_2"));
        styp_2->setGeometry(QRect(110, 40, 81, 22));
        name_2 = new QComboBox(frame_2);
        name_2->setObjectName(QStringLiteral("name_2"));
        name_2->setEnabled(true);
        name_2->setGeometry(QRect(110, 100, 171, 22));
        name_2->setStyleSheet(QStringLiteral("background-color: rgb(234, 234, 234);"));
        label_31 = new QLabel(frame_2);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setGeometry(QRect(160, 220, 61, 31));
        label_31->setStyleSheet(QStringLiteral("background-color: rgb(151, 236, 255);"));
        label_2 = new QLabel(frame_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(290, 220, 21, 31));
        textBrowser = new QTextBrowser(frame_2);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(370, 10, 471, 521));
        textBrowser->setStyleSheet(QStringLiteral("background-color: rgb(194, 205, 255);"));
        label_10 = new QLabel(frame_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(100, 150, 81, 21));
        label_10->setStyleSheet(QStringLiteral("background-color: rgb(191, 191, 191);"));
        label_17 = new QLabel(frame_2);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(250, 150, 72, 21));
        label_17->setStyleSheet(QStringLiteral("background-color: rgb(191, 191, 191);"));
        label_18 = new QLabel(frame_2);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(170, 150, 21, 21));
        label_18->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label_19 = new QLabel(frame_2);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(220, 220, 72, 31));
        label_19->setStyleSheet(QStringLiteral("background-color: rgb(170, 170, 170);"));
        toolBox->addItem(page_2, QString::fromUtf8("\351\242\204\345\224\256\350\256\242\345\215\225"));

        retranslateUi(MeMa);

        toolBox->setCurrentIndex(0);
        order->setDefault(false);


        QMetaObject::connectSlotsByName(MeMa);
    } // setupUi

    void retranslateUi(QDialog *MeMa)
    {
        MeMa->setWindowTitle(QApplication::translate("MeMa", "\345\225\206\345\223\201\347\256\241\347\220\206", Q_NULLPTR));
        label->setText(QApplication::translate("MeMa", "      \345\225\206\345\223\201\347\256\241\347\220\206", Q_NULLPTR));
        pushButton_clear->setText(QApplication::translate("MeMa", "\346\270\205\344\273\223", Q_NULLPTR));
        pushButton_into->setText(QApplication::translate("MeMa", "\345\205\245\345\272\223", Q_NULLPTR));
        label_3->setText(QApplication::translate("MeMa", "\346\234\215\350\243\205\346\240\267\345\274\217\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("MeMa", "  \346\225\260\351\207\217\357\274\232", Q_NULLPTR));
        label_5->setText(QApplication::translate("MeMa", "\357\277\245  \345\224\256\344\273\267\357\274\232", Q_NULLPTR));
        label_6->setText(QApplication::translate("MeMa", "  \345\220\215\347\247\260\357\274\232", Q_NULLPTR));
        label_7->setText(QApplication::translate("MeMa", "  \347\261\273\345\210\253\357\274\232", Q_NULLPTR));
        label_8->setText(QApplication::translate("MeMa", "  \350\277\233\344\273\267\357\274\232", Q_NULLPTR));
        label_9->setText(QApplication::translate("MeMa", "\357\277\245", Q_NULLPTR));
        type_1->clear();
        type_1->insertItems(0, QStringList()
         << QApplication::translate("MeMa", "\351\233\266\351\243\237", Q_NULLPTR)
         << QApplication::translate("MeMa", "\346\234\215\350\243\205", Q_NULLPTR)
         << QApplication::translate("MeMa", "\347\231\276\350\264\247", Q_NULLPTR)
         << QApplication::translate("MeMa", "\346\225\260\347\240\201", Q_NULLPTR)
         << QString()
         << QString()
        );
        toolBox->setItemText(toolBox->indexOf(page), QApplication::translate("MeMa", "\345\225\206\345\223\201\345\205\245\345\272\223", Q_NULLPTR));
        order->setText(QApplication::translate("MeMa", "\344\270\213\345\215\225", Q_NULLPTR));
        sell_2->setText(QApplication::translate("MeMa", "\345\207\272\345\224\256", Q_NULLPTR));
        label_11->setText(QApplication::translate("MeMa", "  \346\225\260\351\207\217\357\274\232", Q_NULLPTR));
        label_12->setText(QApplication::translate("MeMa", "   \345\272\223\345\255\230\357\274\232", Q_NULLPTR));
        label_13->setText(QApplication::translate("MeMa", "  \345\220\215\347\247\260\357\274\232", Q_NULLPTR));
        label_14->setText(QApplication::translate("MeMa", "  \347\261\273\345\210\253\357\274\232", Q_NULLPTR));
        label_15->setText(QApplication::translate("MeMa", "  \345\215\225\344\273\267\357\274\232", Q_NULLPTR));
        label_16->setText(QApplication::translate("MeMa", "\344\273\266", Q_NULLPTR));
        styp_2->clear();
        styp_2->insertItems(0, QStringList()
         << QApplication::translate("MeMa", "\351\233\266\351\243\237", Q_NULLPTR)
         << QApplication::translate("MeMa", "\346\234\215\350\243\205", Q_NULLPTR)
         << QApplication::translate("MeMa", "\347\231\276\350\264\247", Q_NULLPTR)
         << QApplication::translate("MeMa", "\346\225\260\347\240\201", Q_NULLPTR)
         << QString()
         << QString()
        );
        name_2->clear();
        name_2->insertItems(0, QStringList()
         << QApplication::translate("MeMa", "\350\257\267\351\200\211\346\213\251", Q_NULLPTR)
         << QString()
         << QString()
        );
        label_31->setText(QApplication::translate("MeMa", "  \346\200\273\344\273\267\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("MeMa", "\357\277\245", Q_NULLPTR));
        label_10->setText(QString());
        label_17->setText(QString());
        label_18->setText(QApplication::translate("MeMa", "\357\277\245", Q_NULLPTR));
        label_19->setText(QString());
        toolBox->setItemText(toolBox->indexOf(page_2), QApplication::translate("MeMa", "\351\242\204\345\224\256\350\256\242\345\215\225", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MeMa: public Ui_MeMa {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEMA_H
