#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    nivel = new juego;
    nivel->setSceneRect(0, 0, ui->graphicsView->width() - 2, ui->graphicsView->height() - 2);
    ui->graphicsView->setScene(nivel);
    connect(ui->inicio, SIGNAL(), this, SLOT(prueba()));
}

MainWindow::~MainWindow()
{
    delete ui;
    delete nivel;
}
