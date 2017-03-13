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
    //�Ƿ�����ͨ�����ı䴰�ڴ�С
    bool get_resizable() const {return resizable_;}
    void set_resizable(bool b);

    //overwrite
    bool isMaximized() const;
    QString windowTitle() const;
    void setWindowTitle(const QString &);

    Title_Bar* title_bar(){return title_bar_;}

    //������ͼƬ��Rect
    virtual QRect background_rect(){return rect();}

protected:
    void resizeEvent(QResizeEvent *);
    void paintEvent(QPaintEvent *);

protected:
    QVBoxLayout  *layout_;
    Title_Bar    *title_bar_;

private:
    bool          resizable_;    //�Ƿ�����ı䴰�ڵĴ�С
    NcFramelessHelper *resize_helper;
};

#endif // BASE_DIALOG_H
