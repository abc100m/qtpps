#ifndef PPSTREAM_MAIN_H
#define PPSTREAM_MAIN_H

#include <QSplitter>

#include "Base_Widget.h"
#include "Skin.h"

class PPS_Skin: public Skin
{
public:
    void load();
};

class ppstream_main : public Base_Widget<QWidget>
{
    Q_OBJECT
public:
    ppstream_main(QWidget *parent=NULL, Skin* skin=NULL);
    ~ppstream_main();

private:
    void create_top();
    void create_line();
    void create_client();

};

#endif // PPSTREAM_MAIN_H
