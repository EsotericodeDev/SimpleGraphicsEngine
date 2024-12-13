#include <GLAD\glad.h>
#include <GLFW\glfw3.h>
#include <iostream>

int main() {
	glfwInit();

	// Set hints for window creation
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	GLFWwindow* window = glfwCreateWindow(800, 600, "Simple Graphics Engine", nullptr, nullptr);

	if (window == nullptr) { // Using nullptr over NULL for type safety
		std::cout << "Failed to create GLFW window.\n" << std::endl;
		glfwTerminate();
		return -1;
	}

	glfwMakeContextCurrent(window);


}
