#pragma once
#include "Core.h"

namespace Hazel
{
	class HAZEL_API Application // Fix __declspec(dllexport) macro because it is bugged
	{
	public:
		Application();
		virtual ~Application();
		void Run();
	};

	// Will be defined in client
	Application* CreateApplication();
}



