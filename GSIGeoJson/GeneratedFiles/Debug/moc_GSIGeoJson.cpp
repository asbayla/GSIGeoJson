/****************************************************************************
** Meta object code from reading C++ file 'GSIGeoJson.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../GSIGeoJson.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GSIGeoJson.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GSIGeoJson_t {
    QByteArrayData data[17];
    char stringdata0[191];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GSIGeoJson_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GSIGeoJson_t qt_meta_stringdata_GSIGeoJson = {
    {
QT_MOC_LITERAL(0, 0, 10), // "GSIGeoJson"
QT_MOC_LITERAL(1, 11, 15), // "jsonDataChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 4), // "data"
QT_MOC_LITERAL(4, 33, 13), // "resultChanged"
QT_MOC_LITERAL(5, 47, 6), // "result"
QT_MOC_LITERAL(6, 54, 12), // "stateChanged"
QT_MOC_LITERAL(7, 67, 5), // "State"
QT_MOC_LITERAL(8, 73, 5), // "state"
QT_MOC_LITERAL(9, 79, 16), // "loadOriginalJson"
QT_MOC_LITERAL(10, 96, 15), // "convertJsonToQt"
QT_MOC_LITERAL(11, 112, 15), // "convertQtToJson"
QT_MOC_LITERAL(12, 128, 24), // "writeToJsonFileAndReload"
QT_MOC_LITERAL(13, 153, 8), // "jsonData"
QT_MOC_LITERAL(14, 162, 4), // "Init"
QT_MOC_LITERAL(15, 167, 10), // "JsonLoaded"
QT_MOC_LITERAL(16, 178, 12) // "ReadyToWrite"

    },
    "GSIGeoJson\0jsonDataChanged\0\0data\0"
    "resultChanged\0result\0stateChanged\0"
    "State\0state\0loadOriginalJson\0"
    "convertJsonToQt\0convertQtToJson\0"
    "writeToJsonFileAndReload\0jsonData\0"
    "Init\0JsonLoaded\0ReadyToWrite"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GSIGeoJson[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       3,   62, // properties
       1,   74, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       4,    1,   52,    2, 0x06 /* Public */,
       6,    1,   55,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   58,    2, 0x0a /* Public */,
      10,    0,   59,    2, 0x0a /* Public */,
      11,    0,   60,    2, 0x0a /* Public */,
      12,    0,   61,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, 0x80000000 | 7,    8,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      13, QMetaType::QString, 0x00495103,
       5, QMetaType::QString, 0x00495103,
       8, 0x80000000 | 7, 0x0049510b,

 // properties: notify_signal_id
       0,
       1,
       2,

 // enums: name, flags, count, data
       7, 0x0,    3,   78,

 // enum data: key, value
      14, uint(GSIGeoJson::Init),
      15, uint(GSIGeoJson::JsonLoaded),
      16, uint(GSIGeoJson::ReadyToWrite),

       0        // eod
};

void GSIGeoJson::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GSIGeoJson *_t = static_cast<GSIGeoJson *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->jsonDataChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->resultChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->stateChanged((*reinterpret_cast< State(*)>(_a[1]))); break;
        case 3: _t->loadOriginalJson(); break;
        case 4: _t->convertJsonToQt(); break;
        case 5: _t->convertQtToJson(); break;
        case 6: _t->writeToJsonFileAndReload(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GSIGeoJson::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GSIGeoJson::jsonDataChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GSIGeoJson::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GSIGeoJson::resultChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (GSIGeoJson::*)(State );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GSIGeoJson::stateChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        GSIGeoJson *_t = static_cast<GSIGeoJson *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->jsonData(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->result(); break;
        case 2: *reinterpret_cast< State*>(_v) = _t->state(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        GSIGeoJson *_t = static_cast<GSIGeoJson *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setJsonData(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setResult(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setState(*reinterpret_cast< State*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject GSIGeoJson::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_GSIGeoJson.data,
      qt_meta_data_GSIGeoJson,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *GSIGeoJson::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GSIGeoJson::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GSIGeoJson.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int GSIGeoJson::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void GSIGeoJson::jsonDataChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GSIGeoJson::resultChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GSIGeoJson::stateChanged(State _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
