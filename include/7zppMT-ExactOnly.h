#pragma once
#include "7zpp.h"
#define   LIBPATH_LIB7Z(p,f)   p##f 
#if defined(_DEBUG)
#pragma   comment(lib,LIBPATH_LIB7Z(__FILE__,   "/../../lib/Debug/lib7zMT-ExactOnly.lib")) 
#elif defined(PGO)
#pragma   comment(lib,LIBPATH_LIB7Z(__FILE__,   "/../../lib/PGO/lib7zMT-ExactOnly.lib")) 
#else
#pragma   comment(lib,LIBPATH_LIB7Z(__FILE__,   "/../../lib/Release/lib7zMT-ExactOnly.lib")) 
#endif
#undef LIBPATH_LIB7Z
