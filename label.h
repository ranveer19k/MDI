#ifndef LABEL_H
#define LABEL_H

#include <QLabel>
#include <QObject>
#include <QDebug>
class Label;


class Label : public QLabel
{
    Q_OBJECT
public:
    Label(int X, int Y, int W, int H, QString l, QWidget *p);
    ~Label();

};

#endif // LABEL_H
