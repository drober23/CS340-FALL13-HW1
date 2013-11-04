#include <iostream>
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

// Button in original code
void MainWindow::on_pushButton_clicked()
{
    std::cout << "pushbutton " << std::endl;

}


void MainWindow::on_pushButton_2_clicked()
{
    std::cout << "CLICKED " << std::endl;

}
/*
//Second button added
*/
void MainWindow::on_pushButton_3_clicked()
{
    std::cout << "nothing that exciting " << std::endl;

}
/*
*Had to add a Joke! ;)
*/
void MainWindow::on_pushButton_4_clicked()
{
    std::cout << "to get to the UTTER side " << std::endl;

}
