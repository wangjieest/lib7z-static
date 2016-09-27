#pragma once
#include <objbase.h>
#define EXTRACT_ONLY
#include "7zpp.h"
#define   LIBPATH_LIB7Z(p,f)   p##f 
#if defined(_DEBUG)
#pragma   comment(lib,LIBPATH_LIB7Z(__FILE__,   "/../../lib/Debug/lib7zMD.lib")) 
#elif defined(PGO)
#pragma   comment(lib,LIBPATH_LIB7Z(__FILE__,   "/../../lib/PGO/lib7zMD.lib")) 
#else
#pragma   comment(lib,LIBPATH_LIB7Z(__FILE__,   "/../../lib/Release/lib7zMD.lib")) 
#endif
#undef LIBPATH_LIB7Z
