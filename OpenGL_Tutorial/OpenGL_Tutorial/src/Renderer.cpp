#include "Renderer.h"
#include <iostream>

void GLClearError()
{
	while (glGetError() != GL_NO_ERROR);
}

bool GLLogCall(const char* function, const char* file, int line)
{
	while (GLenum Error = glGetError())
	{
		std::cout << "[OpenGL Error] (" << Error << "): " << function <<
			" " << file << ":" << line << std::endl;
		return false;
	}
	return true;
}