/****************************************************************************
** Meta object code from reading C++ file 'MyToolBar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Cloud/MyToolBar/MyToolBar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MyToolBar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MyToolBar_t {
    QByteArrayData data[12];
    char stringdata0[118];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyToolBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyToolBar_t qt_meta_stringdata_MyToolBar = {
    {
QT_MOC_LITERAL(0, 0, 9), // "MyToolBar"
QT_MOC_LITERAL(1, 10, 6), // "Upload"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 8), // "Download"
QT_MOC_LITERAL(4, 27, 5), // "Share"
QT_MOC_LITERAL(5, 33, 6), // "Delete"
QT_MOC_LITERAL(6, 40, 6), // "NewDir"
QT_MOC_LITERAL(7, 47, 13), // "clickedUpload"
QT_MOC_LITERAL(8, 61, 15), // "clickedDownload"
QT_MOC_LITERAL(9, 77, 12), // "clickedShare"
QT_MOC_LITERAL(10, 90, 13), // "clickedDelete"
QT_MOC_LITERAL(11, 104, 13) // "clickedNewDir"

    },
    "MyToolBar\0Upload\0\0Download\0Share\0"
    "Delete\0NewDir\0clickedUpload\0clickedDownload\0"
    "clickedShare\0clickedDelete\0clickedNewDir"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyToolBar[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    0,   65,    2, 0x06 /* Public */,
       4,    0,   66,    2, 0x06 /* Public */,
       5,    0,   67,    2, 0x06 /* Public */,
       6,    0,   68,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   69,    2, 0x08 /* Private */,
       8,    0,   70,    2, 0x08 /* Private */,
       9,    0,   71,    2, 0x08 /* Private */,
      10,    0,   72,    2, 0x08 /* Private */,
      11,    0,   73,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MyToolBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MyToolBar *_t = static_cast<MyToolBar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Upload(); break;
        case 1: _t->Download(); break;
        case 2: _t->Share(); break;
        case 3: _t->Delete(); break;
        case 4: _t->NewDir(); break;
        case 5: _t->clickedUpload(); break;
        case 6: _t->clickedDownload(); break;
        case 7: _t->clickedShare(); break;
        case 8: _t->clickedDelete(); break;
        case 9: _t->clickedNewDir(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MyToolBar::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyToolBar::Upload)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MyToolBar::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyToolBar::Download)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (MyToolBar::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyToolBar::Share)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (MyToolBar::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyToolBar::Delete)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (MyToolBar::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyToolBar::NewDir)) {
                *result = 4;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject MyToolBar::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MyToolBar.data,
      qt_meta_data_MyToolBar,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MyToolBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyToolBar::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MyToolBar.stringdata0))
        return static_cast<void*>(const_cast< MyToolBar*>(this));
    return QWidget::qt_metacast(_clname);
}

int MyToolBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void MyToolBar::Upload()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void MyToolBar::Download()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void MyToolBar::Share()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void MyToolBar::Delete()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void MyToolBar::NewDir()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
