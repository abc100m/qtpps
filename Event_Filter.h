#ifndef EVENT_FILTER_H
#define EVENT_FILTER_H

#include <QObject>

//�������QSlider������������λ��
class QSlider_Event_Filter : public QObject
{
public:
    QSlider_Event_Filter(QObject *parent=0);
    ~QSlider_Event_Filter();

protected:
    virtual bool eventFilter( QObject* obj, QEvent* event );
};

#endif // EVENT_FILTER_H
