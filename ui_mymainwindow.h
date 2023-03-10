/********************************************************************************
** Form generated from reading UI file 'mymainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYMAINWINDOW_H
#define UI_MYMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyMainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *m_vl_screen;
    QLCDNumber *m_lcdResult;
    QHBoxLayout *m_hl_info;
    QLabel *m_label;
    QLabel *m_mem_label;
    QHBoxLayout *m_hl_clear;
    QPushButton *m_pb_clear;
    QPushButton *m_pb_backspace;
    QPushButton *m_pb_clear_all;
    QGridLayout *m_gl_buttons;
    QPushButton *m_pb_square;
    QPushButton *m_pb_fract;
    QPushButton *m_pb_sign;
    QPushButton *m_pb_7;
    QPushButton *m_pb_MC;
    QPushButton *m_pb_mult;
    QPushButton *m_pb_9;
    QPushButton *m_pb_3;
    QPushButton *m_pb_div;
    QPushButton *m_pb_6;
    QPushButton *m_pb_dot;
    QPushButton *m_pb_sqr;
    QPushButton *m_pb_minus;
    QPushButton *m_pb_MR;
    QPushButton *m_pb_4;
    QPushButton *m_pb_5;
    QPushButton *m_pb_8;
    QPushButton *m_pb_eq;
    QPushButton *m_pb_1;
    QPushButton *m_pb_MPLUS;
    QPushButton *m_pb_2;
    QPushButton *m_pb_0;
    QPushButton *m_pb_MS;
    QPushButton *m_pb_add;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MyMainWindow)
    {
        if (MyMainWindow->objectName().isEmpty())
            MyMainWindow->setObjectName("MyMainWindow");
        MyMainWindow->resize(512, 537);
        MyMainWindow->setMinimumSize(QSize(512, 512));
        MyMainWindow->setMaximumSize(QSize(768, 768));
        centralwidget = new QWidget(MyMainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setMinimumSize(QSize(512, 512));
        centralwidget->setMaximumSize(QSize(1920, 1080));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        m_vl_screen = new QVBoxLayout();
        m_vl_screen->setObjectName("m_vl_screen");
        m_lcdResult = new QLCDNumber(centralwidget);
        m_lcdResult->setObjectName("m_lcdResult");
        m_lcdResult->setFocusPolicy(Qt::NoFocus);
        m_lcdResult->setAutoFillBackground(false);
        m_lcdResult->setFrameShape(QFrame::NoFrame);
        m_lcdResult->setSmallDecimalPoint(true);
        m_lcdResult->setDigitCount(10);
        m_lcdResult->setMode(QLCDNumber::Dec);
        m_lcdResult->setSegmentStyle(QLCDNumber::Filled);
        m_lcdResult->setProperty("value", QVariant(1337.000000000000000));
        m_lcdResult->setProperty("intValue", QVariant(1337));

        m_vl_screen->addWidget(m_lcdResult);

        m_hl_info = new QHBoxLayout();
        m_hl_info->setObjectName("m_hl_info");
        m_label = new QLabel(centralwidget);
        m_label->setObjectName("m_label");
        m_label->setMinimumSize(QSize(230, 32));
        m_label->setMaximumSize(QSize(374, 32));
        QFont font;
        font.setPointSize(20);
        m_label->setFont(font);
        m_label->setFrameShadow(QFrame::Plain);

        m_hl_info->addWidget(m_label);

        m_mem_label = new QLabel(centralwidget);
        m_mem_label->setObjectName("m_mem_label");
        m_mem_label->setMinimumSize(QSize(230, 32));
        m_mem_label->setMaximumSize(QSize(374, 32));
        QFont font1;
        font1.setPointSize(12);
        m_mem_label->setFont(font1);

        m_hl_info->addWidget(m_mem_label);


        m_vl_screen->addLayout(m_hl_info);

        m_hl_clear = new QHBoxLayout();
        m_hl_clear->setObjectName("m_hl_clear");
        m_pb_clear = new QPushButton(centralwidget);
        m_pb_clear->setObjectName("m_pb_clear");
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_pb_clear->sizePolicy().hasHeightForWidth());
        m_pb_clear->setSizePolicy(sizePolicy);
        m_pb_clear->setMaximumSize(QSize(512, 512));
        m_pb_clear->setFont(font1);

        m_hl_clear->addWidget(m_pb_clear);

        m_pb_backspace = new QPushButton(centralwidget);
        m_pb_backspace->setObjectName("m_pb_backspace");
        sizePolicy.setHeightForWidth(m_pb_backspace->sizePolicy().hasHeightForWidth());
        m_pb_backspace->setSizePolicy(sizePolicy);
        m_pb_backspace->setMaximumSize(QSize(512, 512));
        m_pb_backspace->setFont(font1);

        m_hl_clear->addWidget(m_pb_backspace);

        m_pb_clear_all = new QPushButton(centralwidget);
        m_pb_clear_all->setObjectName("m_pb_clear_all");
        sizePolicy.setHeightForWidth(m_pb_clear_all->sizePolicy().hasHeightForWidth());
        m_pb_clear_all->setSizePolicy(sizePolicy);
        m_pb_clear_all->setMinimumSize(QSize(12, 12));
        m_pb_clear_all->setMaximumSize(QSize(512, 512));
        m_pb_clear_all->setFont(font1);

        m_hl_clear->addWidget(m_pb_clear_all);


        m_vl_screen->addLayout(m_hl_clear);


        verticalLayout->addLayout(m_vl_screen);

        m_gl_buttons = new QGridLayout();
        m_gl_buttons->setObjectName("m_gl_buttons");
        m_pb_square = new QPushButton(centralwidget);
        m_pb_square->setObjectName("m_pb_square");
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m_pb_square->sizePolicy().hasHeightForWidth());
        m_pb_square->setSizePolicy(sizePolicy1);
        m_pb_square->setMaximumSize(QSize(512, 512));
        m_pb_square->setFont(font1);

        m_gl_buttons->addWidget(m_pb_square, 1, 5, 1, 1);

        m_pb_fract = new QPushButton(centralwidget);
        m_pb_fract->setObjectName("m_pb_fract");
        sizePolicy1.setHeightForWidth(m_pb_fract->sizePolicy().hasHeightForWidth());
        m_pb_fract->setSizePolicy(sizePolicy1);
        m_pb_fract->setMaximumSize(QSize(512, 512));
        m_pb_fract->setFont(font1);

        m_gl_buttons->addWidget(m_pb_fract, 2, 5, 1, 1);

        m_pb_sign = new QPushButton(centralwidget);
        m_pb_sign->setObjectName("m_pb_sign");
        sizePolicy1.setHeightForWidth(m_pb_sign->sizePolicy().hasHeightForWidth());
        m_pb_sign->setSizePolicy(sizePolicy1);
        m_pb_sign->setMaximumSize(QSize(512, 512));
        m_pb_sign->setFont(font1);

        m_gl_buttons->addWidget(m_pb_sign, 3, 3, 1, 1);

        m_pb_7 = new QPushButton(centralwidget);
        m_pb_7->setObjectName("m_pb_7");
        sizePolicy1.setHeightForWidth(m_pb_7->sizePolicy().hasHeightForWidth());
        m_pb_7->setSizePolicy(sizePolicy1);
        m_pb_7->setMaximumSize(QSize(512, 512));
        m_pb_7->setFont(font1);

        m_gl_buttons->addWidget(m_pb_7, 0, 1, 1, 1);

        m_pb_MC = new QPushButton(centralwidget);
        m_pb_MC->setObjectName("m_pb_MC");
        sizePolicy1.setHeightForWidth(m_pb_MC->sizePolicy().hasHeightForWidth());
        m_pb_MC->setSizePolicy(sizePolicy1);
        m_pb_MC->setMaximumSize(QSize(512, 512));
        m_pb_MC->setFont(font1);

        m_gl_buttons->addWidget(m_pb_MC, 0, 0, 1, 1);

        m_pb_mult = new QPushButton(centralwidget);
        m_pb_mult->setObjectName("m_pb_mult");
        sizePolicy1.setHeightForWidth(m_pb_mult->sizePolicy().hasHeightForWidth());
        m_pb_mult->setSizePolicy(sizePolicy1);
        m_pb_mult->setMaximumSize(QSize(512, 512));
        m_pb_mult->setFont(font1);

        m_gl_buttons->addWidget(m_pb_mult, 1, 4, 1, 1);

        m_pb_9 = new QPushButton(centralwidget);
        m_pb_9->setObjectName("m_pb_9");
        sizePolicy1.setHeightForWidth(m_pb_9->sizePolicy().hasHeightForWidth());
        m_pb_9->setSizePolicy(sizePolicy1);
        m_pb_9->setMaximumSize(QSize(512, 512));
        m_pb_9->setFont(font1);

        m_gl_buttons->addWidget(m_pb_9, 0, 3, 1, 1);

        m_pb_3 = new QPushButton(centralwidget);
        m_pb_3->setObjectName("m_pb_3");
        sizePolicy1.setHeightForWidth(m_pb_3->sizePolicy().hasHeightForWidth());
        m_pb_3->setSizePolicy(sizePolicy1);
        m_pb_3->setMaximumSize(QSize(512, 512));
        m_pb_3->setFont(font1);

        m_gl_buttons->addWidget(m_pb_3, 2, 3, 1, 1);

        m_pb_div = new QPushButton(centralwidget);
        m_pb_div->setObjectName("m_pb_div");
        sizePolicy1.setHeightForWidth(m_pb_div->sizePolicy().hasHeightForWidth());
        m_pb_div->setSizePolicy(sizePolicy1);
        m_pb_div->setMaximumSize(QSize(512, 512));
        m_pb_div->setFont(font1);

        m_gl_buttons->addWidget(m_pb_div, 0, 4, 1, 1);

        m_pb_6 = new QPushButton(centralwidget);
        m_pb_6->setObjectName("m_pb_6");
        sizePolicy1.setHeightForWidth(m_pb_6->sizePolicy().hasHeightForWidth());
        m_pb_6->setSizePolicy(sizePolicy1);
        m_pb_6->setMaximumSize(QSize(512, 512));
        m_pb_6->setFont(font1);

        m_gl_buttons->addWidget(m_pb_6, 1, 3, 1, 1);

        m_pb_dot = new QPushButton(centralwidget);
        m_pb_dot->setObjectName("m_pb_dot");
        sizePolicy1.setHeightForWidth(m_pb_dot->sizePolicy().hasHeightForWidth());
        m_pb_dot->setSizePolicy(sizePolicy1);
        m_pb_dot->setMaximumSize(QSize(512, 512));
        m_pb_dot->setFont(font1);

        m_gl_buttons->addWidget(m_pb_dot, 3, 2, 1, 1);

        m_pb_sqr = new QPushButton(centralwidget);
        m_pb_sqr->setObjectName("m_pb_sqr");
        sizePolicy1.setHeightForWidth(m_pb_sqr->sizePolicy().hasHeightForWidth());
        m_pb_sqr->setSizePolicy(sizePolicy1);
        m_pb_sqr->setMaximumSize(QSize(512, 512));
        m_pb_sqr->setFont(font1);

        m_gl_buttons->addWidget(m_pb_sqr, 0, 5, 1, 1);

        m_pb_minus = new QPushButton(centralwidget);
        m_pb_minus->setObjectName("m_pb_minus");
        sizePolicy1.setHeightForWidth(m_pb_minus->sizePolicy().hasHeightForWidth());
        m_pb_minus->setSizePolicy(sizePolicy1);
        m_pb_minus->setMaximumSize(QSize(512, 512));
        m_pb_minus->setFont(font1);

        m_gl_buttons->addWidget(m_pb_minus, 2, 4, 1, 1);

        m_pb_MR = new QPushButton(centralwidget);
        m_pb_MR->setObjectName("m_pb_MR");
        sizePolicy1.setHeightForWidth(m_pb_MR->sizePolicy().hasHeightForWidth());
        m_pb_MR->setSizePolicy(sizePolicy1);
        m_pb_MR->setMaximumSize(QSize(512, 512));
        m_pb_MR->setFont(font1);

        m_gl_buttons->addWidget(m_pb_MR, 1, 0, 1, 1);

        m_pb_4 = new QPushButton(centralwidget);
        m_pb_4->setObjectName("m_pb_4");
        sizePolicy1.setHeightForWidth(m_pb_4->sizePolicy().hasHeightForWidth());
        m_pb_4->setSizePolicy(sizePolicy1);
        m_pb_4->setMaximumSize(QSize(512, 512));
        m_pb_4->setFont(font1);

        m_gl_buttons->addWidget(m_pb_4, 1, 1, 1, 1);

        m_pb_5 = new QPushButton(centralwidget);
        m_pb_5->setObjectName("m_pb_5");
        sizePolicy1.setHeightForWidth(m_pb_5->sizePolicy().hasHeightForWidth());
        m_pb_5->setSizePolicy(sizePolicy1);
        m_pb_5->setMaximumSize(QSize(512, 512));
        m_pb_5->setFont(font1);

        m_gl_buttons->addWidget(m_pb_5, 1, 2, 1, 1);

        m_pb_8 = new QPushButton(centralwidget);
        m_pb_8->setObjectName("m_pb_8");
        sizePolicy1.setHeightForWidth(m_pb_8->sizePolicy().hasHeightForWidth());
        m_pb_8->setSizePolicy(sizePolicy1);
        m_pb_8->setMaximumSize(QSize(512, 512));
        m_pb_8->setFont(font1);

        m_gl_buttons->addWidget(m_pb_8, 0, 2, 1, 1);

        m_pb_eq = new QPushButton(centralwidget);
        m_pb_eq->setObjectName("m_pb_eq");
        sizePolicy1.setHeightForWidth(m_pb_eq->sizePolicy().hasHeightForWidth());
        m_pb_eq->setSizePolicy(sizePolicy1);
        m_pb_eq->setMaximumSize(QSize(512, 512));
        m_pb_eq->setFont(font1);

        m_gl_buttons->addWidget(m_pb_eq, 3, 5, 1, 1);

        m_pb_1 = new QPushButton(centralwidget);
        m_pb_1->setObjectName("m_pb_1");
        sizePolicy1.setHeightForWidth(m_pb_1->sizePolicy().hasHeightForWidth());
        m_pb_1->setSizePolicy(sizePolicy1);
        m_pb_1->setMaximumSize(QSize(512, 512));
        m_pb_1->setFont(font1);

        m_gl_buttons->addWidget(m_pb_1, 2, 1, 1, 1);

        m_pb_MPLUS = new QPushButton(centralwidget);
        m_pb_MPLUS->setObjectName("m_pb_MPLUS");
        sizePolicy1.setHeightForWidth(m_pb_MPLUS->sizePolicy().hasHeightForWidth());
        m_pb_MPLUS->setSizePolicy(sizePolicy1);
        m_pb_MPLUS->setMaximumSize(QSize(512, 512));
        m_pb_MPLUS->setFont(font1);

        m_gl_buttons->addWidget(m_pb_MPLUS, 3, 0, 1, 1);

        m_pb_2 = new QPushButton(centralwidget);
        m_pb_2->setObjectName("m_pb_2");
        sizePolicy1.setHeightForWidth(m_pb_2->sizePolicy().hasHeightForWidth());
        m_pb_2->setSizePolicy(sizePolicy1);
        m_pb_2->setMaximumSize(QSize(512, 512));
        m_pb_2->setFont(font1);

        m_gl_buttons->addWidget(m_pb_2, 2, 2, 1, 1);

        m_pb_0 = new QPushButton(centralwidget);
        m_pb_0->setObjectName("m_pb_0");
        sizePolicy1.setHeightForWidth(m_pb_0->sizePolicy().hasHeightForWidth());
        m_pb_0->setSizePolicy(sizePolicy1);
        m_pb_0->setMaximumSize(QSize(512, 512));
        m_pb_0->setFont(font1);

        m_gl_buttons->addWidget(m_pb_0, 3, 1, 1, 1);

        m_pb_MS = new QPushButton(centralwidget);
        m_pb_MS->setObjectName("m_pb_MS");
        sizePolicy1.setHeightForWidth(m_pb_MS->sizePolicy().hasHeightForWidth());
        m_pb_MS->setSizePolicy(sizePolicy1);
        m_pb_MS->setMaximumSize(QSize(512, 512));
        m_pb_MS->setFont(font1);

        m_gl_buttons->addWidget(m_pb_MS, 2, 0, 1, 1);

        m_pb_add = new QPushButton(centralwidget);
        m_pb_add->setObjectName("m_pb_add");
        sizePolicy1.setHeightForWidth(m_pb_add->sizePolicy().hasHeightForWidth());
        m_pb_add->setSizePolicy(sizePolicy1);
        m_pb_add->setMaximumSize(QSize(512, 512));
        m_pb_add->setFont(font1);

        m_gl_buttons->addWidget(m_pb_add, 3, 4, 1, 1);


        verticalLayout->addLayout(m_gl_buttons);

        MyMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MyMainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 512, 25));
        MyMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MyMainWindow);
        statusbar->setObjectName("statusbar");
        MyMainWindow->setStatusBar(statusbar);

        retranslateUi(MyMainWindow);

        QMetaObject::connectSlotsByName(MyMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MyMainWindow)
    {
        MyMainWindow->setWindowTitle(QCoreApplication::translate("MyMainWindow", "Simple Calculator", nullptr));
        m_label->setText(QString());
        m_mem_label->setText(QString());
        m_pb_clear->setText(QCoreApplication::translate("MyMainWindow", "Clear", nullptr));
        m_pb_backspace->setText(QCoreApplication::translate("MyMainWindow", "Backspace", nullptr));
        m_pb_clear_all->setText(QCoreApplication::translate("MyMainWindow", "Clear All", nullptr));
        m_pb_square->setText(QCoreApplication::translate("MyMainWindow", "x\302\262", nullptr));
        m_pb_fract->setText(QCoreApplication::translate("MyMainWindow", "1/x", nullptr));
        m_pb_sign->setText(QCoreApplication::translate("MyMainWindow", "\302\261", nullptr));
        m_pb_7->setText(QCoreApplication::translate("MyMainWindow", "7", nullptr));
        m_pb_MC->setText(QCoreApplication::translate("MyMainWindow", "MC", nullptr));
        m_pb_mult->setText(QCoreApplication::translate("MyMainWindow", "\303\227", nullptr));
        m_pb_9->setText(QCoreApplication::translate("MyMainWindow", "9", nullptr));
        m_pb_3->setText(QCoreApplication::translate("MyMainWindow", "3", nullptr));
        m_pb_div->setText(QCoreApplication::translate("MyMainWindow", "\303\267", nullptr));
        m_pb_6->setText(QCoreApplication::translate("MyMainWindow", "6", nullptr));
        m_pb_dot->setText(QCoreApplication::translate("MyMainWindow", ".", nullptr));
        m_pb_sqr->setText(QCoreApplication::translate("MyMainWindow", "\342\210\232", nullptr));
        m_pb_minus->setText(QCoreApplication::translate("MyMainWindow", "-", nullptr));
        m_pb_MR->setText(QCoreApplication::translate("MyMainWindow", "MR", nullptr));
        m_pb_4->setText(QCoreApplication::translate("MyMainWindow", "4", nullptr));
        m_pb_5->setText(QCoreApplication::translate("MyMainWindow", "5", nullptr));
        m_pb_8->setText(QCoreApplication::translate("MyMainWindow", "8", nullptr));
        m_pb_eq->setText(QCoreApplication::translate("MyMainWindow", "=", nullptr));
        m_pb_1->setText(QCoreApplication::translate("MyMainWindow", "1", nullptr));
        m_pb_MPLUS->setText(QCoreApplication::translate("MyMainWindow", "M+", nullptr));
        m_pb_2->setText(QCoreApplication::translate("MyMainWindow", "2", nullptr));
        m_pb_0->setText(QCoreApplication::translate("MyMainWindow", "0", nullptr));
        m_pb_MS->setText(QCoreApplication::translate("MyMainWindow", "MS", nullptr));
        m_pb_add->setText(QCoreApplication::translate("MyMainWindow", "+", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyMainWindow: public Ui_MyMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYMAINWINDOW_H
