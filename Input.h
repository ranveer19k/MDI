#ifndef INPUT_H
#define INPUT_H

#include <QLineEdit>
#include <QWidget>
#include <QEvent>
#include <QDebug>
#
class Input;
typedef  int (*validate_input)(Input*) ;

class Input : public QLineEdit
{
    Q_OBJECT

public:
    validate_input fld_Val;
    Input(int X, int Y, int W, int H, QString l, QWidget *p);
    ~Input();
    void setvalidate(validate_input);
    bool eventFilter(QObject *obj, QEvent *event);

};

#endif // INPUT_H
