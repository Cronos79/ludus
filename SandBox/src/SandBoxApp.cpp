#include <Ludus.h>
#include <Ludus/Core/EntryPoint.h>

class SandBox : public Ludus::Application
{
public:
	SandBox(const Ludus::ApplicationSpecification& specification)
		: Ludus::Application(specification)
	{

	}
	~SandBox()
	{

	}
};

Ludus::Application* Ludus::CreateApplication(Ludus::ApplicationCommandLineArgs args)
{
	ApplicationSpecification spec;
	spec.Name = "Sandbox";
	spec.WorkingDirectory = "../Hazelnut";
	spec.CommandLineArgs = args;

	return new SandBox(spec);
}