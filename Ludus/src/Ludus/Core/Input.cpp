#include "ldpch.h"
#include "Ludus/Core/Input.h"
#ifdef LD_PLATFORM_WINDOWS
#include "Platform/Windows/WindowsInput.h"
#endif

#ifdef HZ_PLATFORM_WINDOWS
#include "Platform/Windows/WindowsInput.h"
#endif

namespace Ludus{

	Scope<Input> Input::s_Instance = Input::Create();

	Scope<Input> Input::Create()
	{
#ifdef LD_PLATFORM_WINDOWS
		return CreateScope<WindowsInput>();
#else
		LD_CORE_ASSERT(false, "Unknown platform!");
		return nullptr;
#endif
	}
}