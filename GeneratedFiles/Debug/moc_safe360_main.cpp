/****************************************************************************
** Meta object code from reading C++ file 'safe360_main.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../safe360_main.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'safe360_main.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_safe360_main_t {
    QByteArrayData data[7];
    char stringdata[80];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_safe360_main_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_safe360_main_t qt_meta_stringdata_safe360_main = {
    {
QT_MOC_LITERAL(0, 0, 12),
QT_MOC_LITERAL(1, 13, 14),
QT_MOC_LITERAL(2, 28, 0),
QT_MOC_LITERAL(3, 29, 1),
QT_MOC_LITERAL(4, 31, 13),
QT_MOC_LITERAL(5, 45, 14),
QT_MOC_LITERAL(6, 60, 19)
    },
    "safe360_main\0button_clicked\0\0i\0"
    "navigate_home\0show_main_menu\0"
    "show_setting_dialog"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_safe360_main[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x08 /* Private */,
       4,    0,   37,    2, 0x08 /* Private */,
       5,    0,   38,    2, 0x08 /* Private */,
       6,    0,   39,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void safe360_main::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        safe360_main *_t = static_cast<safe360_main *>(_o);
        switch (_id) {
        case 0: _t->button_clicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->navigate_home(); break;
        case 2: _t->show_main_menu(); break;
        case 3: _t->show_setting_dialog(); break;
        default: ;
        }
    }
}

const QMetaObject safe360_main::staticMetaObject = {
    { &Base_Widget<QWidget>::staticMetaObject, qt_meta_stringdata_safe360_main.data,
      qt_meta_data_safe360_main,  qt_static_metacall, 0, 0}
};


const QMetaObject *safe360_main::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *safe360_main::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_safe360_main.stringdata))
        return static_cast<void*>(const_cast< safe360_main*>(this));
    return Base_Widget<QWidget>::qt_metacast(_clname);
}

int safe360_main::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Base_Widget<QWidget>::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
