#pragma once

//Includes the vulkan headers along with glfw
#define GLFW_INCLUDE_VULKAN
#include "GLFW/glfw3.h"

#include <string>

namespace KOS
{
	class KOSWindow
	{
	public:

		KOSWindow(std::string windowName, int w, int h);
		~KOSWindow();

		bool ShouldClose() { return glfwWindowShouldClose(window); }

	private:

		void InitWindow();

		int width;
		int height;
		std::string WindowName;

		GLFWwindow* window;
	};
}