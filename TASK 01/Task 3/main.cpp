#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

void Axis(){

    glBegin(GL_LINES);

	glColor3f(0.0f, 0.0f, 0.0f); // Black color
	glVertex2f(-16.0, 0.0);
	glVertex2f(16.0, 0.0);
	glVertex2f(0.0, 16.0);
	glVertex2f(0.0, -16.0);

	glEnd();

}

void Rectangle(){

    glBegin(GL_POLYGON);

	glColor3f(1.0f, 0.0f, 0.0f);

	glVertex2f(-12.0, 4.0);
	glVertex2f(-4.0, 4.0);
	glVertex2f(-4.0, 12.0);
	glVertex2f(-12.0, 12.0);

	glEnd();
}

void Triangle1(){

    glBegin(GL_POLYGON);

	glColor3ub(127, 0.0, 255);

	glVertex2f(-4.0, -12.0);
	glVertex2f(-4.0, -4.0);
	glVertex2f(-12.0,-8.0);

	glEnd();

}

void Triangle2(){

    glBegin(GL_POLYGON);

	glColor3ub(255, 255, 0);

	glVertex2f(4.0, -9.0);
	glVertex2f(12.0, -9.0);
	glVertex2f(8.0,-4.0);

	glEnd();

}

void Arrow(){

    glBegin(GL_POLYGON);

	glColor3ub(0, 153, 0);

	glVertex2f(4.0, 7.0);
	glVertex2f(12.0, 7.0);
	glVertex2f(12.0, 9.0);
	glVertex2f(4.0, 9.0);

	glEnd();


    glBegin(GL_POLYGON);

	glColor3ub(0, 153, 0);

	glVertex2f(12.0, 5.0);
	glVertex2f(16.0, 8.0);
	glVertex2f(12.0, 11.0);

	glEnd();

}

void display() {
	glClearColor(1.0, 1.0, 1.0, 1.0); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)


    Axis();
    Rectangle();
    Triangle1();
    Triangle2();
    Arrow();

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

