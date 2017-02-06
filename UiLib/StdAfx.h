// stdafx.h : include file for standard system include files,
//  or project specific include files that are used frequently, but
//      are changed infrequently
//

#if !defined(AFX_STDAFX_H__E30B2003_188B_4EB4_AB99_3F3734D6CE6C__INCLUDED_)
#define AFX_STDAFX_H__E30B2003_188B_4EB4_AB99_3F3734D6CE6C__INCLUDED_

#pragma once

#ifdef __GNUC__
// ��ô��û�ҵ�min��max��ͷ�ļ�-_-
#ifndef min
#define min(a,b) (((a) < (b)) ? (a) : (b))
#endif
#ifndef max
#define max(a,b) (((a) > (b)) ? (a) : (b))
#endif
#endif

#ifndef __FILET__
#define __UILIB_STR2WSTR(str)	L##str
#define _UILIB_STR2WSTR(str)	__UILIB_STR2WSTR(str)
#ifdef _UNICODE
#define __FILET__	_UILIB_STR2WSTR(__FILE__)
#define __FUNCTIONT__	_UILIB_STR2WSTR(__FUNCTION__)
#else
#define __FILET__	__FILE__
#define __FUNCTIONT__	__FUNCTION__
#endif
#endif

#ifndef _CRT_SECURE_NO_DEPRECATE
#define _CRT_SECURE_NO_DEPRECATE
#endif
// Remove pointless warning messages
#ifdef _MSC_VER
#pragma warning (disable : 4511) // copy operator could not be generated
#pragma warning (disable : 4512) // assignment operator could not be generated
#pragma warning (disable : 4702) // unreachable code (bugs in Microsoft's STL)
#pragma warning (disable : 4786) // identifier was truncated
#pragma warning (disable : 4996) // function or variable may be unsafe (deprecated)
#pragma warning (disable : 4251)
#pragma warning (disable : 4244)
#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS // eliminate deprecation warnings for VS2005
#endif
#endif // _MSC_VER
#ifdef __BORLANDC__
#pragma option -w-8027		   // function not expanded inline
#endif

// Required for VS 2008 (fails on XP and Win2000 without this fix)
#ifndef _WIN32_WINNT
#define _WIN32_WINNT 0x0500
#endif


#include <olectl.h>
#include "UIlib.h"

#define lengthof(x) (sizeof(x)/sizeof(*x))
#define MAX max
#define MIN min
#define CLAMP(x,a,b) (MIN(b,MAX(a,x)))

#ifndef SAFE_DELETEOBJ
#define SAFE_DELETEOBJ(x) if(x) {::DeleteObject(x);x=NULL;}
#endif

#ifndef SAFE_DELETEDC
#define SAFE_DELETEDC(x) if(x) {::DeleteDC(x);x=NULL;}
#endif

#ifndef SAFE_DELETE
#define SAFE_DELETE(x) if(x){delete x;x=NULL;} 
#endif

#ifndef SAFE_DELETEARRY
#define SAFE_DELETEARRY(x) if(x){delete []x; x=NULL;}
#endif


//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STDAFX_H__E30B2003_188B_4EB4_AB99_3F3734D6CE6C__INCLUDED_)