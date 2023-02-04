#include <Ludus.h>

class SandBox : public Ludus::Application
{
public:
	SandBox()
	{

	}
	~SandBox()
	{

	}
};

Ludus::Application* Ludus::CreateApplication()
{
	return new SandBox();
}