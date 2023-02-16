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

class Framebuffer
{
public:
	std::vector<VkFramebuffer> swapChainFramebuffers;

	void createFramebuffers(VkDevice device, std::vector<VkImageView> swapChainImageViews, VkExtent2D swapChainExtent, VkRenderPass renderPass);
};