#include <windows.h>
#include <GL/glut.h>


void display() {
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glPointSize(10.0);

	glBegin(GL_POINTS);
	glColor3f(1.0f, 0.0f, 0.0f);
	float x1,y1,x2,y2,x3,y3;
	x1=-0.2f;
	y1=-0.5f;
	x2=-0.7f;
	y2=-0.9f;
	x3=-0.9f;
	y3=-0.2f;
	glVertex2f(x1,y1);
	glVertex2f(x2,y2);
    glVertex2f(x3,y3);
	glEnd();

	glBegin(GL_POINTS);
	int tx=1;
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex2f(x1+tx,y1+tx);
	glVertex2f(x2+tx,y2+tx);
    glVertex2f(x3+tx,y3+tx);


	glEnd();

	glFlush();
}


int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("2D Transformation setup");
	glutInitWindowSize(500,500);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}


ID:20-42292-1 abcd aaasdadadasSASDASDA xfdfsfsfadaqd