#pragma once

#include "KOSWindow.hpp"
#include "KOSPipeline.hpp"

class App
{
public:

	static constexpr int WIDTH = 800;
	static constexpr int HEIGHT = 600;



	void run();

private:
	//KOSWindow resource initialization
	KOS::KOSWindow KOSWindow{ "KOS-Engine",WIDTH, HEIGHT };
	KOS::KOSPipeline KOSPipeline{ "Shaders/VertexShader.spv", "Shaders/FragmentShader.spv" };
};