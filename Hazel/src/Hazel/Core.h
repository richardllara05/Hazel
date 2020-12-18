#pragma once

/* BUG: Cannot haved nested ifdef with __declspec */

//#ifdef HZ_PLATFORM_WINDOWS
//	#ifdef HZ_BUILD_DLL
//		#define HAZEL_API  __declspec(dllexport)
//	#else
//		#define HAZEL_API  __declspec(dllimport)
//	#endif
//#endif

#ifdef HZ_BUILD_DLL
	#define HAZEL_API    __declspec(dllexport)
#else
	#define HAZEL_API    __declspec(dllimport)
#endif