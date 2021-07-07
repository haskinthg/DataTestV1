#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QWidget>
#include<QLabel>
#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<ctime>
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

int MainWindow::gen = -1; // переменная выбора данных 0 -pers , 1- geo ,2 - org, 3 -fin
void MainWindow::on_pers_button_clicked()
{
 ui->pole_label->setText("фамилия,имя,отчество");
 ui->generate_button->setEnabled(true);
 gen = 0;
}

void MainWindow::on_geo_button_clicked()
{
    ui->pole_label->setText("страна,город,улица,номер дома");
     ui->generate_button->setEnabled(true);
    gen = 1;
}

void MainWindow::on_org_button_clicked()
{
ui->pole_label->setText("название,местоположение,основатель");
 ui->generate_button->setEnabled(true);
gen = 3;
}

void MainWindow::on_fin_button_clicked()
{
ui->pole_label->setText("прибыль,рентабельность,выручка");
 ui->generate_button->setEnabled(true);
gen = 2;
}

void MainWindow::on_generate_button_clicked()
{
    srand(time(NULL));
    std::string filename = ui->selectFile->text().toStdString();
    int count = std::atoi(ui->selectCount->text().toStdString().c_str()); //QString -> std::string -> const char* -> int
    for(int i=0;i<count;i++)
    {
        Generator gener;
        gener.generate(filename,gen);
    }

}
