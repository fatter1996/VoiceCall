/****************************************************************************
** Meta object code from reading C++ file 'VoiceDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../VoiceDialog/VoiceDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VoiceDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VoiceDialog_t {
    QByteArrayData data[9];
    char stringdata0[93];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VoiceDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VoiceDialog_t qt_meta_stringdata_VoiceDialog = {
    {
QT_MOC_LITERAL(0, 0, 11), // "VoiceDialog"
QT_MOC_LITERAL(1, 12, 10), // "onResponse"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 4), // "data"
QT_MOC_LITERAL(4, 29, 14), // "onVoiceReceive"
QT_MOC_LITERAL(5, 44, 12), // "onSignalling"
QT_MOC_LITERAL(6, 57, 10), // "onAgreeBtn"
QT_MOC_LITERAL(7, 68, 13), // "onDisAgreeBtn"
QT_MOC_LITERAL(8, 82, 10) // "onCloseBtn"

    },
    "VoiceDialog\0onResponse\0\0data\0"
    "onVoiceReceive\0onSignalling\0onAgreeBtn\0"
    "onDisAgreeBtn\0onCloseBtn"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VoiceDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x0a /* Public */,
       4,    1,   47,    2, 0x0a /* Public */,
       5,    1,   50,    2, 0x0a /* Public */,
       6,    0,   53,    2, 0x0a /* Public */,
       7,    0,   54,    2, 0x0a /* Public */,
       8,    1,   55,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QByteArray,    3,
    QMetaType::Void, QMetaType::QByteArray,    2,
    QMetaType::Void, QMetaType::QByteArray,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void VoiceDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VoiceDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onResponse((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 1: _t->onVoiceReceive((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 2: _t->onSignalling((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 3: _t->onAgreeBtn(); break;
        case 4: _t->onDisAgreeBtn(); break;
        case 5: _t->onCloseBtn((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject VoiceDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QThread::staticMetaObject>(),
    qt_meta_stringdata_VoiceDialog.data,
    qt_meta_data_VoiceDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *VoiceDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VoiceDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VoiceDialog.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int VoiceDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
