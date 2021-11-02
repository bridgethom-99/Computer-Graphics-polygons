#include<windows.h>
#include <GL/glut.h>

void init(void)
{
	glClearColor(1.0, 1.0, 1.0, 0.0);	// Set display window colour to white

	glMatrixMode(GL_PROJECTION);		// Set projection parameters
	gluOrtho2D(0.0, 400.0, 0.0, 400.0);
}

void drawShapes(void)
{
	glClear(GL_COLOR_BUFFER_BIT);	// Clear display window

	//Set colour to black
	glColor3f(0.0, 0.0, 0.0);
	//Adjust the point size
	glPointSize(5.0);


	// Draw an outlined triangle
	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 1.0);
	glVertex2i(100, 200);
	glVertex2i(100, 50);

	glVertex2i(100, 50);
	glVertex2i(300, 50);

	glVertex2i(300, 50);
	glVertex2i(300, 200);

	glVertex2i(100, 200);
	glVertex2i(50, 200);

	glVertex2i(300, 200);
	glVertex2i(350, 200);

	glVertex2i(50, 200);
	glVertex2i(50, 250);

	glVertex2i(350, 200);
	glVertex2i(350, 250);

	glVertex2i(50, 250);
	glVertex2i(350, 250);








	glEnd();

	glFlush();	// Process all OpenGL routines
}

int main(int argc, char* argv[])
{
	glutInit(&argc, argv);						// Initalise GLUT
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);	// Set display mode

	glutInitWindowPosition(200, 70);				// Set window position
	glutInitWindowSize(800, 600);					// Set window size
	glutCreateWindow("An Example OpenGL Program");	// Create display window

	init();							// Execute initialisation procedure
	glutDisplayFunc(drawShapes);		// Send graphics to display window
	glutMainLoop();					// Display everything and wait

	return 0;
}

