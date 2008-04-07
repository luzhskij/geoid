/****************************************************************************
** Meta object code from reading C++ file 'modeler.h'
**
** Created: Mon Apr 7 16:18:27 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../modeler.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'modeler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_Modeler[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      15,    9,    8,    8, 0x08,
      38,    8,    8,    8, 0x08,
      67,    8,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Modeler[] = {
    "Modeler\0\0index\0zScaleChanged(QString)\0"
    "on_newGridAction_triggered()\0"
    "on_actionAdd_wells_triggered()\0"
};

const QMetaObject Modeler::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Modeler,
      qt_meta_data_Modeler, 0 }
};

const QMetaObject *Modeler::metaObject() const
{
    return &staticMetaObject;
}

void *Modeler::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Modeler))
	return static_cast<void*>(const_cast< Modeler*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Modeler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: zScaleChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: on_newGridAction_triggered(); break;
        case 2: on_actionAdd_wells_triggered(); break;
        }
        _id -= 3;
    }
    return _id;
}
