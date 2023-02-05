#pragma once

#include "Ludus/Core/Base.h"
#include "Ludus/Core/Application.h"

#ifdef LD_PLATFORM_WINDOWS

extern Ludus::Application* Ludus::CreateApplication(ApplicationCommandLineArgs args);

int main(int argc, char** argv)
{
	//Ludus::Log::Init();

	//LD_PROFILE_BEGIN_SESSION("Startup", "HazelProfile-Startup.json");
	auto app = Ludus::CreateApplication({ argc, argv });
	//LD_PROFILE_END_SESSION();

	//LD_PROFILE_BEGIN_SESSION("Runtime", "HazelProfile-Runtime.json");
	app->Run();
	//LD_PROFILE_END_SESSION();

	//LD_PROFILE_BEGIN_SESSION("Shutdown", "HazelProfile-Shutdown.json");
	delete app;
	//LD_PROFILE_END_SESSION();
}

#endif