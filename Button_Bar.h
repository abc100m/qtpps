#ifndef BUTTON_BAR_H
#define BUTTON_BAR_H

#include <QtWidgets/QtWidgets>


class QSignalMapper;
class Button_Bar : public QWidget
{
    Q_OBJECT
public:
    Button_Bar(QWidget *parent = 0);
    ~Button_Bar();

public:
    //新增按钮
    void add(const QPixmap& pixmap, 
             const QString& text, 
             const QString& object_name="",
             const QString& qss=""
            );
    void add(const QString& image_path, 
             const QString& text,
             const QString& object_name="",
             const QString& qss=""
            );

    void add_space(int size=6);
    void add_stretch(int stretch = 0);
    void add_widget(QWidget *w, int stretch = 0, Qt::Alignment alignment = 0);

    //get button
    QToolButton* at(quint32 i);

    //button count
    int count() const;

    //remove all buttons
    void clear();

    //按钮统一的qss, 默认是按钮的背景. 如果创建按钮时传了qss, 则此值已无效
    QString button_qss() const {return button_qss_;}
    void set_button_qss(const QString& str, bool set_to_button=false);

    //QHBoxLayout
    QHBoxLayout* layoutbox() {return hbox_layout_;}

signals:
    void button_clicked(int i);

protected:
    QList<QToolButton*>  button_list_;
    QHBoxLayout         *hbox_layout_;
    QString              button_qss_;
    QSignalMapper       *signal_mapper_;

};

#endif // BUTTON_BAR_H
