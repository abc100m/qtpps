#ifndef _BASE_WIDGET_H_
#define _BASE_WIDGET_H_

#include <QtWidgets/QtWidgets>
#include <QWidget>
#include <QDialog>

class Title_Bar;
class NcFramelessHelper;
class Skin;

//T can be QWidget or QDialog, 
//template class can not have Q_OBJECT, so this class can not have signal/slot
template<class T>
class Base_Widget: public T
{
public:
    Base_Widget(QWidget* parent=NULL, Skin* skin=NULL);
    ~Base_Widget();

public:
    //是否允许通过鼠标改变窗口大小
    bool get_resizable() const {return resizable_;}
    void set_resizable(bool b);

    //overwrite
    bool isMaximized() const;
    QString windowTitle() const;
    void setWindowTitle(const QString &);

    Title_Bar* title_bar(){return title_bar_;}

    //画背景图片的Rect
    virtual QRect background_rect() const{return rect();}
    virtual void load_skin(Skin* skin=NULL);

private:
    void load_skin_internal();

protected:
    void resizeEvent(QResizeEvent *);
    void paintEvent(QPaintEvent *);

protected:
    QVBoxLayout  *frame_layout_;    //include titile_bar and borders;
    QVBoxLayout  *layout_;          //without title_bar and border;
    Title_Bar    *title_bar_;
    Skin         *skin_;

private:
    bool               resize_temp_disabled; //当窗口最大化后禁止拖动改变大小
    bool               resizable_;    //是否允许改变窗口的大小
    NcFramelessHelper *resize_helper;
};

#include "Base_Widget.inl"


#endif

