#include <cstdio>

#include <GL/glew.h>
#include <GLFW/glfw3.h>

int main() {
    if (glfwInit() == GLFW_FALSE) {
        std::fprintf(stderr, "Failed to initialize GLFW\n");
        return 1;
    }

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    GLFWwindow* window = glfwCreateWindow(800, 600, "HCICG Lab 1", nullptr, nullptr);
    if (window == nullptr) {
        std::fprintf(stderr, "Failed to create the OpenGL window\n");
        glfwTerminate();
        return 1;
    }

    glfwMakeContextCurrent(window);
    glewExperimental = GL_TRUE;
    if (glewInit() != GLEW_OK) {
        std::fprintf(stderr, "Failed to initialize GLEW\n");
        glfwDestroyWindow(window);
        glfwTerminate();
        return 1;
    }

    std::printf("GL %s on %s\n",
                reinterpret_cast<const char*>(glGetString(GL_VERSION)),
                reinterpret_cast<const char*>(glGetString(GL_RENDERER)));

    while (!glfwWindowShouldClose(window)) {
        glClearColor(0.08f, 0.02f, 0.18f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);

        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwDestroyWindow(window);
    glfwTerminate();
    return 0;
}
