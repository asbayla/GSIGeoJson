#pragma once

#include <QtCore/qglobal.h>

#ifndef BUILD_STATIC
# if defined(GSIGEOJSON_LIB)
#  define GSIGEOJSON_EXPORT Q_DECL_EXPORT
# else
#  define GSIGEOJSON_EXPORT Q_DECL_IMPORT
# endif
#else
# define GSIGEOJSON_EXPORT
#endif
