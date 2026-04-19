#include "KOSWindow.hpp"

namespace KOS
{
	KOSWindow::KOSWindow(std::string windowName, int w, int h)
		: WindowName(windowName), width(w), height(h)
	{
		InitWindow();
	}

	KOSWindow::~KOSWindow()
	{
		//deletes pointer to window
		glfwDestroyWindow(window);

		//Frees all allocated glfw resources
		glfwTerminate();
	}

	void KOSWindow::InitWindow()
	{
		//Init glfw
		glfwInit();
		//Tell glfw not to make a openGL context
		glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
		//Disable resizing
		glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

		//Creates a glfw window
		window = glfwCreateWindow(width, height, WindowName.c_str(), nullptr, nullptr);
	}


}