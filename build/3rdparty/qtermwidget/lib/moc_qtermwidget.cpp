/****************************************************************************
** Meta object code from reading C++ file 'qtermwidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../3rdparty/qtermwidget/lib/qtermwidget.h"
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtermwidget.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_QTermWidget_t {
    uint offsetsAndSizes[100];
    char stringdata0[12];
    char stringdata1[9];
    char stringdata2[1];
    char stringdata3[14];
    char stringdata4[13];
    char stringdata5[14];
    char stringdata6[15];
    char stringdata7[11];
    char stringdata8[13];
    char stringdata9[16];
    char stringdata10[5];
    char stringdata11[8];
    char stringdata12[9];
    char stringdata13[8];
    char stringdata14[9];
    char stringdata15[12];
    char stringdata16[15];
    char stringdata17[8];
    char stringdata18[13];
    char stringdata19[13];
    char stringdata20[5];
    char stringdata21[14];
    char stringdata22[15];
    char stringdata23[15];
    char stringdata24[7];
    char stringdata25[8];
    char stringdata26[8];
    char stringdata27[15];
    char stringdata28[3];
    char stringdata29[6];
    char stringdata30[20];
    char stringdata31[12];
    char stringdata32[11];
    char stringdata33[7];
    char stringdata34[16];
    char stringdata35[17];
    char stringdata36[13];
    char stringdata37[5];
    char stringdata38[9];
    char stringdata39[13];
    char stringdata40[11];
    char stringdata41[12];
    char stringdata42[10];
    char stringdata43[10];
    char stringdata44[8];
    char stringdata45[13];
    char stringdata46[14];
    char stringdata47[40];
    char stringdata48[12];
    char stringdata49[22];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_QTermWidget_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_QTermWidget_t qt_meta_stringdata_QTermWidget = {
    {
        QT_MOC_LITERAL(0, 11),  // "QTermWidget"
        QT_MOC_LITERAL(12, 8),  // "finished"
        QT_MOC_LITERAL(21, 0),  // ""
        QT_MOC_LITERAL(22, 13),  // "copyAvailable"
        QT_MOC_LITERAL(36, 12),  // "termGetFocus"
        QT_MOC_LITERAL(49, 13),  // "termLostFocus"
        QT_MOC_LITERAL(63, 14),  // "termKeyPressed"
        QT_MOC_LITERAL(78, 10),  // "QKeyEvent*"
        QT_MOC_LITERAL(89, 12),  // "urlActivated"
        QT_MOC_LITERAL(102, 15),  // "fromContextMenu"
        QT_MOC_LITERAL(118, 4),  // "bell"
        QT_MOC_LITERAL(123, 7),  // "message"
        QT_MOC_LITERAL(131, 8),  // "activity"
        QT_MOC_LITERAL(140, 7),  // "silence"
        QT_MOC_LITERAL(148, 8),  // "sendData"
        QT_MOC_LITERAL(157, 11),  // "const char*"
        QT_MOC_LITERAL(169, 14),  // "profileChanged"
        QT_MOC_LITERAL(184, 7),  // "profile"
        QT_MOC_LITERAL(192, 12),  // "titleChanged"
        QT_MOC_LITERAL(205, 12),  // "receivedData"
        QT_MOC_LITERAL(218, 4),  // "text"
        QT_MOC_LITERAL(223, 13),  // "copyClipboard"
        QT_MOC_LITERAL(237, 14),  // "pasteClipboard"
        QT_MOC_LITERAL(252, 14),  // "pasteSelection"
        QT_MOC_LITERAL(267, 6),  // "zoomIn"
        QT_MOC_LITERAL(274, 7),  // "zoomOut"
        QT_MOC_LITERAL(282, 7),  // "setSize"
        QT_MOC_LITERAL(290, 14),  // "setKeyBindings"
        QT_MOC_LITERAL(305, 2),  // "kb"
        QT_MOC_LITERAL(308, 5),  // "clear"
        QT_MOC_LITERAL(314, 19),  // "toggleShowSearchBar"
        QT_MOC_LITERAL(334, 11),  // "saveHistory"
        QT_MOC_LITERAL(346, 10),  // "QIODevice*"
        QT_MOC_LITERAL(357, 6),  // "device"
        QT_MOC_LITERAL(364, 15),  // "sessionFinished"
        QT_MOC_LITERAL(380, 16),  // "selectionChanged"
        QT_MOC_LITERAL(397, 12),  // "textSelected"
        QT_MOC_LITERAL(410, 4),  // "find"
        QT_MOC_LITERAL(415, 8),  // "findNext"
        QT_MOC_LITERAL(424, 12),  // "findPrevious"
        QT_MOC_LITERAL(437, 10),  // "matchFound"
        QT_MOC_LITERAL(448, 11),  // "startColumn"
        QT_MOC_LITERAL(460, 9),  // "startLine"
        QT_MOC_LITERAL(470, 9),  // "endColumn"
        QT_MOC_LITERAL(480, 7),  // "endLine"
        QT_MOC_LITERAL(488, 12),  // "noMatchFound"
        QT_MOC_LITERAL(501, 13),  // "cursorChanged"
        QT_MOC_LITERAL(515, 39),  // "Konsole::Emulation::KeyboardC..."
        QT_MOC_LITERAL(555, 11),  // "cursorShape"
        QT_MOC_LITERAL(567, 21)   // "blinkingCursorEnabled"
    },
    "QTermWidget",
    "finished",
    "",
    "copyAvailable",
    "termGetFocus",
    "termLostFocus",
    "termKeyPressed",
    "QKeyEvent*",
    "urlActivated",
    "fromContextMenu",
    "bell",
    "message",
    "activity",
    "silence",
    "sendData",
    "const char*",
    "profileChanged",
    "profile",
    "titleChanged",
    "receivedData",
    "text",
    "copyClipboard",
    "pasteClipboard",
    "pasteSelection",
    "zoomIn",
    "zoomOut",
    "setSize",
    "setKeyBindings",
    "kb",
    "clear",
    "toggleShowSearchBar",
    "saveHistory",
    "QIODevice*",
    "device",
    "sessionFinished",
    "selectionChanged",
    "textSelected",
    "find",
    "findNext",
    "findPrevious",
    "matchFound",
    "startColumn",
    "startLine",
    "endColumn",
    "endLine",
    "noMatchFound",
    "cursorChanged",
    "Konsole::Emulation::KeyboardCursorShape",
    "cursorShape",
    "blinkingCursorEnabled"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_QTermWidget[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      31,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      13,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  200,    2, 0x06,    1 /* Public */,
       3,    1,  201,    2, 0x06,    2 /* Public */,
       4,    0,  204,    2, 0x06,    4 /* Public */,
       5,    0,  205,    2, 0x06,    5 /* Public */,
       6,    1,  206,    2, 0x06,    6 /* Public */,
       8,    2,  209,    2, 0x06,    8 /* Public */,
      10,    1,  214,    2, 0x06,   11 /* Public */,
      12,    0,  217,    2, 0x06,   13 /* Public */,
      13,    0,  218,    2, 0x06,   14 /* Public */,
      14,    2,  219,    2, 0x06,   15 /* Public */,
      16,    1,  224,    2, 0x06,   18 /* Public */,
      18,    0,  227,    2, 0x06,   20 /* Public */,
      19,    1,  228,    2, 0x06,   21 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      21,    0,  231,    2, 0x0a,   23 /* Public */,
      22,    0,  232,    2, 0x0a,   24 /* Public */,
      23,    0,  233,    2, 0x0a,   25 /* Public */,
      24,    0,  234,    2, 0x0a,   26 /* Public */,
      25,    0,  235,    2, 0x0a,   27 /* Public */,
      26,    1,  236,    2, 0x0a,   28 /* Public */,
      27,    1,  239,    2, 0x0a,   30 /* Public */,
      29,    0,  242,    2, 0x0a,   32 /* Public */,
      30,    0,  243,    2, 0x0a,   33 /* Public */,
      31,    1,  244,    2, 0x0a,   34 /* Public */,
      34,    0,  247,    2, 0x09,   36 /* Protected */,
      35,    1,  248,    2, 0x09,   37 /* Protected */,
      37,    0,  251,    2, 0x08,   39 /* Private */,
      38,    0,  252,    2, 0x08,   40 /* Private */,
      39,    0,  253,    2, 0x08,   41 /* Private */,
      40,    4,  254,    2, 0x08,   42 /* Private */,
      45,    0,  263,    2, 0x08,   47 /* Private */,
      46,    2,  264,    2, 0x08,   48 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void, QMetaType::QUrl, QMetaType::Bool,    2,    9,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   20,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QSize,    2,
    QMetaType::Void, QMetaType::QString,   28,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 32,   33,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   36,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   41,   42,   43,   44,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 47, QMetaType::Bool,   48,   49,

       0        // eod
};

Q_CONSTINIT const QMetaObject QTermWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_QTermWidget.offsetsAndSizes,
    qt_meta_data_QTermWidget,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_QTermWidget_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QTermWidget, std::true_type>,
        // method 'finished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'copyAvailable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'termGetFocus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'termLostFocus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'termKeyPressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QKeyEvent *, std::false_type>,
        // method 'urlActivated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'bell'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'activity'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'silence'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sendData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const char *, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'profileChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'titleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'receivedData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'copyClipboard'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'pasteClipboard'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'pasteSelection'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'zoomIn'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'zoomOut'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setSize'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QSize &, std::false_type>,
        // method 'setKeyBindings'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'clear'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'toggleShowSearchBar'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'saveHistory'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QIODevice *, std::false_type>,
        // method 'sessionFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'selectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'find'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'findNext'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'findPrevious'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'matchFound'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'noMatchFound'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cursorChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Konsole::Emulation::KeyboardCursorShape, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void QTermWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QTermWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->finished(); break;
        case 1: _t->copyAvailable((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->termGetFocus(); break;
        case 3: _t->termLostFocus(); break;
        case 4: _t->termKeyPressed((*reinterpret_cast< std::add_pointer_t<QKeyEvent*>>(_a[1]))); break;
        case 5: _t->urlActivated((*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 6: _t->bell((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: _t->activity(); break;
        case 8: _t->silence(); break;
        case 9: _t->sendData((*reinterpret_cast< std::add_pointer_t<const char*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 10: _t->profileChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 11: _t->titleChanged(); break;
        case 12: _t->receivedData((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 13: _t->copyClipboard(); break;
        case 14: _t->pasteClipboard(); break;
        case 15: _t->pasteSelection(); break;
        case 16: _t->zoomIn(); break;
        case 17: _t->zoomOut(); break;
        case 18: _t->setSize((*reinterpret_cast< std::add_pointer_t<QSize>>(_a[1]))); break;
        case 19: _t->setKeyBindings((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 20: _t->clear(); break;
        case 21: _t->toggleShowSearchBar(); break;
        case 22: _t->saveHistory((*reinterpret_cast< std::add_pointer_t<QIODevice*>>(_a[1]))); break;
        case 23: _t->sessionFinished(); break;
        case 24: _t->selectionChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 25: _t->find(); break;
        case 26: _t->findNext(); break;
        case 27: _t->findPrevious(); break;
        case 28: _t->matchFound((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        case 29: _t->noMatchFound(); break;
        case 30: _t->cursorChanged((*reinterpret_cast< std::add_pointer_t<Konsole::Emulation::KeyboardCursorShape>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QTermWidget::*)();
            if (_t _q_method = &QTermWidget::finished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QTermWidget::*)(bool );
            if (_t _q_method = &QTermWidget::copyAvailable; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QTermWidget::*)();
            if (_t _q_method = &QTermWidget::termGetFocus; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QTermWidget::*)();
            if (_t _q_method = &QTermWidget::termLostFocus; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QTermWidget::*)(QKeyEvent * );
            if (_t _q_method = &QTermWidget::termKeyPressed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (QTermWidget::*)(const QUrl & , bool );
            if (_t _q_method = &QTermWidget::urlActivated; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (QTermWidget::*)(const QString & );
            if (_t _q_method = &QTermWidget::bell; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (QTermWidget::*)();
            if (_t _q_method = &QTermWidget::activity; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (QTermWidget::*)();
            if (_t _q_method = &QTermWidget::silence; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (QTermWidget::*)(const char * , int );
            if (_t _q_method = &QTermWidget::sendData; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (QTermWidget::*)(const QString & );
            if (_t _q_method = &QTermWidget::profileChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (QTermWidget::*)();
            if (_t _q_method = &QTermWidget::titleChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (QTermWidget::*)(const QString & );
            if (_t _q_method = &QTermWidget::receivedData; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 12;
                return;
            }
        }
    }
}

const QMetaObject *QTermWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QTermWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QTermWidget.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QTermWidgetInterface"))
        return static_cast< QTermWidgetInterface*>(this);
    if (!strcmp(_clname, "lxqt.qtermwidget.QTermWidgetInterface/1.5"))
        return static_cast< QTermWidgetInterface*>(this);
    return QWidget::qt_metacast(_clname);
}

int QTermWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 31)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 31;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 31)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 31;
    }
    return _id;
}

// SIGNAL 0
void QTermWidget::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QTermWidget::copyAvailable(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QTermWidget::termGetFocus()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QTermWidget::termLostFocus()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QTermWidget::termKeyPressed(QKeyEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QTermWidget::urlActivated(const QUrl & _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QTermWidget::bell(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QTermWidget::activity()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void QTermWidget::silence()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void QTermWidget::sendData(const char * _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void QTermWidget::profileChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void QTermWidget::titleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void QTermWidget::receivedData(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

#ifdef QT_MOC_EXPORT_PLUGIN_V2
static constexpr unsigned char qt_pluginMetaDataV2_QTermWidget[] = {
    0xbf, 
    // "IID"
    0x02,  0x70,  'l',  'x',  'q',  't',  '.',  'q', 
    't',  'e',  'r',  'm',  'w',  'i',  'd',  'g', 
    'e',  't', 
    // "className"
    0x03,  0x6b,  'Q',  'T',  'e',  'r',  'm',  'W', 
    'i',  'd',  'g',  'e',  't', 
    // "MetaData"
    0x04,  0xa6,  0x69,  'C',  'o',  'p',  'y',  'r', 
    'i',  'g',  'h',  't',  0x6d,  '(',  'C',  ')', 
    ' ',  '2',  '0',  '2',  '2',  ' ',  'L',  'X', 
    'Q',  't',  0x67,  'L',  'i',  'c',  'e',  'n', 
    's',  'e',  0x65,  'G',  'P',  'L',  'v',  '2', 
    0x64,  'N',  'a',  'm',  'e',  0x6b,  'Q',  'T', 
    'e',  'r',  'm',  'W',  'i',  'd',  'g',  'e', 
    't',  0x63,  'U',  'r',  'l',  0x78,  0x23,  'h', 
    't',  't',  'p',  's',  ':',  '/',  '/',  'g', 
    'i',  't',  'h',  'u',  'b',  '.',  'c',  'o', 
    'm',  '/',  'l',  'x',  'q',  't',  '/',  'q', 
    't',  'e',  'r',  'm',  'w',  'i',  'd',  'g', 
    'e',  't',  0x66,  'V',  'e',  'n',  'd',  'o', 
    'r',  0x64,  'L',  'X',  'Q',  't',  0x67,  'V', 
    'e',  'r',  's',  'i',  'o',  'n',  0x65,  '1', 
    '.',  '4',  '.',  '0', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN_V2(QTermWidget, QTermWidget, qt_pluginMetaDataV2_QTermWidget)
#else
QT_PLUGIN_METADATA_SECTION
Q_CONSTINIT static constexpr unsigned char qt_pluginMetaData_QTermWidget[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', '!',
    // metadata version, Qt version, architectural requirements
    0, QT_VERSION_MAJOR, QT_VERSION_MINOR, qPluginArchRequirements(),
    0xbf, 
    // "IID"
    0x02,  0x70,  'l',  'x',  'q',  't',  '.',  'q', 
    't',  'e',  'r',  'm',  'w',  'i',  'd',  'g', 
    'e',  't', 
    // "className"
    0x03,  0x6b,  'Q',  'T',  'e',  'r',  'm',  'W', 
    'i',  'd',  'g',  'e',  't', 
    // "MetaData"
    0x04,  0xa6,  0x69,  'C',  'o',  'p',  'y',  'r', 
    'i',  'g',  'h',  't',  0x6d,  '(',  'C',  ')', 
    ' ',  '2',  '0',  '2',  '2',  ' ',  'L',  'X', 
    'Q',  't',  0x67,  'L',  'i',  'c',  'e',  'n', 
    's',  'e',  0x65,  'G',  'P',  'L',  'v',  '2', 
    0x64,  'N',  'a',  'm',  'e',  0x6b,  'Q',  'T', 
    'e',  'r',  'm',  'W',  'i',  'd',  'g',  'e', 
    't',  0x63,  'U',  'r',  'l',  0x78,  0x23,  'h', 
    't',  't',  'p',  's',  ':',  '/',  '/',  'g', 
    'i',  't',  'h',  'u',  'b',  '.',  'c',  'o', 
    'm',  '/',  'l',  'x',  'q',  't',  '/',  'q', 
    't',  'e',  'r',  'm',  'w',  'i',  'd',  'g', 
    'e',  't',  0x66,  'V',  'e',  'n',  'd',  'o', 
    'r',  0x64,  'L',  'X',  'Q',  't',  0x67,  'V', 
    'e',  'r',  's',  'i',  'o',  'n',  0x65,  '1', 
    '.',  '4',  '.',  '0', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN(QTermWidget, QTermWidget)
#endif  // QT_MOC_EXPORT_PLUGIN_V2

QT_WARNING_POP
QT_END_MOC_NAMESPACE
