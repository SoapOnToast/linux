#ifndef WINDOW_H
#define WINDOW_H

#include <stdlib.h>

#define GLFW_INCLUDE_NONE
#include <GLFW/glfw3.h>
#include <GL/gl.h>

static GLFWwindow* window;

int Window_init(int width, int height, char* title);
void Window_update(void (*update)());


int Window_init(int width, int height, char* title)
{
    if (!glfwInit())
    {
	return 0;
    }

    glfwWindowHint(GLFW_RESIZABLE, GL_FALSE);
    window = glfwCreateWindow(width,height,title,NULL, NULL);
    if (!window) {
    	return 0;
    }

    glfwMakeContextCurrent(window);

    return 1;
    //glMatrixMode();
}

#endif //WINDOW.H
