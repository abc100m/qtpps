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
    //�Ƿ�����ͨ�����ı䴰�ڴ�С
    bool get_resizable() const {return resizable_;}
    void set_resizable(bool b);

    //overwrite
    bool isMaximized() const;
    QString windowTitle() const;
    void setWindowTitle(const QString &);

    Title_Bar* title_bar(){return title_bar_;}

    //������ͼƬ��Rect
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
    bool               resize_temp_disabled; //��������󻯺��ֹ�϶��ı��С
    bool               resizable_;    //�Ƿ�����ı䴰�ڵĴ�С
    NcFramelessHelper *resize_helper;
};

#include "Base_Widget.inl"


#endif

