#pragma once

#ifdef LD_PLATFORM_WINDOWS

extern Ludus::Application* Ludus::CreateApplication();

int main(int argc, char** argv)
{
	Ludus::Log::Init();
	LD_CORE_WARN("Initialized logger!");
	LD_TRACE("Initialized logger!");

	auto app = Ludus::CreateApplication();
	app->Run();
	delete app;
}
#endif