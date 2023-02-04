#pragma once
#include <memory>

#ifdef LD_PLATFORM_WINDOWS
	#ifdef LD_BUILD_DLL
		#define LUDUS_API __declspec(dllexport)
	#else
		#define LUDUS_API __declspec(dllimport)
	#endif // LD_BUILD_DLL
#else
	#error Ludus only supports Windows!
#endif

#define BIT(x) (1 << x)

namespace Ludus {

	template<typename T>
	using Scope = std::unique_ptr<T>;
	template<typename T, typename ... Args>
	constexpr Scope<T> CreateScope(Args&& ... args)
	{
		return std::make_unique<T>(std::forward<Args>(args)...);
	}

	template<typename T>
	using Ref = std::shared_ptr<T>;
	template<typename T, typename ... Args>
	constexpr Ref<T> CreateRef(Args&& ... args)
	{
		return std::make_shared<T>(std::forward<Args>(args)...);
	}

}