// openGLFun.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
#include "glut.h"

void initGL() {
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}

void drawPoints()
{
	glBegin(GL_POINTS);

	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.1f, -0.6f);
	glVertex2f(0.7f, -0.6f);
	glVertex2f(0.4f, -0.1f);

	glEnd();
}
void drawLines()
{
	glBegin(GL_LINES);

	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.1f, -0.6f);
	glVertex2f(0.7f, -0.6f);

	glVertex2f(0.7f, -0.6f);
	glVertex2f(0.4f, -0.1f);

	glEnd();
}
void drawSolidTriangle()
{
	glBegin(GL_TRIANGLES);

	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex2f(0.1f, -0.6f);
	glVertex2f(0.7f, -0.6f);
	glVertex2f(0.4f, -0.1f);

	glEnd();
}
void drawGradientTriangle()
{
	glBegin(GL_TRIANGLES);

	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(0.3f, -0.4f);

	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex2f(0.9f, -0.4f);

	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex2f(0.6f, -0.9f);

	glEnd();
}
void update()
{
	glClear(GL_COLOR_BUFFER_BIT);
	drawGradientTriangle();
	drawSolidTriangle();
	drawLines();
	glFlush();
}

int main(int argc, CHAR** argv)
{
	glutCreateWindow("GL Fun");
	glutInitWindowSize(320, 320);
	glutInitWindowPosition(50, 50);
	glutDisplayFunc(update);
	initGL();
	glutMainLoop();
	return 0;
}