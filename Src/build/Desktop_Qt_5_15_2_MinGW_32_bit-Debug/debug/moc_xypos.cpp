/****************************************************************************
** Meta object code from reading C++ file 'xypos.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../xypos.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'xypos.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_XYpos_t {
    QByteArrayData data[9];
    char stringdata0[65];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_XYpos_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_XYpos_t qt_meta_stringdata_XYpos = {
    {
QT_MOC_LITERAL(0, 0, 5), // "XYpos"
QT_MOC_LITERAL(1, 6, 21), // "updateXPosYPosDisplay"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 3), // "pos"
QT_MOC_LITERAL(4, 33, 10), // "updateYPos"
QT_MOC_LITERAL(5, 44, 1), // "y"
QT_MOC_LITERAL(6, 46, 10), // "updateXPos"
QT_MOC_LITERAL(7, 57, 1), // "x"
QT_MOC_LITERAL(8, 59, 5) // "reset"

    },
    "XYpos\0updateXPosYPosDisplay\0\0pos\0"
    "updateYPos\0y\0updateXPos\0x\0reset"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_XYpos[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x0a /* Public */,
       4,    1,   37,    2, 0x0a /* Public */,
       6,    1,   40,    2, 0x0a /* Public */,
       8,    0,   43,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QPointF,    3,
    QMetaType::Void, QMetaType::QReal,    5,
    QMetaType::Void, QMetaType::QReal,    7,
    QMetaType::Void,

       0        // eod
};

void XYpos::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<XYpos *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateXPosYPosDisplay((*reinterpret_cast< const QPointF(*)>(_a[1]))); break;
        case 1: _t->updateYPos((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 2: _t->updateXPos((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 3: _t->reset(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject XYpos::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_XYpos.data,
    qt_meta_data_XYpos,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *XYpos::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *XYpos::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_XYpos.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int XYpos::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
