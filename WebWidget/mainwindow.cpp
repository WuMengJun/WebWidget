#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->axwWeb->setFocusPolicy(Qt::StrongFocus);
    ui->axwWeb->setProperty("DisplayAlerts", false);
    ui->axwWeb->setProperty("DisplayScrollBars", true);
    ui->axwWeb->dynamicCall("Navigate(const QString&)", "http://www.sztaigeda.com/?c=msg&id=181");
}

MainWindow::~MainWindow()
{
    delete ui;
}
