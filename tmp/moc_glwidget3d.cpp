/****************************************************************************
** Meta object code from reading C++ file 'glwidget3d.h'
**
** Created: Mon Apr 7 16:22:00 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../glwidget3d.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'glwidget3d.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_GLWidget3D[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,
      28,   21,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      50,   37,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_GLWidget3D[] = {
    "GLWidget3D\0\0reDraw()\0frames\0FPS(int)\0"
    "width,height\0resizeGL(int,int)\0"
};

const QMetaObject GLWidget3D::staticMetaObject = {
    { &QGLWidget::staticMetaObject, qt_meta_stringdata_GLWidget3D,
      qt_meta_data_GLWidget3D, 0 }
};

const QMetaObject *GLWidget3D::metaObject() const
{
    return &staticMetaObject;
}

void *GLWidget3D::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GLWidget3D))
	return static_cast<void*>(const_cast< GLWidget3D*>(this));
    return QGLWidget::qt_metacast(_clname);
}

int GLWidget3D::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: reDraw(); break;
        case 1: FPS((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: resizeGL((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        }
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void GLWidget3D::reDraw()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void GLWidget3D::FPS(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
