#include "func.h"

int main(int argc, char *argv[]) {
	glutInit(&argc, argv);			      // инициализаци глут
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA); // использовать двойную буферизацию
	glutInitWindowSize(1200,800);                  // создаем окно
	glutInitWindowPosition(100,100);	// расположение окна
	glutCreateWindow("Snake");		// имя окна
	glutDisplayFunc(display);	// главная функция
	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(-0.5f, -0.5f);
	glVertex2f( 0.5f, -0.5f);
	glVertex2f( 0.5f,  0.5f);
	glVertex2f(-0.5f,  0.5f);
	glEnd();
	glFlush();
	glutMainLoop();				// приемщик сигнала
	return 0;
}
