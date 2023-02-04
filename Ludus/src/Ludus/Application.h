#pragma once
#include "Core.h"

namespace Ludus
{
	class LUDUS_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// Defined in a client
	Application* CreateApplication();
}
