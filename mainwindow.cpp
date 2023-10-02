#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->rb_1->setText("radio botton ONE");
    ui->rb_2->setText("radio botton TWO");
    for(int i = 1; i < 10; ++i){
        ui->cb_Box->addItem("Element '" + QString::number(i) + "'");
    }
    ui->pb_Batton->setText("Press me!!!");
    ui->pb_Batton->setCheckable(true);
    ui->prBar_Bar->setMinimum(0);
    ui->prBar_Bar->setMaximum(10);
    ui->prBar_Bar->setValue(0);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pb_Batton_clicked()
{
    int new_value = ui->prBar_Bar->value() + (ui->prBar_Bar->maximum() - ui->prBar_Bar->minimum())*0.1;
    if (new_value > ui->prBar_Bar->maximum()){
        new_value = 0;
    }
    ui->prBar_Bar->setValue(new_value);
}

