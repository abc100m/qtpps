#ifndef BUTTON_LINE_EDIT_H
#define BUTTON_LINE_EDIT_H

#include <QLineEdit>

class State_Button;

//QLineEdit with a button appear at right or left
class Button_LineEdit : public QLineEdit
{
    Q_OBJECT

public:
    enum Button_Position{
        BUTTON_LEFT, BUTTON_RIGHT
    };

    Button_LineEdit(QWidget *parent=0, Button_Position position=BUTTON_RIGHT);
    ~Button_LineEdit();

public:

    //load button pixmap
    void load_pixmap(const QString& pixmap_url, int state_count=4);
    void set_pixmap(const QPixmap& pixmap, int state_count=4);

    //overwrite stylesheet
    void setStyleSheet(const QString& styleSheet);

protected:
    void resizeEvent(QResizeEvent *);

signals:
    void button_clicked();

private:
    void set_qss();

protected:
    State_Button    *button_;
    QString          qss_;
    Button_Position  button_position_;
};

//button appear at right of LineEdit when text is not empty. click the button to clear text
class Clear_LineEdit: public Button_LineEdit
{
    Q_OBJECT

public:
    Clear_LineEdit(QWidget *parent=0);
    ~Clear_LineEdit();
    
private slots:
    void clear_text();
    void textChanged(const QString& text);
};

#endif // BUTTON_LINE_EDIT_H
