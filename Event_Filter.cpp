#include "Event_Filter.h"
#include <QtGlobal>
#include <QSlider>
#include <QEvent>
#include <QMouseEvent>

QSlider_Event_Filter::QSlider_Event_Filter(QObject *parent)
    : QObject(parent)
{

}

QSlider_Event_Filter::~QSlider_Event_Filter()
{

}


//������ԣ�http://www.qtcn.org/bbs/simple/?t9688.html
bool QSlider_Event_Filter::eventFilter( QObject* obj, QEvent* event )
{
    if (event->type() == QEvent::MouseButtonPress &&
        ((QMouseEvent*)event)->button() == Qt::LeftButton
       )
    {
        QSlider *slider = (QSlider*)obj;
        QMouseEvent *e  = (QMouseEvent *)event;

        double percent = 0;
        if (slider->orientation() == Qt::Horizontal)
        {
            percent = ((double)e->x())/slider->width();
        }else{
            percent = ((double)e->y())/slider->height();
        }

        int max = slider->maximum();
        int min = slider->minimum();
        int pos = (max - min + 1) * percent + min;

        //�ڻ�����������ܽ�ʱ(С��pageStep)��ʹ��QSliderĬ�ϵĵ������
        //����Ƚϴ�ʱ(����pageStep)���Լ��ֶ����������˺ܽ�ʱ����Ҷ�������
        if ( qAbs(pos - slider->value() ) > slider->pageStep() )
        {
            slider->setValue(pos);
            return true;
        }
    }

    return false;
}

