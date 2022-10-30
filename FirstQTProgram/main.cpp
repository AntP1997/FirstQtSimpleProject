#include "mainwindow.h"
#include <QMessageBox>
#include <QApplication>
#include <QWidget>
#include <QLabel>
#include <QPalette>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    MainWindow w;


    QMessageBox mes;
    mes.setWindowTitle("Hell boy");
    mes.setText("hello World");
    //mes.critical(0,"What up","Hello friend");
    mes.setFixedSize(700,700);

    mes.setStyleSheet("background-color:qconicalgradient(cx:0.5, cy:0.5, angle:0, stop:0 rgba(255, 255, 255, 255), stop:0.373979 rgba(255, 255, 255, 255), stop:0.373991 rgba(33, 30, 255, 255), stop:0.624018 rgba(33, 30, 255, 255), stop:0.624043 rgba(255, 0, 0, 255), stop:1 rgba(255, 0, 0, 255));");
    mes.exec();
    w.setWindowTitle("Hello batch");
    w.setFixedSize(800,550);
   // w.setStyleSheet("background-color:green;");
    w.show();

    return a.exec();
}
