#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setActive();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_add_clicked()
{
    if(tila == 3)
    {
    QString str1 = ui->num1->text();
    int num1 = str1.toInt();
    QString str2 = ui->num2->text();
    int num2 = str2.toInt();
    int result = num1 + num2;
    QString resStr = QString::number(result);
    ui->result->setText(resStr);
    tila = 1;
       setActive();
    }
}


void MainWindow::on_sub_clicked()
{
    if(tila == 3)
    {
    QString str1 = ui->num1->text();
    int num1 = str1.toInt();
    QString str2 = ui->num2->text();
    int num2 = str2.toInt();
    int result = num1 - num2;
    QString resStr = QString::number(result);
    ui->result->setText(resStr);
    tila = 1;
       setActive();
    }
}


void MainWindow::on_mul_clicked()
{
    if(tila == 3)
    {
    QString str1 = ui->num1->text();
    int num1 = str1.toInt();
    QString str2 = ui->num2->text();
    int num2 = str2.toInt();
    int result = num1 * num2;
    QString resStr = QString::number(result);
    ui->result->setText(resStr);
    tila = 1;
       setActive();
    }
}


void MainWindow::on_div_clicked()
{
    if(tila == 3)
    {
    QString str1 = ui->num1->text();
    float num1 = str1.toFloat();
    QString str2 = ui->num2->text();
    float num2 = str2.toFloat();
    float result = num1 / num2;
    QString resStr = QString::number(result);
    ui->result->setText(resStr);
    tila = 1;
       setActive();
    }
}


void MainWindow::on_clear_clicked()
{
    int num1 = 0;
    QString num1Str = QString::number(num1);
    ui->num1->setText(num1Str);

    int num2 = 0;
    QString num2Str = QString::number(num2);
    ui->num2->setText(num2Str);

    int res = 0;
    QString resStr = QString::number(res);
    ui->result->setText(num2Str);
    tila = 1;
       setActive();
}


void MainWindow::on_N1_clicked()
{
    QString str = ui->N1->text();
    int n = str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_N2_clicked()
{
    QString str = ui->N2->text();
    int n = str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_N3_clicked()
{
    QString str = ui->N3->text();
    int n = str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_N4_clicked()
{
    QString str = ui->N4->text();
    int n = str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_N5_clicked()
{
    QString str = ui->N5->text();
    int n = str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_N6_clicked()
{
    QString str = ui->N6->text();
    int n = str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_N7_clicked()
{
    QString str = ui->N7->text();
    int n = str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_N8_clicked()
{
    QString str = ui->N8->text();
    int n = str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_N9_clicked()
{
    QString str = ui->N9->text();
    int n = str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_N0_clicked()
{
    QString str = ui->N0->text();
    int n = str.toInt();
    numberClickHandler(n);
}

void MainWindow::numberClickHandler(int n)
{
    QString str = QString::number(n);

    if (tila == 1)
    {
        ui->num1->setText(ui->num1->text() + str);
    }
    else if (tila == 2)
    {
        ui->num2->setText(ui->num2->text() + str);
    }
    else
    {
        ui->result->setText(ui->result->text() + str);
    }
}

void MainWindow::setActive()
{
    if(tila == 1)
    {
        ui->num1->setEnabled(true);
        ui->num2->setEnabled(false);
        ui->result->setEnabled(false);
    }
    else if (tila == 2)
    {
        ui->num1->setEnabled(false);
        ui->num2->setEnabled(true);
        ui->result->setEnabled(false);
    }
    else if (tila ==3)
    {
        ui->num1->setEnabled(false);
        ui->num2->setEnabled(false);
        ui->result->setEnabled(true);
    }
}


void MainWindow::on_enter_clicked()
{
    if (tila == 1)
    {
        tila = 2;
    }
    else if (tila == 2)
    {
        tila = 3;
    }
    else
    {
        tila = 1;
    }
    setActive();
}

