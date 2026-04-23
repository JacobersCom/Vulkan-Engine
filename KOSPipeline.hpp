#pragma once

#include <string>
#include <vector>
namespace KOS
{
	class KOSPipeline
	{
	public:

		KOSPipeline(const std::string& VertexFilePath, const std::string& FragmentFilePath);

	private:

		static std::vector<char> ReadFile(const std::string& FilePath);
		void CreateGraphicsPipeline(const std::string& VertexFilePath, const std::string& FragmentFilePath);
	};
}