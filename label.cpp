#include "label.h"


Label::Label(int X, int Y, int W, int H, QString l, QWidget *p)
    :QLabel(p)
{

    setGeometry(X, Y, W, H);
    setText(l);
    show();
}

Label::~Label()
{
    qDebug()<<"~Label() \r\n";
}
