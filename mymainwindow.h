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

private:

    void display_res();

private:
    Ui::MyMainWindow *ui;

    QString m_display;

    QStack<double> m_stack;

    double m_answer = 0;

    double m_current_num = 0;

    Operation m_op_flag;

};
#endif // MYMAINWINDOW_H
