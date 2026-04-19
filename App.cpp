#include "App.hpp"

void App::run()
{
	//While the window should not close
	while (!KOSWindow.ShouldClose())
	{
		//read for key strokes, clicks and closing the window
		glfwPollEvents();
	}
}