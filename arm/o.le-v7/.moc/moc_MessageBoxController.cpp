/****************************************************************************
** Meta object code from reading C++ file 'MessageBoxController.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/MessageBoxController.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MessageBoxController.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MessageBoxController[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       4,   44, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   21,   21,   21, 0x05,
      37,   21,   21,   21, 0x05,
      51,   21,   21,   21, 0x05,
      72,   21,   21,   21, 0x05,

 // methods: signature, parameters, type, tag, flags
      93,   21,   21,   21, 0x02,
     110,   21,   21,   21, 0x02,

 // properties: name, type, flags
     135,  127, 0x0a495001,
     141,  127, 0x0a495001,
     146,  127, 0x0a495001,
     158,  127, 0x0a495001,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

       0        // eod
};

static const char qt_meta_stringdata_MessageBoxController[] = {
    "MessageBoxController\0\0titleChanged()\0"
    "textChanged()\0button1TextChanged()\0"
    "button2TextChanged()\0button1Clicked()\0"
    "button2Clicked()\0QString\0title\0text\0"
    "button1Text\0button2Text\0"
};

void MessageBoxController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MessageBoxController *_t = static_cast<MessageBoxController *>(_o);
        switch (_id) {
        case 0: _t->titleChanged(); break;
        case 1: _t->textChanged(); break;
        case 2: _t->button1TextChanged(); break;
        case 3: _t->button2TextChanged(); break;
        case 4: _t->button1Clicked(); break;
        case 5: _t->button2Clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData MessageBoxController::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MessageBoxController::staticMetaObject = {
    { &DialogController::staticMetaObject, qt_meta_stringdata_MessageBoxController,
      qt_meta_data_MessageBoxController, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MessageBoxController::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MessageBoxController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MessageBoxController::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MessageBoxController))
        return static_cast<void*>(const_cast< MessageBoxController*>(this));
    return DialogController::qt_metacast(_clname);
}

int MessageBoxController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DialogController::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = title(); break;
        case 1: *reinterpret_cast< QString*>(_v) = text(); break;
        case 2: *reinterpret_cast< QString*>(_v) = button1Text(); break;
        case 3: *reinterpret_cast< QString*>(_v) = button2Text(); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 4;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void MessageBoxController::titleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void MessageBoxController::textChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void MessageBoxController::button1TextChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void MessageBoxController::button2TextChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
QT_END_MOC_NAMESPACE
