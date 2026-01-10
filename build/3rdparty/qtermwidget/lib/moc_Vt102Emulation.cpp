/****************************************************************************
** Meta object code from reading C++ file 'Vt102Emulation.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../3rdparty/qtermwidget/lib/Vt102Emulation.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Vt102Emulation.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_Konsole__Vt102Emulation_t {
    uint offsetsAndSizes[36];
    char stringdata0[24];
    char stringdata1[11];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[7];
    char stringdata5[9];
    char stringdata6[5];
    char stringdata7[13];
    char stringdata8[11];
    char stringdata9[10];
    char stringdata10[15];
    char stringdata11[8];
    char stringdata12[7];
    char stringdata13[5];
    char stringdata14[10];
    char stringdata15[10];
    char stringdata16[12];
    char stringdata17[12];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_Konsole__Vt102Emulation_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_Konsole__Vt102Emulation_t qt_meta_stringdata_Konsole__Vt102Emulation = {
    {
        QT_MOC_LITERAL(0, 23),  // "Konsole::Vt102Emulation"
        QT_MOC_LITERAL(24, 10),  // "sendString"
        QT_MOC_LITERAL(35, 0),  // ""
        QT_MOC_LITERAL(36, 11),  // "const char*"
        QT_MOC_LITERAL(48, 6),  // "length"
        QT_MOC_LITERAL(55, 8),  // "sendText"
        QT_MOC_LITERAL(64, 4),  // "text"
        QT_MOC_LITERAL(69, 12),  // "sendKeyEvent"
        QT_MOC_LITERAL(82, 10),  // "QKeyEvent*"
        QT_MOC_LITERAL(93, 9),  // "fromPaste"
        QT_MOC_LITERAL(103, 14),  // "sendMouseEvent"
        QT_MOC_LITERAL(118, 7),  // "buttons"
        QT_MOC_LITERAL(126, 6),  // "column"
        QT_MOC_LITERAL(133, 4),  // "line"
        QT_MOC_LITERAL(138, 9),  // "eventType"
        QT_MOC_LITERAL(148, 9),  // "focusLost"
        QT_MOC_LITERAL(158, 11),  // "focusGained"
        QT_MOC_LITERAL(170, 11)   // "updateTitle"
    },
    "Konsole::Vt102Emulation",
    "sendString",
    "",
    "const char*",
    "length",
    "sendText",
    "text",
    "sendKeyEvent",
    "QKeyEvent*",
    "fromPaste",
    "sendMouseEvent",
    "buttons",
    "column",
    "line",
    "eventType",
    "focusLost",
    "focusGained",
    "updateTitle"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_Konsole__Vt102Emulation[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   62,    2, 0x0a,    1 /* Public */,
       1,    1,   67,    2, 0x2a,    4 /* Public | MethodCloned */,
       5,    1,   70,    2, 0x0a,    6 /* Public */,
       7,    2,   73,    2, 0x0a,    8 /* Public */,
      10,    4,   78,    2, 0x0a,   11 /* Public */,
      15,    0,   87,    2, 0x0a,   16 /* Public */,
      16,    0,   88,    2, 0x0a,   17 /* Public */,
      17,    0,   89,    2, 0x08,   18 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    2,    4,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Bool,    2,    9,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   11,   12,   13,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Konsole::Vt102Emulation::staticMetaObject = { {
    QMetaObject::SuperData::link<Emulation::staticMetaObject>(),
    qt_meta_stringdata_Konsole__Vt102Emulation.offsetsAndSizes,
    qt_meta_data_Konsole__Vt102Emulation,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_Konsole__Vt102Emulation_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Vt102Emulation, std::true_type>,
        // method 'sendString'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const char *, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'sendString'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const char *, std::false_type>,
        // method 'sendText'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'sendKeyEvent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QKeyEvent *, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'sendMouseEvent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'focusLost'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'focusGained'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateTitle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Konsole::Vt102Emulation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Vt102Emulation *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sendString((*reinterpret_cast< std::add_pointer_t<const char*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 1: _t->sendString((*reinterpret_cast< std::add_pointer_t<const char*>>(_a[1]))); break;
        case 2: _t->sendText((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->sendKeyEvent((*reinterpret_cast< std::add_pointer_t<QKeyEvent*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 4: _t->sendMouseEvent((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        case 5: _t->focusLost(); break;
        case 6: _t->focusGained(); break;
        case 7: _t->updateTitle(); break;
        default: ;
        }
    }
}

const QMetaObject *Konsole::Vt102Emulation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Konsole::Vt102Emulation::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Konsole__Vt102Emulation.stringdata0))
        return static_cast<void*>(this);
    return Emulation::qt_metacast(_clname);
}

int Konsole::Vt102Emulation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Emulation::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
