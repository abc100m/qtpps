/****************************************************************************
** Meta object code from reading C++ file 'Title_Bar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Title_Bar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Title_Bar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Title_Bar_t {
    QByteArrayData data[4];
    char stringdata[39];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Title_Bar_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Title_Bar_t qt_meta_stringdata_Title_Bar = {
    {
QT_MOC_LITERAL(0, 0, 9),
QT_MOC_LITERAL(1, 10, 10),
QT_MOC_LITERAL(2, 21, 0),
QT_MOC_LITERAL(3, 22, 16)
    },
    "Title_Bar\0show_small\0\0show_max_restore"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Title_Bar[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x08 /* Private */,
       3,    0,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Title_Bar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Title_Bar *_t = static_cast<Title_Bar *>(_o);
        switch (_id) {
        case 0: _t->show_small(); break;
        case 1: _t->show_max_restore(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Title_Bar::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Title_Bar.data,
      qt_meta_data_Title_Bar,  qt_static_metacall, 0, 0}
};


const QMetaObject *Title_Bar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Title_Bar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Title_Bar.stringdata))
        return static_cast<void*>(const_cast< Title_Bar*>(this));
    return QWidget::qt_metacast(_clname);
}

int Title_Bar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_Main_Title_Bar_t {
    QByteArrayData data[4];
    char stringdata[42];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Main_Title_Bar_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Main_Title_Bar_t qt_meta_stringdata_Main_Title_Bar = {
    {
QT_MOC_LITERAL(0, 0, 14),
QT_MOC_LITERAL(1, 15, 12),
QT_MOC_LITERAL(2, 28, 0),
QT_MOC_LITERAL(3, 29, 12)
    },
    "Main_Title_Bar\0skin_clicked\0\0menu_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Main_Title_Bar[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,
       3,    0,   25,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Main_Title_Bar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Main_Title_Bar *_t = static_cast<Main_Title_Bar *>(_o);
        switch (_id) {
        case 0: _t->skin_clicked(); break;
        case 1: _t->menu_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Main_Title_Bar::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Main_Title_Bar::skin_clicked)) {
                *result = 0;
            }
        }
        {
            typedef void (Main_Title_Bar::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Main_Title_Bar::menu_clicked)) {
                *result = 1;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Main_Title_Bar::staticMetaObject = {
    { &Title_Bar::staticMetaObject, qt_meta_stringdata_Main_Title_Bar.data,
      qt_meta_data_Main_Title_Bar,  qt_static_metacall, 0, 0}
};


const QMetaObject *Main_Title_Bar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Main_Title_Bar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Main_Title_Bar.stringdata))
        return static_cast<void*>(const_cast< Main_Title_Bar*>(this));
    return Title_Bar::qt_metacast(_clname);
}

int Main_Title_Bar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Title_Bar::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void Main_Title_Bar::skin_clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Main_Title_Bar::menu_clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
