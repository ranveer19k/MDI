#ifndef MDICHILD_H
#define MDICHILD_H

#include <QCloseEvent>
#include <QTextEdit>

class MdiChild:public QTextEdit
{
public:
    MdiChild();
    ~MdiChild();
protected:
    void closeEvent(QCloseEvent *event) override;

};

#endif // MDICHILD_H
