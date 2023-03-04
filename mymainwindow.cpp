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
    //m_current_num = 0;
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
    //m_current_num = m_current_num * 10 + 1;
    display_res();
}


void MyMainWindow::on_m_pb_2_clicked()
{
    m_display += '2';
    //m_current_num = m_current_num * 10 + 2;
    display_res();
}


void MyMainWindow::on_m_pb_3_clicked()
{
    m_display += '3';
    //m_current_num = m_current_num * 10 + 3;
    display_res();
}


void MyMainWindow::on_m_pb_4_clicked()
{
    m_display += '4';
    //m_current_num = m_current_num * 10 + 4;
    display_res();
}

void MyMainWindow::on_m_pb_5_clicked()
{
    m_display += '5';
    //m_current_num = m_current_num * 10 + 5;
    display_res();
}

void MyMainWindow::on_m_pb_6_clicked()
{
    m_display += '6';
    //m_current_num = m_current_num * 10 + 6;
    display_res();
}

void MyMainWindow::on_m_pb_7_clicked()
{
    m_display += '7';
    //m_current_num = m_current_num * 10 + 7;
    display_res();
}

void MyMainWindow::on_m_pb_8_clicked()
{
    m_display += '8';
    //m_current_num = m_current_num * 10 + 8;
    display_res();
}

void MyMainWindow::on_m_pb_9_clicked()
{
    m_display += '9';
    //m_current_num = m_current_num * 10 + 9;
    display_res();
}

void MyMainWindow::on_m_pb_backspace_clicked()
{
    m_display.chop(1);
    //m_current_num = m_current_num/10;
    display_res();
}

void MyMainWindow::on_m_pb_clear_all_clicked()
{
    m_stack.clear();
    m_display = '0';
    //m_current_num = 0;
    m_answer = 0;
    display_res();
}


void MyMainWindow::on_m_pb_add_clicked()
{
    if(m_answer == 0)
    {
        m_answer = m_display.toDouble();
        m_op_flag = plus;
        m_display = "";
    }
    else
    {
        switch(m_op_flag)
        {
        case plus:
        {
            m_answer = m_answer + m_display.toDouble();
            break;
        }
        case minus:
        {
            m_answer = m_answer - m_display.toDouble();
            break;
        }
        case multiply:
        {
            m_answer = m_answer * m_display.toDouble();
            break;
        }
        case divide:
        {
            if(m_display != "0")
                m_answer = m_answer / m_display.toDouble();
            //обработка деления на ноль
            break;
        }
        }

        m_display = m_display.number(m_answer);
    }
    display_res();
}


void MyMainWindow::on_m_pb_eq_clicked()
{
    switch(m_op_flag)
    {
    case plus:
    {
        m_answer = m_answer + m_display.toDouble();
        break;
    }
    case minus:
    {
        m_answer = m_answer - m_display.toDouble();
        break;
    }
    case multiply:
    {
        m_answer = m_answer * m_display.toDouble();
        break;
    }
    case divide:
    {
        if(m_display != "0")
            m_answer = m_answer / m_display.toDouble();
        //обработка деления на ноль
        break;
    }
    }

    m_display = m_display.number(m_answer);

    display_res();
}


