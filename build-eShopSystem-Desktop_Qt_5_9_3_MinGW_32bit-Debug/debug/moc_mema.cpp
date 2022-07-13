/****************************************************************************
** Meta object code from reading C++ file 'mema.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../eShopSystem/mema.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mema.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MeMa_t {
    QByteArrayData data[15];
    char stringdata0[152];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MeMa_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MeMa_t qt_meta_stringdata_MeMa = {
    {
QT_MOC_LITERAL(0, 0, 4), // "MeMa"
QT_MOC_LITERAL(1, 5, 8), // "MySignal"
QT_MOC_LITERAL(2, 14, 0), // ""
QT_MOC_LITERAL(3, 15, 4), // "mess"
QT_MOC_LITERAL(4, 20, 19), // "on_styp_2_activated"
QT_MOC_LITERAL(5, 40, 5), // "index"
QT_MOC_LITERAL(6, 46, 19), // "on_name_2_activated"
QT_MOC_LITERAL(7, 66, 4), // "into"
QT_MOC_LITERAL(8, 71, 5), // "clear"
QT_MOC_LITERAL(9, 77, 6), // "sell_2"
QT_MOC_LITERAL(10, 84, 5), // "order"
QT_MOC_LITERAL(11, 90, 12), // "styp_2change"
QT_MOC_LITERAL(12, 103, 23), // "on_count_2_valueChanged"
QT_MOC_LITERAL(13, 127, 4), // "arg1"
QT_MOC_LITERAL(14, 132, 19) // "on_type_1_activated"

    },
    "MeMa\0MySignal\0\0mess\0on_styp_2_activated\0"
    "index\0on_name_2_activated\0into\0clear\0"
    "sell_2\0order\0styp_2change\0"
    "on_count_2_valueChanged\0arg1\0"
    "on_type_1_activated"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MeMa[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,
       4,    1,   82,    2, 0x06 /* Public */,
       6,    1,   85,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   88,    2, 0x0a /* Public */,
       8,    0,   89,    2, 0x0a /* Public */,
       9,    0,   90,    2, 0x0a /* Public */,
      10,    0,   91,    2, 0x0a /* Public */,
      11,    0,   92,    2, 0x0a /* Public */,
       4,    0,   93,    2, 0x0a /* Public */,
       6,    0,   94,    2, 0x0a /* Public */,
      12,    1,   95,    2, 0x0a /* Public */,
      12,    0,   98,    2, 0x08 /* Private */,
      14,    1,   99,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   13,

       0        // eod
};

void MeMa::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MeMa *_t = static_cast<MeMa *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->MySignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->on_styp_2_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_name_2_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->into(); break;
        case 4: _t->clear(); break;
        case 5: _t->sell_2(); break;
        case 6: _t->order(); break;
        case 7: _t->styp_2change(); break;
        case 8: _t->on_styp_2_activated(); break;
        case 9: _t->on_name_2_activated(); break;
        case 10: _t->on_count_2_valueChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->on_count_2_valueChanged(); break;

        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (MeMa::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MeMa::MySignal)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MeMa::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MeMa::on_styp_2_activated)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (MeMa::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MeMa::on_name_2_activated)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject MeMa::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_MeMa.data,
      qt_meta_data_MeMa,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MeMa::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MeMa::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MeMa.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int MeMa::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void MeMa::MySignal(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MeMa::on_styp_2_activated(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MeMa::on_name_2_activated(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
