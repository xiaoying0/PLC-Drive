#ifndef ANALYSISDATALIB_GLOBAL_H
#define ANALYSISDATALIB_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(ANALYSISDATALIB_LIBRARY)
#  define ANALYSISDATALIBSHARED_EXPORT Q_DECL_EXPORT
#else
#  define ANALYSISDATALIBSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // ANALYSISDATALIB_GLOBAL_H
