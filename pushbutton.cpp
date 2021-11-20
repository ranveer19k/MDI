#include "pushbutton.h"

pushbutton:: pushbutton(int X, int Y, int W, int H, QString l, QWidget *p)
    :QPushButton(p)
{
    setGeometry(X,Y,W,H);
    setText(l);
    show();

}

pushbutton::~pushbutton()
{
    qDebug()<<"~pushbutton()\r\n";

}
