/****************************************************************************
** Resource object code
**
** Created by: The Resource Compiler for Qt version 5.15.2
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

static const unsigned char qt_resource_data[] = {
  // C:/git/marine_mammal_detection/pm_gui/src/qt/pm_gui/pm_gui.qss
  0x0,0x0,0x0,0x41,
  0x51,
  0x47,0x72,0x6f,0x75,0x70,0x42,0x6f,0x78,0xd,0xa,0x7b,0xd,0xa,0x20,0x20,0x20,
  0x20,0x66,0x6f,0x6e,0x74,0x2d,0x77,0x65,0x69,0x67,0x68,0x74,0x3a,0x20,0x62,0x6f,
  0x6c,0x64,0x3b,0xd,0xa,0x20,0x20,0x20,0x20,0x63,0x6f,0x6c,0x6f,0x72,0x3a,0x20,
  0x64,0x61,0x72,0x6b,0x62,0x6c,0x75,0x65,0x3b,0xd,0xa,0x7d,0xd,0xa,0xd,0xa,
  
    // C:/git/marine_mammal_detection/pm_gui/src/qt/pm_gui/sha1.txt
  0x0,0x0,0x0,0xa,
  0x64,
  0x36,0x30,0x64,0x39,0x63,0x65,0x32,0xd,0xa,
  
};

static const unsigned char qt_resource_name[] = {
  // pm_gui.qss
  0x0,0xa,
  0xe,0xb6,0xbe,0x3,
  0x0,0x70,
  0x0,0x6d,0x0,0x5f,0x0,0x67,0x0,0x75,0x0,0x69,0x0,0x2e,0x0,0x71,0x0,0x73,0x0,0x73,
    // sha1.txt
  0x0,0x8,
  0xe,0x44,0x54,0xd4,
  0x0,0x73,
  0x0,0x68,0x0,0x61,0x0,0x31,0x0,0x2e,0x0,0x74,0x0,0x78,0x0,0x74,
  
};

static const unsigned char qt_resource_struct[] = {
  // :
  0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  // :/sha1.txt
  0x0,0x0,0x0,0x1a,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x45,
0x0,0x0,0x1,0x83,0x13,0x59,0x29,0xc,
  // :/pm_gui.qss
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,
0x0,0x0,0x1,0x83,0x13,0x59,0x29,0xa,

};

#ifdef QT_NAMESPACE
#  define QT_RCC_PREPEND_NAMESPACE(name) ::QT_NAMESPACE::name
#  define QT_RCC_MANGLE_NAMESPACE0(x) x
#  define QT_RCC_MANGLE_NAMESPACE1(a, b) a##_##b
#  define QT_RCC_MANGLE_NAMESPACE2(a, b) QT_RCC_MANGLE_NAMESPACE1(a,b)
#  define QT_RCC_MANGLE_NAMESPACE(name) QT_RCC_MANGLE_NAMESPACE2( \
        QT_RCC_MANGLE_NAMESPACE0(name), QT_RCC_MANGLE_NAMESPACE0(QT_NAMESPACE))
#else
#   define QT_RCC_PREPEND_NAMESPACE(name) name
#   define QT_RCC_MANGLE_NAMESPACE(name) name
#endif

#ifdef QT_NAMESPACE
namespace QT_NAMESPACE {
#endif

bool qRegisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);
bool qUnregisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);

#ifdef QT_NAMESPACE
}
#endif

int QT_RCC_MANGLE_NAMESPACE(qInitResources_pm_gui)();
int QT_RCC_MANGLE_NAMESPACE(qInitResources_pm_gui)()
{
    int version = 3;
    QT_RCC_PREPEND_NAMESPACE(qRegisterResourceData)
        (version, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

int QT_RCC_MANGLE_NAMESPACE(qCleanupResources_pm_gui)();
int QT_RCC_MANGLE_NAMESPACE(qCleanupResources_pm_gui)()
{
    int version = 3;
    QT_RCC_PREPEND_NAMESPACE(qUnregisterResourceData)
       (version, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

namespace {
   struct initializer {
       initializer() { QT_RCC_MANGLE_NAMESPACE(qInitResources_pm_gui)(); }
       ~initializer() { QT_RCC_MANGLE_NAMESPACE(qCleanupResources_pm_gui)(); }
   } dummy;
}
