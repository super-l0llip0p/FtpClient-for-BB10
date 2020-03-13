/****************************************************************************
** Meta object code from reading C++ file 'ProgressDialogController.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/ProgressDialogController.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ProgressDialogController.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ProgressDialogController[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       2,   34, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      26,   25,   25,   25, 0x05,
      44,   25,   25,   25, 0x05,
      63,   25,   25,   25, 0x05,

 // methods: signature, parameters, type, tag, flags
      74,   25,   25,   25, 0x02,

 // properties: name, type, flags
      89,   83, 0x87495001,
     106,   98, 0x0a495001,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

static const char qt_meta_stringdata_ProgressDialogController[] = {
    "ProgressDialogController\0\0progressChanged()\0"
    "labelTextChanged()\0canceled()\0cancel()\0"
    "float\0progress\0QString\0labelText\0"
};

void ProgressDialogController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ProgressDialogController *_t = static_cast<ProgressDialogController *>(_o);
        switch (_id) {
        case 0: _t->progressChanged(); break;
        case 1: _t->labelTextChanged(); break;
        case 2: _t->canceled(); break;
        case 3: _t->cancel(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ProgressDialogController::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ProgressDialogController::staticMetaObject = {
    { &DialogController::staticMetaObject, qt_meta_stringdata_ProgressDialogController,
      qt_meta_data_ProgressDialogController, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ProgressDialogController::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ProgressDialogController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ProgressDialogController::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ProgressDialogController))
        return static_cast<void*>(const_cast< ProgressDialogController*>(this));
    return DialogController::qt_metacast(_clname);
}

int ProgressDialogController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DialogController::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = progress(); break;
        case 1: *reinterpret_cast< QString*>(_v) = labelText(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ProgressDialogController::progressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void ProgressDialogController::labelTextChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void ProgressDialogController::canceled()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
