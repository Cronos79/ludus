#pragma once

#ifdef LD_PLATFORM_WINDOWS
	#ifdef LD_BUILD_DLL
		#define LUDUS_API __declspec(dllexport)
	#else
		#define LUDUS_API __declspec(dllimport)
	#endif // LD_BUILD_DLL
#else
	#error Ludus only supports Windows!
#endif