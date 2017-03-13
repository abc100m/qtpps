/****************************************************************************
** Meta object code from reading C++ file 'ppstream_movies.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ppstream_movies.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ppstream_movies.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ppstream_movies_t {
    QByteArrayData data[7];
    char stringdata[131];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ppstream_movies_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ppstream_movies_t qt_meta_stringdata_ppstream_movies = {
    {
QT_MOC_LITERAL(0, 0, 15),
QT_MOC_LITERAL(1, 16, 19),
QT_MOC_LITERAL(2, 36, 0),
QT_MOC_LITERAL(3, 37, 22),
QT_MOC_LITERAL(4, 60, 23),
QT_MOC_LITERAL(5, 84, 23),
QT_MOC_LITERAL(6, 108, 22)
    },
    "ppstream_movies\0home_button_clicked\0"
    "\0history_button_clicked\0favorite_button_clicked\0"
    "download_button_clicked\0setting_button_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ppstream_movies[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    0,   42,    2, 0x08 /* Private */,
       6,    0,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ppstream_movies::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ppstream_movies *_t = static_cast<ppstream_movies *>(_o);
        switch (_id) {
        case 0: _t->home_button_clicked(); break;
        case 1: _t->history_button_clicked(); break;
        case 2: _t->favorite_button_clicked(); break;
        case 3: _t->download_button_clicked(); break;
        case 4: _t->setting_button_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject ppstream_movies::staticMetaObject = {
    { &QSS_Widget::staticMetaObject, qt_meta_stringdata_ppstream_movies.data,
      qt_meta_data_ppstream_movies,  qt_static_metacall, 0, 0}
};


const QMetaObject *ppstream_movies::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ppstream_movies::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ppstream_movies.stringdata))
        return static_cast<void*>(const_cast< ppstream_movies*>(this));
    return QSS_Widget::qt_metacast(_clname);
}

int ppstream_movies::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSS_Widget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
