#include "ldpch.h"
#include "Platform/Windows/WindowsInput.h"

namespace Ludus {

	bool WindowsInput::IsKeyPressedImpl(KeyCode key)
	{
	/*	auto window = static_cast<GLFWwindow*>(Application::Get().GetWindow().GetNativeWindow());
		auto state = glfwGetKey(window, static_cast<int32_t>(key));
		return state == GLFW_PRESS || state == GLFW_REPEAT;*/
		return false;
	}

	bool WindowsInput::IsMouseButtonPressedImpl(MouseCode button)
	{
		/*auto window = static_cast<GLFWwindow*>(Application::Get().GetWindow().GetNativeWindow());
		auto state = glfwGetMouseButton(window, static_cast<int32_t>(button));
		return state == GLFW_PRESS;*/
		return false;
	}

	std::pair<float, float> WindowsInput::GetMousePositionImpl()
	{
		/*auto window = static_cast<GLFWwindow*>(Application::Get().GetWindow().GetNativeWindow());
		double xpos, ypos;
		glfwGetCursorPos(window, &xpos, &ypos);*/

		//return { (float)xpos, (float)ypos };

		return { (float)0, (float)0 };
	}

	float WindowsInput::GetMouseXImpl()
	{
		auto [x, y] = GetMousePositionImpl();
		return x;
	}

	float WindowsInput::GetMouseYImpl()
	{
		auto [x, y] = GetMousePositionImpl();
		return y;
	}

}
// #TODO: Add opengl