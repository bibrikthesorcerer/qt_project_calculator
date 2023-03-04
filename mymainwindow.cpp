#include "mymainwindow.h"
#include "ui_mymainwindow.h"
#include <QString>

MyMainWindow::MyMainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MyMainWindow)
{
    ui->setupUi(this);
}

MyMainWindow::~MyMainWindow()
{
    delete ui;
}


void MyMainWindow::on_m_pb_clear_clicked()
{
    m_display.clear();
    display_res();
}

void MyMainWindow::on_m_pb_0_clicked()
{
    m_display += '0';
    display_res();
}

void MyMainWindow::display_res()
{
    ui->m_lcdResult->display(m_display);
}

void MyMainWindow::on_m_pb_1_clicked()
{
    m_display += '1';
    display_res();
}


void MyMainWindow::on_m_pb_2_clicked()
{
    m_display += '2';
    display_res();
}


void MyMainWindow::on_m_pb_3_clicked()
{
    m_display += '3';
    display_res();
}


void MyMainWindow::on_m_pb_4_clicked()
{
    m_display += '4';
    display_res();
}

void MyMainWindow::on_m_pb_5_clicked()
{
    m_display += '5';
    display_res();
}

void MyMainWindow::on_m_pb_6_clicked()
{
    m_display += '6';
    display_res();
}

void MyMainWindow::on_m_pb_7_clicked()
{
    m_display += '7';
    display_res();
}

void MyMainWindow::on_m_pb_8_clicked()
{
    m_display += '8';
    display_res();
}

void MyMainWindow::on_m_pb_9_clicked()
{
    m_display += '9';
    display_res();
}

void MyMainWindow::on_m_pb_backspace_clicked()
{
    m_display.chop(1);
    display_res();
}

void MyMainWindow::on_m_pb_clear_all_clicked()
{
    m_stack.clear();
    m_display = '0';
    display_res();
}

