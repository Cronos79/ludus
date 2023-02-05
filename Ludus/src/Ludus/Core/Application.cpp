#include "ldpch.h"
#include "Ludus/Core/Application.h"
#include "Ludus/Core/Log.h"

namespace Ludus
{
	Application* Application::s_Instance = nullptr;

	Application::Application(const ApplicationSpecification& specification)
		: m_Specification(specification)
	{

	}

	Application::~Application()
	{

	}

	void Application::Run()
	{
		Ludus::Log::Init();
		LD_CORE_INFO("Starting application!");
		while (true)
		{

		}
	}

}