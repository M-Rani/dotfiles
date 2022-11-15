/****************************************************************************
** Meta object code from reading C++ file 'notificationpresenter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../src/notifications/notificationpresenter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'notificationpresenter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NotificationPresenter_t {
    QByteArrayData data[12];
    char stringdata0[139];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NotificationPresenter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NotificationPresenter_t qt_meta_stringdata_NotificationPresenter = {
    {
QT_MOC_LITERAL(0, 0, 21), // "NotificationPresenter"
QT_MOC_LITERAL(1, 22, 18), // "notificationClosed"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 19), // "notificationClicked"
QT_MOC_LITERAL(4, 62, 10), // "downloaded"
QT_MOC_LITERAL(5, 73, 14), // "QNetworkReply*"
QT_MOC_LITERAL(6, 88, 5), // "reply"
QT_MOC_LITERAL(7, 94, 11), // "notifClosed"
QT_MOC_LITERAL(8, 106, 2), // "id"
QT_MOC_LITERAL(9, 109, 6), // "reason"
QT_MOC_LITERAL(10, 116, 12), // "notifClicked"
QT_MOC_LITERAL(11, 129, 9) // "actionKey"

    },
    "NotificationPresenter\0notificationClosed\0"
    "\0notificationClicked\0downloaded\0"
    "QNetworkReply*\0reply\0notifClosed\0id\0"
    "reason\0notifClicked\0actionKey"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NotificationPresenter[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   41,    2, 0x08 /* Private */,
       7,    2,   44,    2, 0x08 /* Private */,
      10,    2,   49,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt,    8,    9,
    QMetaType::Void, QMetaType::UInt, QMetaType::QString,    8,   11,

       0        // eod
};

void NotificationPresenter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NotificationPresenter *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->notificationClosed(); break;
        case 1: _t->notificationClicked(); break;
        case 2: _t->downloaded((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 3: _t->notifClosed((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 4: _t->notifClicked((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (NotificationPresenter::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NotificationPresenter::notificationClosed)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (NotificationPresenter::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NotificationPresenter::notificationClicked)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject NotificationPresenter::staticMetaObject = { {
    QMetaObject::SuperData::link<QWebNotificationPresenter::staticMetaObject>(),
    qt_meta_stringdata_NotificationPresenter.data,
    qt_meta_data_NotificationPresenter,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *NotificationPresenter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NotificationPresenter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NotificationPresenter.stringdata0))
        return static_cast<void*>(this);
    return QWebNotificationPresenter::qt_metacast(_clname);
}

int NotificationPresenter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWebNotificationPresenter::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void NotificationPresenter::notificationClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void NotificationPresenter::notificationClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
