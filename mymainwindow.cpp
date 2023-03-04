#include "mymainwindow.h"
#include "ui_mymainwindow.h"
#include <QString>
#include <QMessageBox>

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

void MyMainWindow::display_res()
{
    ui->m_lcdResult->display(m_display);
}

void MyMainWindow::mini_display_res()
{
    ui->m_label->setText(m_mini_display);
}

void MyMainWindow::mem_display_res()
{
    ui->m_mem_label->setText(m_mem_display);
}

void MyMainWindow::on_m_pb_0_clicked()
{

    if(m_display == "")
        m_display = '0';
    else
    m_display += '0';
    display_res();
}

void MyMainWindow::on_m_pb_1_clicked()
{
    if(m_display == "")
        m_display = '1';
    else
    m_display += '1';
    display_res();
}


void MyMainWindow::on_m_pb_2_clicked()
{
    if(m_display == "")
        m_display = '2';
    else
    m_display += '2';
    display_res();
}


void MyMainWindow::on_m_pb_3_clicked()
{
    if(m_display == "")
        m_display = '3';
    else
    m_display += '3';
    display_res();
}


void MyMainWindow::on_m_pb_4_clicked()
{
    if(m_display == "")
        m_display = '4';
    else
    m_display += '4';
    display_res();
}

void MyMainWindow::on_m_pb_5_clicked()
{
    if(m_display == "")
        m_display = '5';
    else
    m_display += '5';
    display_res();
}

void MyMainWindow::on_m_pb_6_clicked()
{
    if(m_display == "")
        m_display = '6';
    else
    m_display += '6';
    display_res();
}

void MyMainWindow::on_m_pb_7_clicked()
{
    if(m_display == "")
        m_display = '7';
    else
    m_display += '7';
    display_res();
}

void MyMainWindow::on_m_pb_8_clicked()
{
    if(m_display == "")
        m_display = '8';
    else
    m_display += '8';
    display_res();
}

void MyMainWindow::on_m_pb_9_clicked()
{
    if(m_display == "")
        m_display = '9';
    else
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
    m_display = "";
    m_answer = 0;
    display_res();
}

void MyMainWindow::on_m_pb_add_clicked()
{
    m_answer = m_display.toDouble();
    m_display = "";
    m_mini_display = "+";
    m_op_flag = plus;
    mini_display_res();
}

void MyMainWindow::on_m_pb_minus_clicked()
{
    m_answer = m_display.toDouble();
    m_display = "";
    m_mini_display = "-";
    m_op_flag = minus;
    mini_display_res();
}

void MyMainWindow::on_m_pb_mult_clicked()
{
    m_answer = m_display.toDouble();
    m_display = "";
    m_mini_display = "×";
    m_op_flag = multiply;
    mini_display_res();
}

void MyMainWindow::on_m_pb_div_clicked()
{
    m_answer = m_display.toDouble();
    m_display = "";
    m_mini_display = "÷";
    m_op_flag = divide;
    mini_display_res();
}

void MyMainWindow::on_m_pb_square_clicked()
{
    m_answer = m_display.toDouble();
    m_answer = m_answer * m_answer;
    m_display = m_display.number(m_answer);
    display_res();
}

void MyMainWindow::on_m_pb_fract_clicked()
{
    m_answer = m_display.toDouble();
    m_answer = 1 / m_answer;
    m_display = m_display.number(m_answer);
    display_res();
}

void MyMainWindow::on_m_pb_sqr_clicked()
{
    m_answer = m_display.toDouble();
    m_answer = std::sqrt(m_answer);
    m_display = m_display.number(m_answer);
    display_res();
}

void MyMainWindow::on_m_pb_sign_clicked()
{
    m_answer = m_display.toDouble() * -1;
    m_display = m_display.number(m_answer);
    display_res();
}

void MyMainWindow::on_m_pb_dot_clicked()
{
    if(m_display.contains('.') == 0)
        m_display +=".";
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
        else
        {
            QMessageBox msg_divide_by_zero;
            msg_divide_by_zero.critical(0,"Error","Dividing by 0 is prohibited");
            msg_divide_by_zero.setFixedSize(500,200);

            m_answer = 0;
            m_display = "";
            display_res();
            m_mini_display = "";
            mini_display_res();
            return;
        }
        break;
    }
    }

    m_display = m_display.number(m_answer);
    display_res();
    m_mini_display = "";
    mini_display_res();
}

void MyMainWindow::on_m_pb_MS_clicked()
{
    m_memory_slot = m_answer;
    m_mem_display = "Memory: " + m_mem_display.number(m_memory_slot);
    mem_display_res();
}

void MyMainWindow::on_m_pb_MR_clicked()
{
    m_display = m_display.number(m_memory_slot);
    display_res();
}

void MyMainWindow::on_m_pb_MC_clicked()
{
    m_memory_slot = 0;
    m_mem_display = "";
    mem_display_res();

}

void MyMainWindow::on_m_pb_MPLUS_clicked()
{
    m_memory_slot+= m_display.toDouble();
    m_mem_display = "Memory: " + m_mem_display.number(m_memory_slot);
    mem_display_res();
}

