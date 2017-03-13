#ifndef _MOVE_FRAMELESS_WINDOW_H_
#define _MOVE_FRAMELESS_WINDOW_H_

#include <QtWidgets/QWidget>
#include <QtGui/QtEvents>

template<typename T>
class MoveFramelessWindow: public T
{
public:
    MoveFramelessWindow(QWidget * parent = 0, Qt::WindowFlags f = 0)
        :T(parent, f)
    {}

//protected:
//    void mouseMoveEvent(QMouseEvent *event)
//    {
//        if (event->buttons() & Qt::LeftButton) {
//            move(event->globalPos() - dragon_posision_);
//            event->accept();
//        }
//    }
//
//    void mousePressEvent(QMouseEvent *event)
//    {
//        if (event->button() == Qt::LeftButton) {
//            dragon_posision_ = event->globalPos() - frameGeometry().topLeft();
//            event->accept();
//        }
//    }
//
//protected:
//    QPoint dragon_posision_;


protected:
    void mousePressEvent(QMouseEvent* event)
    {
        offset = event->pos();
        QWidget::mousePressEvent(event);
    }

    void mouseMoveEvent(QMouseEvent* event)
    {
        if(event->buttons() & Qt::LeftButton)
            if(resizeMode) {
                QPoint p = mapToGlobal(event->pos()) - geometry().topLeft();
                resize(p.x(), p.y());
            } else
                move(mapToParent(event->pos() - offset));
        else {
            QPoint diff = geometry().bottomRight() - mapToGlobal(event->pos());
            if(diff.x() <= 6 && diff.y() <= 6) {
                if(!resizeMode) {
                    setCursor(Qt::SizeFDiagCursor);
                    resizeMode = true;
                }
            } else {
                if(resizeMode) {
                    setCursor(Qt::SizeAllCursor);
                    resizeMode = false;
                }
            }
        }
    }

    void mouseReleaseEvent(QMouseEvent* event)
    {
        offset = QPoint();
        QWidget::mouseReleaseEvent(event);
    }

private:
    QPoint offset;
    bool resizeMode;

};

#endif


