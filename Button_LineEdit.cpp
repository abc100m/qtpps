#include "Button_LineEdit.h"

#include "State_Button.h"
#include <QStyle>

Button_LineEdit::Button_LineEdit( QWidget *parent/*=0*/, Button_Position position/*=BUTTON_RIGHT*/ )
    : QLineEdit(parent)
    ,button_position_(position)
{
    button_ = new State_Button(this);
    button_->setCursor(Qt::PointingHandCursor);

    connect(button_, SIGNAL(clicked()), this, SIGNAL(button_clicked()));
}

Button_LineEdit::~Button_LineEdit()
{
}

void Button_LineEdit::load_pixmap( const QString& pixmap_url, int state_count )
{
    button_->load_pximap(pixmap_url, state_count);
    set_qss();
}

void Button_LineEdit::set_pixmap( const QPixmap& pixmap, int state_count )
{
    button_->set_pixmap(pixmap, state_count);
    set_qss();
}

void Button_LineEdit::set_qss()
{
    int frameWidth = style()->pixelMetric(QStyle::PM_DefaultFrameWidth);

    if (button_position_ == BUTTON_RIGHT)
    {
        qss_ = QString("QLineEdit { padding-right: %1px; } ").arg(button_->width() + frameWidth + 1);
    }else{
        qss_ = QString("QLineEdit { padding-left: %1px; } ").arg(button_->width() + frameWidth + 1);
    }

    QSize msz = minimumSizeHint();
    setMinimumSize(qMax(msz.width(), button_->width() + frameWidth + 1),
                   qMax(msz.height(), button_->height() + frameWidth + 1)
                  );

    QLineEdit::setStyleSheet(qss_);
}

void Button_LineEdit::setStyleSheet( const QString& styleSheet )
{
    QString str = qss_;
    str.append(styleSheet);
    QLineEdit::setStyleSheet(str);
}

void Button_LineEdit::resizeEvent( QResizeEvent * )
{
    QSize sz = button_->size();
    QRect r = rect();
    int frameWidth = style()->pixelMetric(QStyle::PM_DefaultFrameWidth);
    int h = (r.bottom() + 1 - sz.height())/2;

    if (button_position_ == BUTTON_RIGHT)
    {
        button_->move(r.right() - frameWidth - sz.width() - 1, h);
    }else{
        button_->move(frameWidth + 1, h);
    }
}

//////////////////////////////////////////////////////////////////////////

Clear_LineEdit::Clear_LineEdit( QWidget *parent/*=0*/ )
    :Button_LineEdit(parent)
{
    connect( this, SIGNAL(button_clicked()), this, SLOT(clear_text()) );
    connect( this, SIGNAL(textChanged(const QString& )), this, SLOT(textChanged(const QString& )));

    load_pixmap(QStringLiteral(":/images/linedit/clear.png"), 3);
    button_->hide();
}

Clear_LineEdit::~Clear_LineEdit()
{
}

void Clear_LineEdit::clear_text()
{
    clear();
}

void Clear_LineEdit::textChanged( const QString& text )
{
    button_->setVisible(!text.isEmpty());
}


