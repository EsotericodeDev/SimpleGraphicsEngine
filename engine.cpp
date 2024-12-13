#include <GLAD\glad.h>
#include <GLFW\glfw3.h>
#include "WindowInit.hpp"
#include <iostream>

void framebuffer_size_callback(GLFWwindow* window, int width, int height)
{
	glViewport(0, 0, width, height);
}

// Check for Escape
void processInput(GLFWwindow* window)
{
	if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
		glfwSetWindowShouldClose(window, true);
}

int main() {
	
	glfwInit();

	GLFWwindow* window = init_window();

	if (window == nullptr) { // Using nullptr over NULL for type safety
		std::cout << "Failed to create GLFW window." << std::endl;
		glfwTerminate();
		return -1;
	}

	glfwMakeContextCurrent(window);

	if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
		std::cout << "Failed to init GLAD." << std::endl;
		return -1;
	}

	glViewport(0, 0, 800, 600); // Where to open window x, y then resolution

	glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);

	// Render Loop
	while (!glfwWindowShouldClose(window)) {
		
		// Check for Input
		processInput(window);

		// Render
		glClearColor(0.6f, 0.2f, 0.2f, 1.0f);
		glClear(GL_COLOR_BUFFER_BIT);


		// Check and Call Events + Swap Bufffer (See Double Buffering)
		glfwSwapBuffers(window);
		glfwPollEvents();
	}

	glfwTerminate();
	return 0;

}
