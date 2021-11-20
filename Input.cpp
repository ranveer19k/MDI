#include "Input.h"
#include "label.h"
#include <QKeyEvent>

Input::Input(int X, int Y, int W, int H, QString l, QWidget *p)
    : QLineEdit(p)
{
    setGeometry(X, Y, W, H);
    setPlaceholderText(l);
    show();
    installEventFilter(this);
    fld_Val = nullptr;

}

Input::~Input()
{
    qDebug()<<"~Input() \r\n";

}

bool Input::eventFilter(QObject *obj, QEvent *event)
{
   if (event->type() == QEvent::KeyPress) {
       QKeyEvent *keyEvent = static_cast<QKeyEvent*>(event);
       if(keyEvent->key() == Qt::Key_Tab || keyEvent->key()== Qt::Key_Enter || keyEvent->key()== Qt::Key_Return) {
              if (fld_Val) {
                  if( fld_Val(this) !=0) {
                        setFocus();
                        selectAll();   // selecting all the text while on focus
                        return true;
                  }
                  if(keyEvent->key()== Qt::Key_Enter ||keyEvent->key()== Qt::Key_Return)
                    focusNextChild();
              }

        }
   }
   return QLineEdit::eventFilter(obj,event);
}

void Input::setvalidate(validate_input val)
{
    fld_Val = val;

}

