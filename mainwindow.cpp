#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "iostream"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_checkBox_clicked(bool checked)
{
    ui->mOpenGLViewport->wireframe = checked;
    update();
}

void MainWindow::on_radius_valueChanged(int arg1)
{
    ui->mOpenGLViewport->radius = arg1;
    update();
}

void MainWindow::on_action_Exit_triggered(bool checked)
{
    this->close();
}
