/****************************************************************************
** Meta object code from reading C++ file 'FtpDownloader.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/FtpDownloader.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FtpDownloader.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FtpDownloader[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      24,   14, // methods
      10,  134, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x05,
      33,   14,   14,   14, 0x05,
      51,   14,   14,   14, 0x05,
      69,   14,   14,   14, 0x05,
      90,   14,   14,   14, 0x05,
     112,   14,   14,   14, 0x05,
     146,   14,   14,   14, 0x05,
     172,   14,   14,   14, 0x05,
     197,   14,   14,   14, 0x05,
     224,   14,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
     255,   14,   14,   14, 0x0a,
     268,   14,   14,   14, 0x0a,
     279,   14,   14,   14, 0x0a,
     298,  289,   14,   14, 0x0a,
     318,   14,   14,   14, 0x0a,
     333,   14,   14,   14, 0x0a,
     365,  355,   14,   14, 0x0a,
     396,  355,  391,   14, 0x0a,
     422,   14,   14,   14, 0x08,
     455,  439,   14,   14, 0x08,
     492,  484,   14,   14, 0x08,
     533,  512,   14,   14, 0x08,
     575,   14,   14,   14, 0x08,
     598,   14,   14,   14, 0x08,

 // properties: name, type, flags
     628,  620, 0x0a495103,
     637,  620, 0x0a495103,
     646,  620, 0x0a495103,
     655,  620, 0x0a495103,
     667,  620, 0x0a495001,
     680,  391, 0x01495001,
     705,  391, 0x01495001,
     722,  391, 0x01495001,
     738,  391, 0x01495001,
     756,  391, 0x01495001,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       6,
       7,
       8,
       9,

       0        // eod
};

static const char qt_meta_stringdata_FtpDownloader[] = {
    "FtpDownloader\0\0hostnameChanged()\0"
    "usernameChanged()\0passwordChanged()\0"
    "statusLabelChanged()\0connectLabelChanged()\0"
    "parentDirectoryAvailableChanged()\0"
    "downloadPossibleChanged()\0"
    "connectPossibleChanged()\0"
    "selectionPossibleChanged()\0"
    "waitIndicatorPossibleChanged()\0"
    "cdToParent()\0cdToRoot()\0refresh()\0"
    "filePath\0uploadFile(QString)\0"
    "downloadFile()\0connectOrDisconnect()\0"
    "indexPath\0processItem(QVariantList)\0"
    "bool\0isDirectory(QVariantList)\0"
    "cancelDownload()\0commandId,error\0"
    "ftpCommandFinished(int,bool)\0urlInfo\0"
    "addToList(QUrlInfo)\0readBytes,totalBytes\0"
    "updateDataTransferProgress(qint64,qint64)\0"
    "enableDownloadButton()\0enableConnectButton()\0"
    "QString\0hostname\0username\0password\0"
    "statusLabel\0connectLabel\0"
    "parentDirectoryAvailable\0downloadPossible\0"
    "connectPossible\0selectionPossible\0"
    "waitIndicatorPossible\0"
};

void FtpDownloader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FtpDownloader *_t = static_cast<FtpDownloader *>(_o);
        switch (_id) {
        case 0: _t->hostnameChanged(); break;
        case 1: _t->usernameChanged(); break;
        case 2: _t->passwordChanged(); break;
        case 3: _t->statusLabelChanged(); break;
        case 4: _t->connectLabelChanged(); break;
        case 5: _t->parentDirectoryAvailableChanged(); break;
        case 6: _t->downloadPossibleChanged(); break;
        case 7: _t->connectPossibleChanged(); break;
        case 8: _t->selectionPossibleChanged(); break;
        case 9: _t->waitIndicatorPossibleChanged(); break;
        case 10: _t->cdToParent(); break;
        case 11: _t->cdToRoot(); break;
        case 12: _t->refresh(); break;
        case 13: _t->uploadFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->downloadFile(); break;
        case 15: _t->connectOrDisconnect(); break;
        case 16: _t->processItem((*reinterpret_cast< const QVariantList(*)>(_a[1]))); break;
        case 17: { bool _r = _t->isDirectory((*reinterpret_cast< const QVariantList(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 18: _t->cancelDownload(); break;
        case 19: _t->ftpCommandFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 20: _t->addToList((*reinterpret_cast< const QUrlInfo(*)>(_a[1]))); break;
        case 21: _t->updateDataTransferProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 22: _t->enableDownloadButton(); break;
        case 23: _t->enableConnectButton(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData FtpDownloader::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FtpDownloader::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_FtpDownloader,
      qt_meta_data_FtpDownloader, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FtpDownloader::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FtpDownloader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FtpDownloader::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FtpDownloader))
        return static_cast<void*>(const_cast< FtpDownloader*>(this));
    return QObject::qt_metacast(_clname);
}

int FtpDownloader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 24)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = hostname(); break;
        case 1: *reinterpret_cast< QString*>(_v) = username(); break;
        case 2: *reinterpret_cast< QString*>(_v) = password(); break;
        case 3: *reinterpret_cast< QString*>(_v) = statusLabel(); break;
        case 4: *reinterpret_cast< QString*>(_v) = connectLabel(); break;
        case 5: *reinterpret_cast< bool*>(_v) = parentDirectoryAvailable(); break;
        case 6: *reinterpret_cast< bool*>(_v) = downloadPossible(); break;
        case 7: *reinterpret_cast< bool*>(_v) = connectPossible(); break;
        case 8: *reinterpret_cast< bool*>(_v) = selectionPossible(); break;
        case 9: *reinterpret_cast< bool*>(_v) = waitIndicatorPossible(); break;
        }
        _id -= 10;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setHostname(*reinterpret_cast< QString*>(_v)); break;
        case 1: setUsername(*reinterpret_cast< QString*>(_v)); break;
        case 2: setPassword(*reinterpret_cast< QString*>(_v)); break;
        case 3: setStatusLabel(*reinterpret_cast< QString*>(_v)); break;
        }
        _id -= 10;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 10;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void FtpDownloader::hostnameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void FtpDownloader::usernameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void FtpDownloader::passwordChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void FtpDownloader::statusLabelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void FtpDownloader::connectLabelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void FtpDownloader::parentDirectoryAvailableChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void FtpDownloader::downloadPossibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void FtpDownloader::connectPossibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}

// SIGNAL 8
void FtpDownloader::selectionPossibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, 0);
}

// SIGNAL 9
void FtpDownloader::waitIndicatorPossibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, 0);
}
QT_END_MOC_NAMESPACE
