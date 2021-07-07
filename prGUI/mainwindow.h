#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<../prLib/PersonalInfo.h>
#include<../prLib/Geographic.h>
#include<../prLib/Financial.h>
#include<../prLib/Organization.h>
#include<../prGen/generator.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void on_pers_button_clicked();

    void on_geo_button_clicked();

    void on_org_button_clicked();

    void on_fin_button_clicked();

    void on_generate_button_clicked();

private:
    Ui::MainWindow *ui;
    static int gen;
};
#endif // MAINWINDOW_H
