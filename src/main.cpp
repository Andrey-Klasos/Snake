#include <GL/freeglut.h>

void display() {
	glClearColor(0.0f, 1.0f, 0.0f, 0.0f);                    // задаем цвет
	glClear(GL_COLOR_BUFFER_BIT);	                   	// задаем цвет очистки экрана
	glutSwapBuffers();					// переворачваем экран
}


int main(int argc, char *argv[]) {
	glutInit(&argc, argv);			                // инициализаци глут
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);   	// использовать двойную буферизацию
	glutInitWindowSize(300,200);                            // создаем окно
	glutInitWindowPosition(100,100);			// расположение окна
	glutCreateWindow("Snake");				// имя окна
	glutDisplayFunc(display);				// главная функция
	glutMainLoop();						// приемщик сигнала
	return 0;
}
