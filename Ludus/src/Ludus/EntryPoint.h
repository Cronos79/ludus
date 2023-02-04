#pragma once

#ifdef LD_PLATFORM_WINDOWS

extern Ludus::Application* Ludus::CreateApplication();

int main(int argc, char** argv)
{
	printf("Ludus engine starting\n");
	auto app = Ludus::CreateApplication();
	app->Run();
	delete app;
}
#endif