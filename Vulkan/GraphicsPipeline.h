#pragma once
#define VK_USE_PLATFORM_WIN32_KHR
#define GLFW_INCLUDE_VULKAN// it replace #include <vulkan/vulkan.h>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>
#include <iostream>
#include <stdexcept>
#include <cstdlib>
#include <optional>
#include <vector>
#include <set>
#include <cstdint>
#include <limits> 
#include <algorithm>
#include <fstream>

class GraphicsPipeline {
private:
	static std::vector<char> readFile(const std::string& filename);
	VkShaderModule createShaderModule(const std::vector<char>& code, VkDevice device);
public:
	VkPipeline graphicsPipeline;

	VkPipelineLayout pipelineLayout;
	VkRenderPass renderPass;

	void createGraphicsPipeline(VkDevice device, VkExtent2D swapChainExtent);
	void createRenderPasses(VkDevice device, VkFormat swapChainImageFormat);
};

