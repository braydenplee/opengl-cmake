#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include <iostream>
#include <string>
#include <format>

static void error_callback(int error, const char* description) {
	std::cerr << std::format("errno {}: {}\n", error, std::string_view{description});
	std::exit(1);
}

int main() {

	glfwSetErrorCallback(error_callback);

	if (!glfwInit()) {
		std::cerr << "glfinit failed\n";
		return 1;
	}

	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
	glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
	return 0;
}
