#ifndef MYMAINWINDOW_H
#define MYMAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QStack>

QT_BEGIN_NAMESPACE
namespace Ui { class MyMainWindow; }
QT_END_NAMESPACE

enum Operation {plus, minus, multiply, divide};


class MyMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MyMainWindow(QWidget *parent = nullptr);
    ~MyMainWindow();

private slots:
    void on_m_pb_clear_clicked();

    void on_m_pb_0_clicked();

    void on_m_pb_1_clicked();

    void on_m_pb_2_clicked();

    void on_m_pb_3_clicked();

    void on_m_pb_4_clicked();

    void on_m_pb_5_clicked();

    void on_m_pb_6_clicked();

    void on_m_pb_7_clicked();

    void on_m_pb_8_clicked();

    void on_m_pb_9_clicked();

    void on_m_pb_backspace_clicked();

    void on_m_pb_clear_all_clicked();

    void on_m_pb_add_clicked();

    void on_m_pb_eq_clicked();

    void on_m_pb_MS_clicked();

    void on_m_pb_MR_clicked();

    void on_m_pb_MC_clicked();

    void on_m_pb_minus_clicked();

    void on_m_pb_mult_clicked();

    void on_m_pb_div_clicked();

    void on_m_pb_square_clicked();

    void on_m_pb_fract_clicked();

    void on_m_pb_sqr_clicked();

    void on_m_pb_MPLUS_clicked();

    void on_m_pb_sign_clicked();

    void on_m_pb_dot_clicked();

private:

    void display_res();
    void mini_display_res();
    void mem_display_res();


private:
    Ui::MyMainWindow *ui;

    QString m_display;

    QString m_mini_display;

    QString m_mem_display;

    double m_answer = 0;

    double m_memory_slot = 0;

    Operation m_op_flag;

};
#endif // MYMAINWINDOW_H
