#include "KOSPipeline.hpp"

//std
#include <fstream>
#include <stdexcept>
#include <iostream>

namespace KOS
{
	KOSPipeline::KOSPipeline(const std::string& VertexFilePath, const std::string& FragmentFilePath)
	{
		CreateGraphicsPipeline(VertexFilePath, FragmentFilePath);
	}

	std::vector<char> KOSPipeline::ReadFile(const std::string& FilePath)
	{
		//starts the pointer at the end of the file
		std::ifstream File{ FilePath, std::ios::ate | std::ios::binary };

		if (!File.is_open())
		{
			throw std::runtime_error("Failed to open file: " + FilePath);
		}

		//returns the size of the file
		size_t FileSize = static_cast<size_t>(File.tellg());

		std::vector<char> buffer(FileSize);

		//Returns pointer to start of file
		File.seekg(0);

		//Reads the file info into the buffer
		File.read(buffer.data(), FileSize);
		File.close();

		return buffer;
	}

	void KOSPipeline::CreateGraphicsPipeline(const std::string& VertexFilePath, const std::string& FragmentFilePath)
	{
		auto VertCode = ReadFile(VertexFilePath);
		auto FragCode = ReadFile(FragmentFilePath);

		std::cout << "Vert Shader file size: " << VertCode.size() << std::endl;
		std::cout << "Frag Shader file size: " << FragCode.size() << std::endl;
	}
}