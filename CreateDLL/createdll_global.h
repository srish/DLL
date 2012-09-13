#ifndef CREATEDLL_GLOBAL_H
#define CREATEDLL_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(CREATEDLL_LIBRARY)
#  define CREATEDLLSHARED_EXPORT Q_DECL_EXPORT
#else
#  define CREATEDLLSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // CREATEDLL_GLOBAL_H
