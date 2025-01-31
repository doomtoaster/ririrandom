#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->addButton, &QPushButton::released, this, &MainWindow::addItem);
    connect(ui->ranButton, &QPushButton::released, this, &MainWindow::displayRandomItem);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::addItem(){
    QListWidgetItem* item = new QListWidgetItem("pimml");
    item->setFlags(item->flags() | Qt::ItemIsEditable);
    ui->radnomListWidget->addItem(item);
}

void MainWindow::displayRandomItem(){
    randomListWidget* list = ui->radnomListWidget;
    QListWidgetItem* item = list->item(rand()%list->count());
    QTextBrowser* browser = ui->textBrowser;
    browser->setText(item->text());
    delete item;

}
