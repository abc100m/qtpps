#ifndef QSS_WIDGET_H
#define QSS_WIDGET_H

#include <QWidget>

//support QSS QWidget
class QSS_Widget: public QWidget
{
    Q_OBJECT
public:
    explicit QSS_Widget(QWidget* parent = 0, Qt::WindowFlags f = 0);

protected:
    void paintEvent(QPaintEvent *);
};

#endif // QSS_WIDGET_H
