#ifndef PPSTREAM_MOVIES_H
#define PPSTREAM_MOVIES_H

#include "QSS_Widget.h"
#include <QHBoxLayout>

class QStackedWidget;

class ppstream_movies : public QSS_Widget
{
    Q_OBJECT
public:
    ppstream_movies(QWidget *parent);
    ~ppstream_movies();

private:
    void create_left_button();
    void create_stack_widget();

private slots:
    void home_button_clicked();
    void history_button_clicked();
    void favorite_button_clicked();
    void download_button_clicked();
    void setting_button_clicked();

private:
    QHBoxLayout     *layout_;
    QStackedWidget  *stack_widget_; 
};

#endif // PPSTREAM_MOVIES_H
