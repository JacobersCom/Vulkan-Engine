#pragma once

#include "KOSWindow.hpp"

class App
{
public:

	static constexpr int WIDTH = 800;
	static constexpr int HEIGHT = 600;

	void run();

private:

	KOS::KOSWindow KOSWindow{ "KOS-Engine",WIDTH, HEIGHT };
};