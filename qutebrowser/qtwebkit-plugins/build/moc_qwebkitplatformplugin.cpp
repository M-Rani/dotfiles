/****************************************************************************
** Meta object code from reading C++ file 'qwebkitplatformplugin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../usr/include/qt/QtWebKit/qwebkitplatformplugin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qwebkitplatformplugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QWebSelectMethod_t {
    QByteArrayData data[7];
    char stringdata0[73];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QWebSelectMethod_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QWebSelectMethod_t qt_meta_stringdata_QWebSelectMethod = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QWebSelectMethod"
QT_MOC_LITERAL(1, 17, 10), // "selectItem"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 5), // "index"
QT_MOC_LITERAL(4, 35, 23), // "allowMultiplySelections"
QT_MOC_LITERAL(5, 59, 5), // "shift"
QT_MOC_LITERAL(6, 65, 7) // "didHide"

    },
    "QWebSelectMethod\0selectItem\0\0index\0"
    "allowMultiplySelections\0shift\0didHide"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QWebSelectMethod[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   24,    2, 0x06 /* Public */,
       6,    0,   31,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Bool, QMetaType::Bool,    3,    4,    5,
    QMetaType::Void,

       0        // eod
};

void QWebSelectMethod::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QWebSelectMethod *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->selectItem((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 1: _t->didHide(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QWebSelectMethod::*)(int , bool , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QWebSelectMethod::selectItem)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QWebSelectMethod::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QWebSelectMethod::didHide)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QWebSelectMethod::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_QWebSelectMethod.data,
    qt_meta_data_QWebSelectMethod,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QWebSelectMethod::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QWebSelectMethod::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QWebSelectMethod.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QWebSelectMethod::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void QWebSelectMethod::selectItem(int _t1, bool _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QWebSelectMethod::didHide()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
struct qt_meta_stringdata_QWebNotificationPresenter_t {
    QByteArrayData data[4];
    char stringdata0[66];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QWebNotificationPresenter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QWebNotificationPresenter_t qt_meta_stringdata_QWebNotificationPresenter = {
    {
QT_MOC_LITERAL(0, 0, 25), // "QWebNotificationPresenter"
QT_MOC_LITERAL(1, 26, 18), // "notificationClosed"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 19) // "notificationClicked"

    },
    "QWebNotificationPresenter\0notificationClosed\0"
    "\0notificationClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QWebNotificationPresenter[] = {

 // content:
       8,       // revision
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

void QWebNotificationPresenter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QWebNotificationPresenter *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->notificationClosed(); break;
        case 1: _t->notificationClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QWebNotificationPresenter::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QWebNotificationPresenter::notificationClosed)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QWebNotificationPresenter::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QWebNotificationPresenter::notificationClicked)) {
                *result = 1;
                return;
            }
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject QWebNotificationPresenter::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_QWebNotificationPresenter.data,
    qt_meta_data_QWebNotificationPresenter,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QWebNotificationPresenter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QWebNotificationPresenter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QWebNotificationPresenter.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QWebNotificationPresenter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void QWebNotificationPresenter::notificationClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QWebNotificationPresenter::notificationClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
struct qt_meta_stringdata_QWebHapticFeedbackPlayer_t {
    QByteArrayData data[1];
    char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QWebHapticFeedbackPlayer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QWebHapticFeedbackPlayer_t qt_meta_stringdata_QWebHapticFeedbackPlayer = {
    {
QT_MOC_LITERAL(0, 0, 24) // "QWebHapticFeedbackPlayer"

    },
    "QWebHapticFeedbackPlayer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QWebHapticFeedbackPlayer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QWebHapticFeedbackPlayer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject QWebHapticFeedbackPlayer::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_QWebHapticFeedbackPlayer.data,
    qt_meta_data_QWebHapticFeedbackPlayer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QWebHapticFeedbackPlayer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QWebHapticFeedbackPlayer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QWebHapticFeedbackPlayer.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QWebHapticFeedbackPlayer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QWebTouchModifier_t {
    QByteArrayData data[1];
    char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QWebTouchModifier_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QWebTouchModifier_t qt_meta_stringdata_QWebTouchModifier = {
    {
QT_MOC_LITERAL(0, 0, 17) // "QWebTouchModifier"

    },
    "QWebTouchModifier"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QWebTouchModifier[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QWebTouchModifier::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject QWebTouchModifier::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_QWebTouchModifier.data,
    qt_meta_data_QWebTouchModifier,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QWebTouchModifier::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QWebTouchModifier::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QWebTouchModifier.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QWebTouchModifier::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QWebSpellChecker_t {
    QByteArrayData data[1];
    char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QWebSpellChecker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QWebSpellChecker_t qt_meta_stringdata_QWebSpellChecker = {
    {
QT_MOC_LITERAL(0, 0, 16) // "QWebSpellChecker"

    },
    "QWebSpellChecker"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QWebSpellChecker[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QWebSpellChecker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject QWebSpellChecker::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_QWebSpellChecker.data,
    qt_meta_data_QWebSpellChecker,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QWebSpellChecker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QWebSpellChecker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QWebSpellChecker.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QWebSpellChecker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
