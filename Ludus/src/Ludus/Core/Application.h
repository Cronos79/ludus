#pragma once
#include "Ludus/Core/Base.h"
#include "Ludus/Events/Event.h"
#include "Ludus/Events/ApplicationEvent.h"

int main(int argc, char** argv);

namespace Ludus
{
	struct ApplicationCommandLineArgs
	{
		int Count = 0;
		char** Args = nullptr;

		const char* operator[](int index) const
		{
			LD_CORE_ASSERT(index < Count);
			return Args[index];
		}
	};

	struct ApplicationSpecification
	{
		std::string Name = "Hazel Application";
		std::string WorkingDirectory;
		ApplicationCommandLineArgs CommandLineArgs;
	};

	class LUDUS_API Application
	{
	public:
		Application(const ApplicationSpecification& specification);
		virtual ~Application();

	private:
		void Run();

	private:
		ApplicationSpecification m_Specification;

		static Application* s_Instance;
		friend int ::main(int argc, char** argv);
	};

	// To be defined in CLIENT
	Application* CreateApplication(ApplicationCommandLineArgs args);
}
