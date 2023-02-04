#pragma once
#include <iosfwd>
#include <stdint.h>

namespace Ludus
{
	typedef enum class MouseCode : uint16_t
	{
		// From glfw3.h
		Button0 = 0,
		Button1 = 1,
		Button2 = 2,
		Button3 = 3,
		Button4 = 4,
		Button5 = 5,
		Button6 = 6,
		Button7 = 7,

		ButtonLast = Button7,
		ButtonLeft = Button0,
		ButtonRight = Button1,
		ButtonMiddle = Button2
	} Mouse;

	inline std::ostream& operator<<(std::ostream& os, MouseCode mouseCode)
	{
		os << static_cast<int32_t>(mouseCode);
		return os;
	}
}

#define LD_MOUSE_BUTTON_0      ::Ludus::Mouse::Button0
#define LD_MOUSE_BUTTON_1      ::Ludus::Mouse::Button1
#define LD_MOUSE_BUTTON_2      ::Ludus::Mouse::Button2
#define LD_MOUSE_BUTTON_3      ::Ludus::Mouse::Button3
#define LD_MOUSE_BUTTON_4      ::Ludus::Mouse::Button4
#define LD_MOUSE_BUTTON_5      ::Ludus::Mouse::Button5
#define LD_MOUSE_BUTTON_6      ::Ludus::Mouse::Button6
#define LD_MOUSE_BUTTON_7      ::Ludus::Mouse::Button7
#define LD_MOUSE_BUTTON_LAST   ::Ludus::Mouse::ButtonLast
#define LD_MOUSE_BUTTON_LEFT   ::Ludus::Mouse::ButtonLeft
#define LD_MOUSE_BUTTON_RIGHT  ::Ludus::Mouse::ButtonRight
#define LD_MOUSE_BUTTON_MIDDLE ::Ludus::Mouse::ButtonMiddle