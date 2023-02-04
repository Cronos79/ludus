workspace "Ludus"
	architecture "x86_64"
    startproject "Sandbox"

	configurations
	{
		"Debug",
		"Release",
		"Dist"
	}

    flags
	{
		"MultiProcessorCompile"
	}

outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

project "Ludus"
    location "Ludus"
    kind "SharedLib"
    language "C++"
	cppdialect "C++20"
	staticruntime "on"

    targetdir ("bin/" .. outputdir .. "/%{prj.name}")
	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")

    files
    {
        "%{prj.name}/src/**.h",
        "%{prj.name}/src/**.cpp"
    }

    includedirs
    {
        "%{prj.name}/src",
		"%{prj.name}/vendor/spdlog/include"
    }

    filter "system:windows"      
        systemversion "latest"

    defines
    {
        "LD_PLATFORM_WINDOWS",
        "LD_BUILD_DLL"
    }

    postbuildcommands
    {
        ("{COPY} %{cfg.buildtarget.relpath} ../bin/" .. outputdir .. "/Sandbox")
    }

    filter "configurations:Debug"
        defines "LD_DEBUG"
        runtime "Debug"
        symbols "on"

    filter "configurations:Release"
        defines "LD_RELEASE"
        runtime "Release"
        optimize "on"

    filter "configurations:Dist"
        defines "LD_DIST"
        runtime "Release"
        optimize "on"

project "Sandbox"
	location "Sandbox"
	kind "ConsoleApp"
	language "C++"
	cppdialect "C++20"
	staticruntime "on"

	targetdir ("bin/" .. outputdir .. "/%{prj.name}")
	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")

	files
	{
		"%{prj.name}/src/**.h",
		"%{prj.name}/src/**.cpp"
	}

    includedirs
	{
		"Ludus/vendor/spdlog/include",
		"Ludus/src",
		"Ludus/vendor"
	}

    links
	{
		"Ludus"
	}

	filter "system:windows"
		systemversion "latest"

	defines
	{
		"LD_PLATFORM_WINDOWS"
	}
		
	filter "configurations:Debug"
		defines "LD_DEBUG"
		runtime "Debug"
		symbols "on"

	filter "configurations:Release"
		defines "LD_RELEASE"
		runtime "Release"
		optimize "on"

	filter "configurations:Dist"
		defines "LD_DIST"
		runtime "Release"
		optimize "on"