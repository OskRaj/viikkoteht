#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->progressBar1->setValue(0);
    ui->progressBar2->setValue(0);
    ui->OnkoPelaajaValittu->setAlignment(Qt::AlignCenter);
    ui->OnkoPelaajaValittu ->setText("VALITSE PELIAIKA");
}

MainWindow::~MainWindow()
{
    if (timer)
    {
        timer->stop();
        delete timer;
        timer = nullptr;
    }
    delete ui;
}

void MainWindow::on_StartGame_clicked()
{
    if(gameTime == 0)
    {
        ui->OnkoPelaajaValittu ->setText("VALITSE AIKA");
    }
    else if (gameOn == false)
    {
        gameOn = true;
    p1Time = gameTime;
    p2Time = gameTime;

    timer = new QTimer(this);
    connect(timer,&QTimer::timeout, this
            , &MainWindow::updateProgressBar);
    timer->setInterval(1000);
    timer->start();
    }

}

void MainWindow::updateProgressBar()
{
    if(currentPlayer == 1)
    {
        p1Time = p1Time -1;
        ui->progressBar1->setValue(p1Time);
        if(p1Time == 0)
        {
            timer->stop();
            on_StopGame_clicked();
            gameOn = false;
        }
    }
    else if(currentPlayer == 2)
    {
        p2Time = p2Time -1;
        ui->progressBar2->setValue(p2Time);
        if(p2Time == 0)
        {
            timer->stop();
            on_StopGame_clicked();
            gameOn = false;
        }
    }
}


void MainWindow::on_p1End_clicked()
{
    currentPlayer = 2;
}


void MainWindow::on_p2End_clicked()
{
    currentPlayer = 1;
}


void MainWindow::on_lyhytTimer_clicked()
{
    if(gameOn == false)
    {
    gameTime = 120;
    ui->progressBar1->setRange(0, 120);
    ui->progressBar2->setRange(0, 120);
    ui->progressBar1->setValue(120);
    ui->progressBar2->setValue(120);
    ui->OnkoPelaajaValittu ->setText("PELIAIKA ON 120 SEC");
    }
}


void MainWindow::on_pitkaTimer_clicked()
{
    if(gameOn == false)
    {
    gameTime = 300;
    ui->progressBar1->setRange(0, 300);
    ui->progressBar2->setRange(0, 300);
    ui->progressBar1->setValue(300);
    ui->progressBar2->setValue(300);
    ui->OnkoPelaajaValittu ->setText("PELIAIKA ON 5 MIN");
    }
}


void MainWindow::on_StopGame_clicked()
{
    timer->stop();
    gameTime = 0;
    currentPlayer = 1;
    ui->progressBar1->setValue(0);
    ui->progressBar2->setValue(0);
    ui->OnkoPelaajaValittu ->setText("VALITSE PELIAIKA");
    gameOn = false;
}

