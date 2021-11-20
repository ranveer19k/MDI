#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtWidgets>

MainWindow::MainWindow()
    :ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    mdiArea= new QMdiArea();
    setCentralWidget(mdiArea);

    mdiArea->setParent(this);
    mdiArea->showMaximized();

    mdiArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
    mdiArea->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);

}

MainWindow::~MainWindow()
{
    delete ui;
    qDebug()<<"~MainWindow()\r\n";
}


int MainWindow::validateAcc(Input *fld)
{
    if (fld->text().isEmpty()) {
        qDebug()<<"A/C Should not be blank \r\n";
         return 1;
    }
    else{
        qDebug()<<"In A/c validation \r\n";
        return 0;
    }
}

void MainWindow::on_actionnew_triggered()
{
   subWindow = new QMdiSubWindow(this);
   subWindow->setParent(mdiArea);
   subWindow->setMinimumHeight(400);
   subWindow->setMinimumWidth(500);
   subWindow->setMaximumHeight(800);
   subWindow->setMaximumWidth(950);
   subWindow->showNormal();
   subWindow->maximizedButtonsWidget();



   input = new Input(100, 40, 100, 25, "Account No: ", subWindow);
   input->setvalidate(MainWindow::validateAcc);

   label = new Label(10,40,100,25,"Account NO:",subWindow);

   label = new Label(10,80,120,25,"Account Name:",subWindow);

   input = new Input(120, 80, 150, 25, "Acc holder name: ", subWindow);
   input->setvalidate(MainWindow::validateAcc);

   button= new pushbutton(10,350,70,25,"submit",subWindow);

}
