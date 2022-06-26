#include <GL/freeglut.h>


void display() {
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);// задаем цвет
	glClear(GL_COLOR_BUFFER_BIT);	     // задаем цвет очистки экрана
	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(-0.5f, -0.5f);
	glVertex2f( 0.5f, -0.5f);
	glVertex2f( 0.5f,  0.5f);
	glVertex2f(-0.5f,  0.5f);
	glEnd();
	glutSwapBuffers();	// переворачваем экран

}


