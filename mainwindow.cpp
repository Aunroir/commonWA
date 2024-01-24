#include "mainwindow.h"
#include "ui_mainwindow.h"

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
    float A = ui->lineEdit->text().toFloat();
    float B = ui->lineEdit_2->text().toFloat();

    if (B != 0) {
        ui->label->setNum(A/B);
    }
    else {
        ui->label->setText("Are you debil?");
    }
}

