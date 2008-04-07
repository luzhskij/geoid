/****************************************************************************
** Meta object code from reading C++ file 'newgrid.h'
**
** Created: Mon Apr 7 16:19:21 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../newgrid.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'newgrid.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_NewGrid[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x08,
      35,    8,    8,    8, 0x08,
      61,    8,    8,    8, 0x08,
      90,    8,    8,    8, 0x08,
     119,    8,    8,    8, 0x08,
     137,    8,    8,    8, 0x08,
     155,    8,    8,    8, 0x08,
     173,    8,    8,    8, 0x08,
     190,    8,    8,    8, 0x08,
     207,    8,    8,    8, 0x08,
     227,    8,    8,    8, 0x08,
     247,    8,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_NewGrid[] = {
    "NewGrid\0\0on_createButton_clicked()\0"
    "on_importButton_clicked()\0"
    "on_radioImport_toggled(bool)\0"
    "on_radioCreate_toggled(bool)\0"
    "on_ComboChanged()\0defineXCellSize()\0"
    "defineYCellSize()\0on_xSizeEdited()\0"
    "on_ySizeEdited()\0finishedXCellSize()\0"
    "finishedYCellSize()\0onAccepted()\0"
};

const QMetaObject NewGrid::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_NewGrid,
      qt_meta_data_NewGrid, 0 }
};

const QMetaObject *NewGrid::metaObject() const
{
    return &staticMetaObject;
}

void *NewGrid::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_NewGrid))
	return static_cast<void*>(const_cast< NewGrid*>(this));
    return QDialog::qt_metacast(_clname);
}

int NewGrid::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_createButton_clicked(); break;
        case 1: on_importButton_clicked(); break;
        case 2: on_radioImport_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: on_radioCreate_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: on_ComboChanged(); break;
        case 5: defineXCellSize(); break;
        case 6: defineYCellSize(); break;
        case 7: on_xSizeEdited(); break;
        case 8: on_ySizeEdited(); break;
        case 9: finishedXCellSize(); break;
        case 10: finishedYCellSize(); break;
        case 11: onAccepted(); break;
        }
        _id -= 12;
    }
    return _id;
}
