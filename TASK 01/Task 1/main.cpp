#include <windows.h>
#include <GL/glut.h>


void Box(){

	glLineWidth(4);

	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);

	glVertex2i(-4,1);
	glVertex2i(-4,6);

	glVertex2i(-4,1);
	glVertex2i(4,1);

	glVertex2i(4,1);
	glVertex2i(4,6);

	glVertex2i(4,6);
	glVertex2i(-4,6);

	glEnd();
}
void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);

    Box();

	glFlush();
}


int main(int argc, char** argv) {

	glutInit(&argc, argv);
	glutInitWindowSize(1920,1080);
	glutCreateWindow("OpenGL Setup Test");
	gluOrtho2D(-15,15,-15,15);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
