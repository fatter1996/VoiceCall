/****************************************************************************
** Meta object code from reading C++ file 'VoiceDialogWnd.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../VoiceCall/VoiceDialog/VoiceDialogWnd.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VoiceDialogWnd.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VoiceDialogWnd_t {
    QByteArrayData data[9];
    char stringdata0[131];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VoiceDialogWnd_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VoiceDialogWnd_t qt_meta_stringdata_VoiceDialogWnd = {
    {
QT_MOC_LITERAL(0, 0, 14), // "VoiceDialogWnd"
QT_MOC_LITERAL(1, 15, 8), // "agreeBtn"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 11), // "disAgreeBtn"
QT_MOC_LITERAL(4, 37, 8), // "closeBtn"
QT_MOC_LITERAL(5, 46, 19), // "on_agreeBtn_clicked"
QT_MOC_LITERAL(6, 66, 22), // "on_disAgreeBtn_clicked"
QT_MOC_LITERAL(7, 89, 19), // "on_closeBtn_clicked"
QT_MOC_LITERAL(8, 109, 21) // "on_closeBtn_2_clicked"

    },
    "VoiceDialogWnd\0agreeBtn\0\0disAgreeBtn\0"
    "closeBtn\0on_agreeBtn_clicked\0"
    "on_disAgreeBtn_clicked\0on_closeBtn_clicked\0"
    "on_closeBtn_2_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VoiceDialogWnd[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,
       4,    1,   51,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   54,    2, 0x08 /* Private */,
       6,    0,   55,    2, 0x08 /* Private */,
       7,    0,   56,    2, 0x08 /* Private */,
       8,    0,   57,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void VoiceDialogWnd::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VoiceDialogWnd *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->agreeBtn(); break;
        case 1: _t->disAgreeBtn(); break;
        case 2: _t->closeBtn((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_agreeBtn_clicked(); break;
        case 4: _t->on_disAgreeBtn_clicked(); break;
        case 5: _t->on_closeBtn_clicked(); break;
        case 6: _t->on_closeBtn_2_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (VoiceDialogWnd::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VoiceDialogWnd::agreeBtn)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (VoiceDialogWnd::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VoiceDialogWnd::disAgreeBtn)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (VoiceDialogWnd::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VoiceDialogWnd::closeBtn)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject VoiceDialogWnd::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_VoiceDialogWnd.data,
    qt_meta_data_VoiceDialogWnd,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *VoiceDialogWnd::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VoiceDialogWnd::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VoiceDialogWnd.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int VoiceDialogWnd::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void VoiceDialogWnd::agreeBtn()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void VoiceDialogWnd::disAgreeBtn()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void VoiceDialogWnd::closeBtn(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
