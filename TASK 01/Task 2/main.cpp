#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

void object(){

    glBegin(GL_POLYGON);
	glColor3f(1.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.0, 0.0);
	glVertex2f(12.0, 0.0);
	glVertex2f(9.0, 8.0);
	glVertex2f(3.0, 8.0);

	glEnd();
}

void display() {
	glClearColor(1.0, 1.0, 1.0, 1.0); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)


    object();

	glFlush();
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("OpenGL Setup Test"); // Create a window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	gluOrtho2D(-20,20,-20,20);
	glutMainLoop();           // Enter the event-processing loop

	return 0;
}

