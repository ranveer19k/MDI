#ifndef PUSHBUTTON_H
#define PUSHBUTTON_H

#include <QPushButton>
#include <QObject>
#include <QDebug>

class pushbutton : public QPushButton
{
    Q_OBJECT

public:
    pushbutton(int X, int Y, int W, int H, QString l, QWidget *p);

    ~pushbutton();

};

#endif // PUSHBUTTON_H
