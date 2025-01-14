#include <GLFW/glfw3.h>

int main(void)
{
    GLFWwindow* window;

    /* Initialize the library */
    if (!glfwInit())
        return -1;

    /* Create a windowed mode window and its OpenGL context */
    window = glfwCreateWindow(640, 480, "Angelo Joaquin Ramos Gabriel", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    /* Make the window's context current */
    glfwMakeContextCurrent(window);

    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window))
    {
        /* Render here */
        glClear(GL_COLOR_BUFFER_BIT);

        //GitHub Test

        glBegin(GL_QUADS);
        glVertex2f(-0.4f, 0.7f);
        glVertex2f(-0.2f, 1);
        glVertex2f(0.2f, 1);
        glVertex2f(0.4f, 0.7f);
        glEnd();

        glBegin(GL_QUADS);
        glVertex2f(-0.4f, 0.3f);
        glVertex2f(-0.4f, 0.7f);
        glVertex2f(0.4f, 0.7f);
        glVertex2f(0.4f, 0.3f);
        glEnd();

        glBegin(GL_QUADS);
        glVertex2f(-0.2f, 0);
        glVertex2f(-0.4f, 0.3f);
        glVertex2f(0.4f, 0.3f);
        glVertex2f(0.2f, 0);
        glEnd();


        

        /* Swap front and back buffers */
        glfwSwapBuffers(window);

        /* Poll for and process events */
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}