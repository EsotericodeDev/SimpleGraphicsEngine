#include "WindowInit.hpp"

GLFWwindow* init_window(unsigned int SCR_WIDTH, unsigned int SCR_HEIGHT) {
	// Set hints for window creation
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	// Create the window
	GLFWwindow* window = glfwCreateWindow(800, 600, "Simple Graphics Engine", nullptr, nullptr);

	return window;
}