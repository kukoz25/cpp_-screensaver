#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <iostream>
#include "okno.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
hide();
drugieokno= new class drugieokno(this);
drugieokno->show();
}


void MainWindow::on_pushButton_2_clicked()
{
    hide();
    srand(time(NULL));
    okno o;
    o.odpal();
}

