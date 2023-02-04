#pragma once
#include <stdint.h>
#include <iosfwd>
namespace Ludus
{
	typedef enum class KeyCode : uint16_t
	{
		// From glfw3.h
		Space = 32,
		Apostrophe = 39, /* ' */
		Comma = 44, /* , */
		Minus = 45, /* - */
		Period = 46, /* . */
		Slash = 47, /* / */

		D0 = 48, /* 0 */
		D1 = 49, /* 1 */
		D2 = 50, /* 2 */
		D3 = 51, /* 3 */
		D4 = 52, /* 4 */
		D5 = 53, /* 5 */
		D6 = 54, /* 6 */
		D7 = 55, /* 7 */
		D8 = 56, /* 8 */
		D9 = 57, /* 9 */

		Semicolon = 59, /* ; */
		Equal = 61, /* = */

		A = 65,
		B = 66,
		C = 67,
		D = 68,
		E = 69,
		F = 70,
		G = 71,
		H = 72,
		I = 73,
		J = 74,
		K = 75,
		L = 76,
		M = 77,
		N = 78,
		O = 79,
		P = 80,
		Q = 81,
		R = 82,
		S = 83,
		T = 84,
		U = 85,
		V = 86,
		W = 87,
		X = 88,
		Y = 89,
		Z = 90,

		LeftBracket = 91,  /* [ */
		Backslash = 92,  /* \ */
		RightBracket = 93,  /* ] */
		GraveAccent = 96,  /* ` */

		World1 = 161, /* non-US #1 */
		World2 = 162, /* non-US #2 */

		/* Function keys */
		Escape = 256,
		Enter = 257,
		Tab = 258,
		Backspace = 259,
		Insert = 260,
		Delete = 261,
		Right = 262,
		Left = 263,
		Down = 264,
		Up = 265,
		PageUp = 266,
		PageDown = 267,
		Home = 268,
		End = 269,
		CapsLock = 280,
		ScrollLock = 281,
		NumLock = 282,
		PrintScreen = 283,
		Pause = 284,
		F1 = 290,
		F2 = 291,
		F3 = 292,
		F4 = 293,
		F5 = 294,
		F6 = 295,
		F7 = 296,
		F8 = 297,
		F9 = 298,
		F10 = 299,
		F11 = 300,
		F12 = 301,
		F13 = 302,
		F14 = 303,
		F15 = 304,
		F16 = 305,
		F17 = 306,
		F18 = 307,
		F19 = 308,
		F20 = 309,
		F21 = 310,
		F22 = 311,
		F23 = 312,
		F24 = 313,
		F25 = 314,

		/* Keypad */
		KP0 = 320,
		KP1 = 321,
		KP2 = 322,
		KP3 = 323,
		KP4 = 324,
		KP5 = 325,
		KP6 = 326,
		KP7 = 327,
		KP8 = 328,
		KP9 = 329,
		KPDecimal = 330,
		KPDivide = 331,
		KPMultiply = 332,
		KPSubtract = 333,
		KPAdd = 334,
		KPEnter = 335,
		KPEqual = 336,

		LeftShift = 340,
		LeftControl = 341,
		LeftAlt = 342,
		LeftSuper = 343,
		RightShift = 344,
		RightControl = 345,
		RightAlt = 346,
		RightSuper = 347,
		Menu = 348
	} Key;

	inline std::ostream& operator<<(std::ostream& os, KeyCode keyCode)
	{
		os << static_cast<int32_t>(keyCode);
		return os;
	}
}

// From glfw3.h
#define LD_KEY_SPACE           ::Ludus::Key::Space
#define LD_KEY_APOSTROPHE      ::Ludus::Key::Apostrophe    /* ' */
#define LD_KEY_COMMA           ::Ludus::Key::Comma         /* , */
#define LD_KEY_MINUS           ::Ludus::Key::Minus         /* - */
#define LD_KEY_PERIOD          ::Ludus::Key::Period        /* . */
#define LD_KEY_SLASH           ::Ludus::Key::Slash         /* / */
#define LD_KEY_0               ::Ludus::Key::D0
#define LD_KEY_1               ::Ludus::Key::D1
#define LD_KEY_2               ::Ludus::Key::D2
#define LD_KEY_3               ::Ludus::Key::D3
#define LD_KEY_4               ::Ludus::Key::D4
#define LD_KEY_5               ::Ludus::Key::D5
#define LD_KEY_6               ::Ludus::Key::D6
#define LD_KEY_7               ::Ludus::Key::D7
#define LD_KEY_8               ::Ludus::Key::D8
#define LD_KEY_9               ::Ludus::Key::D9
#define LD_KEY_SEMICOLON       ::Ludus::Key::Semicolon     /* ; */
#define LD_KEY_EQUAL           ::Ludus::Key::Equal         /* = */
#define LD_KEY_A               ::Ludus::Key::A
#define LD_KEY_B               ::Ludus::Key::B
#define LD_KEY_C               ::Ludus::Key::C
#define LD_KEY_D               ::Ludus::Key::D
#define LD_KEY_E               ::Ludus::Key::E
#define LD_KEY_F               ::Ludus::Key::F
#define LD_KEY_G               ::Ludus::Key::G
#define LD_KEY_H               ::Ludus::Key::H
#define LD_KEY_I               ::Ludus::Key::I
#define LD_KEY_J               ::Ludus::Key::J
#define LD_KEY_K               ::Ludus::Key::K
#define LD_KEY_L               ::Ludus::Key::L
#define LD_KEY_M               ::Ludus::Key::M
#define LD_KEY_N               ::Ludus::Key::N
#define LD_KEY_O               ::Ludus::Key::O
#define LD_KEY_P               ::Ludus::Key::P
#define LD_KEY_Q               ::Ludus::Key::Q
#define LD_KEY_R               ::Ludus::Key::R
#define LD_KEY_S               ::Ludus::Key::S
#define LD_KEY_T               ::Ludus::Key::T
#define LD_KEY_U               ::Ludus::Key::U
#define LD_KEY_V               ::Ludus::Key::V
#define LD_KEY_W               ::Ludus::Key::W
#define LD_KEY_X               ::Ludus::Key::X
#define LD_KEY_Y               ::Ludus::Key::Y
#define LD_KEY_Z               ::Ludus::Key::Z
#define LD_KEY_LEFT_BRACKET    ::Ludus::Key::LeftBracket   /* [ */
#define LD_KEY_BACKSLASH       ::Ludus::Key::Backslash     /* \ */
#define LD_KEY_RIGHT_BRACKET   ::Ludus::Key::RightBracket  /* ] */
#define LD_KEY_GRAVE_ACCENT    ::Ludus::Key::GraveAccent   /* ` */
#define LD_KEY_WORLD_1         ::Ludus::Key::World1        /* non-US #1 */
#define LD_KEY_WORLD_2         ::Ludus::Key::World2        /* non-US #2 */

/* Function keys */
#define LD_KEY_ESCAPE          ::Ludus::Key::Escape
#define LD_KEY_ENTER           ::Ludus::Key::Enter
#define LD_KEY_TAB             ::Ludus::Key::Tab
#define LD_KEY_BACKSPACE       ::Ludus::Key::Backspace
#define LD_KEY_INSERT          ::Ludus::Key::Insert
#define LD_KEY_DELETE          ::Ludus::Key::Delete
#define LD_KEY_RIGHT           ::Ludus::Key::Right
#define LD_KEY_LEFT            ::Ludus::Key::Left
#define LD_KEY_DOWN            ::Ludus::Key::Down
#define LD_KEY_UP              ::Ludus::Key::Up
#define LD_KEY_PAGE_UP         ::Ludus::Key::PageUp
#define LD_KEY_PAGE_DOWN       ::Ludus::Key::PageDown
#define LD_KEY_HOME            ::Ludus::Key::Home
#define LD_KEY_END             ::Ludus::Key::End
#define LD_KEY_CAPS_LOCK       ::Ludus::Key::CapsLock
#define LD_KEY_SCROLL_LOCK     ::Ludus::Key::ScrollLock
#define LD_KEY_NUM_LOCK        ::Ludus::Key::NumLock
#define LD_KEY_PRINT_SCREEN    ::Ludus::Key::PrintScreen
#define LD_KEY_PAUSE           ::Ludus::Key::Pause
#define LD_KEY_F1              ::Ludus::Key::F1
#define LD_KEY_F2              ::Ludus::Key::F2
#define LD_KEY_F3              ::Ludus::Key::F3
#define LD_KEY_F4              ::Ludus::Key::F4
#define LD_KEY_F5              ::Ludus::Key::F5
#define LD_KEY_F6              ::Ludus::Key::F6
#define LD_KEY_F7              ::Ludus::Key::F7
#define LD_KEY_F8              ::Ludus::Key::F8
#define LD_KEY_F9              ::Ludus::Key::F9
#define LD_KEY_F10             ::Ludus::Key::F10
#define LD_KEY_F11             ::Ludus::Key::F11
#define LD_KEY_F12             ::Ludus::Key::F12
#define LD_KEY_F13             ::Ludus::Key::F13
#define LD_KEY_F14             ::Ludus::Key::F14
#define LD_KEY_F15             ::Ludus::Key::F15
#define LD_KEY_F16             ::Ludus::Key::F16
#define LD_KEY_F17             ::Ludus::Key::F17
#define LD_KEY_F18             ::Ludus::Key::F18
#define LD_KEY_F19             ::Ludus::Key::F19
#define LD_KEY_F20             ::Ludus::Key::F20
#define LD_KEY_F21             ::Ludus::Key::F21
#define LD_KEY_F22             ::Ludus::Key::F22
#define LD_KEY_F23             ::Ludus::Key::F23
#define LD_KEY_F24             ::Ludus::Key::F24
#define LD_KEY_F25             ::Ludus::Key::F25

/* Keypad */
#define LD_KEY_KP_0            ::Ludus::Key::KP0
#define LD_KEY_KP_1            ::Ludus::Key::KP1
#define LD_KEY_KP_2            ::Ludus::Key::KP2
#define LD_KEY_KP_3            ::Ludus::Key::KP3
#define LD_KEY_KP_4            ::Ludus::Key::KP4
#define LD_KEY_KP_5            ::Ludus::Key::KP5
#define LD_KEY_KP_6            ::Ludus::Key::KP6
#define LD_KEY_KP_7            ::Ludus::Key::KP7
#define LD_KEY_KP_8            ::Ludus::Key::KP8
#define LD_KEY_KP_9            ::Ludus::Key::KP9
#define LD_KEY_KP_DECIMAL      ::Ludus::Key::KPDecimal
#define LD_KEY_KP_DIVIDE       ::Ludus::Key::KPDivide
#define LD_KEY_KP_MULTIPLY     ::Ludus::Key::KPMultiply
#define LD_KEY_KP_SUBTRACT     ::Ludus::Key::KPSubtract
#define LD_KEY_KP_ADD          ::Ludus::Key::KPAdd
#define LD_KEY_KP_ENTER        ::Ludus::Key::KPEnter
#define LD_KEY_KP_EQUAL        ::Ludus::Key::KPEqual

#define LD_KEY_LEFT_SHIFT      ::Ludus::Key::LeftShift
#define LD_KEY_LEFT_CONTROL    ::Ludus::Key::LeftControl
#define LD_KEY_LEFT_ALT        ::Ludus::Key::LeftAlt
#define LD_KEY_LEFT_SUPER      ::Ludus::Key::LeftSuper
#define LD_KEY_RIGHT_SHIFT     ::Ludus::Key::RightShift
#define LD_KEY_RIGHT_CONTROL   ::Ludus::Key::RightControl
#define LD_KEY_RIGHT_ALT       ::Ludus::Key::RightAlt
#define LD_KEY_RIGHT_SUPER     ::Ludus::Key::RightSuper
#define LD_KEY_MENU            ::Ludus::Key::Menu