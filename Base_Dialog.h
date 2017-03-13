#ifndef BASE_DIALOG_H
#define BASE_DIALOG_H

#include <QDialog>
#include <QtWidgets/QtWidgets>

class Title_Bar;
class NcFramelessHelper;


class Base_Dialog : public QDialog
{
    Q_OBJECT
public:
    Base_Dialog(QWidget *parent=NULL);
    ~Base_Dialog();

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
    virtual QRect background_rect(){return rect();}

protected:
    void resizeEvent(QResizeEvent *);
    void paintEvent(QPaintEvent *);

protected:
    QVBoxLayout  *layout_;
    Title_Bar    *title_bar_;

private:
    bool          resizable_;    //是否允许改变窗口的大小
    NcFramelessHelper *resize_helper;
};

#endif // BASE_DIALOG_H
