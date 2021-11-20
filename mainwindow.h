#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMdiArea>
#include <QMainWindow>
#include <QMenu>
#include <QLabel>
#include <QLineEdit>
#include "Input.h"
#include "label.h"
#include "pushbutton.h"

class QMdiArea;
class QMdiSubWindow;
class MdiChild;
class QLineEdit;
class QLabel;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow();
   ~MainWindow();

private slots:


    void on_actionnew_triggered();

private:
    Ui::MainWindow *ui;
    static int validateAcc(Input *fld);

    QMdiArea *mdiArea;
    QMdiSubWindow *subWindow;

//----- inherited class object declaration;

    Input *input;
    Label *label;
    pushbutton *button;



};
#endif // MAINWINDOW_H
