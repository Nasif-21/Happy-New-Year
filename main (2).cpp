#include<GL/gl.h>
#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>
/* Initialize OpenGL
Computer  Graphics */


void initGL() {
	// Set "clearing" or background color
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Black and opaque
}

void Circle(float cx, float cy, float radius )
{
glBegin(GL_POLYGON);

 for (float i = 0.0; i <= 2*3.1416 ; i += 0.001)
    {        glColor3f(1.0,1.0,1.0);
         glVertex2f(cx+(sin(i)*radius), cy+(cos(i)*radius));
    }
glEnd();
}


void display() {




    glClearColor(0.0f, 0.5f, 1.0f, 0.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)



//sky colour:
glBegin(GL_QUADS);
        //glColor4f(0.0f, 0.5f, 1.0f,0.0);// first color

        glColor3f(0.1f, 0.1f, 0.1f);
        glVertex2f(-1.0f, -0.5f);
        glVertex2f(-1.0f, 1.0f);

        glColor3f(0.1f, 0.1f, 0.1f);
        //glColor3f(0.1f, 0.1f, 0.1f);

        glVertex2f(1.0f, 1.0f);
        glVertex2f(1.0f, -0.5f);
    glEnd();
//mountains:
glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f( 0.0f, 0.1f, 0.0f);

    glVertex2f(-1.0f,-0.5f);

    glVertex2f(-1.0f,-0.2f);


 glColor3f( 0.0f, 0.5f, 0.0f);
    glVertex2f(-0.5f,-0.5f);

	glVertex2f(-0.2f,-0.1f);

	glVertex2f(0.0f,-0.5f);

 glColor3f( 0.0f, 0.5f, 0.0f);
	glVertex2f(0.2f,-0.1f);

	glVertex2f(0.6f,-0.5f);

	glVertex2f(0.74f,-0.1f);

	glVertex2f(1.0f,-0.2f);
	glVertex2f(1.0f,-0.5f);


	glEnd();
glFlush();
//random buildings:
glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.309804, 0.184314, 0.184314f);
	glVertex2f(-1.0f,0.06f);

	glVertex2f(-0.9f,0.06f);
    glVertex2f(-0.9f,-0.7f);
	glVertex2f(-1.0f,-0.7f);

	glEnd();
glFlush();
glBegin(GL_POLYGON);            // These vertices form a closed polygon
	//glColor3f(0.137255f, 0.137255f, 0.556863f);
	glColor3f( 0.258824f, 0.435294f, 0.258824f);
	glVertex2f(-0.7f,-0.09f);

	glVertex2f(-0.6f,-0.09f);
    glVertex2f(-0.6f,-0.7f);
	glVertex2f(-0.7f,-0.7f);

	glEnd();
glFlush();

 glBegin(GL_LINES);              // Each set of 4 vertices form a quad

	glColor3f( 0.258824f, 0.435294f, 0.258824f);
	glVertex2f(-0.67f, -0.09f);    // x, y
	glVertex2f(-0.67f, 0.01f);
    glEnd();
    glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	//glColor3f(0.137255f, 0.137255f, 0.556863f); // Red
	glColor3f( 0.258824f, 0.435294f, 0.258824f);
	glVertex2f(-0.66f, -0.09f);    // x, y
	glVertex2f(-0.66f, 0.1f);
    glEnd();
//Windows of random buildings:
glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor4f(1.0f, 1.0f, 0.0f,0.0f);
	glVertex2f(-0.65f,-0.15f);
	glVertex2f(-0.63f,-0.15f);

	glVertex2f(-0.63f,-0.25f);
	glVertex2f(-0.65f,-0.25f);

    glEnd();
   glFlush();

glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor4f(1.0f, 1.0f, 0.0f,0.0f);
	glVertex2f(-0.69f,-0.15f);
	glVertex2f(-0.67f,-0.15f);

	glVertex2f(-0.67f,-0.25f);
	glVertex2f(-0.69f,-0.25f);

    glEnd();
   glFlush();

glBegin(GL_POLYGON);
   	glColor4f(1.0f, 1.0f, 0.0f,0.0f);
	glVertex2f(-0.65f,-0.30f);
	glVertex2f(-0.63f,-0.30f);

	glVertex2f(-0.63f,-0.40f);
	glVertex2f(-0.65f,-0.40f);

    glEnd();
   glFlush();

glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor4f(1.0f, 1.0f, 0.0f,0.0f);
	glVertex2f(-0.69f,-0.30f);
	glVertex2f(-0.67f,-0.30f);

	glVertex2f(-0.67f,-0.40f);
	glVertex2f(-0.69f,-0.40f);

    glEnd();
   glFlush();


   //random building1 windows:
   glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor4f(1.0f, 1.0f, 0.0f,0.0f);
	glVertex2f(-0.97f,-0.09f);
	glVertex2f(-0.93f,-0.09f);

	glVertex2f(-0.93f,-0.25f);
	glVertex2f(-0.97f,-0.25f);

    glEnd();
   glFlush();
       glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.1f, 0.1f); // Red
	glVertex2f(-0.95f, -0.25f);    // x, y
	glVertex2f(-0.95f, -0.09f);    // x, y
    glEnd();
     glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.1f, 0.1f); // Red
	glVertex2f(-0.93f, -0.17f);    // x, y
	glVertex2f(-0.97f, -0.17f);
    glEnd();


   //random building1 windows 2:
   glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor4f(1.0f, 1.0f, 0.0f,0.0f);
	glVertex2f(-0.97f,-0.27f);
	glVertex2f(-0.93f,-0.27f);

	glVertex2f(-0.93f,-0.43f);
	glVertex2f(-0.97f,-0.43f);

    glEnd();
   glFlush();
       glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.1f, 0.1f); // Red
	glVertex2f(-0.95f, -0.27f);    // x, y
	glVertex2f(-0.95f, -0.43f);    // x, y
    glEnd();
     glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.1f, 0.1f); // Red
	glVertex2f(-0.93f, -0.35f);    // x, y
	glVertex2f(-0.97f, -0.35f);
    glEnd();
//Building 1:
	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.258824f,  0.258824f,  0.435294f); // navy blue
	glVertex2f(-0.9f,-0.7f);
	glVertex2f(-0.9f,0.4f);
	glVertex2f(-0.8f,0.5f);
	glVertex2f(-0.7f,0.4f);
	glVertex2f(-0.7f,-0.7f);

	glEnd();

	glFlush();  // Render now


	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor4f(1.0f, 1.0f, 0.0f,0.0f);
	glVertex2f(-0.9f, -0.7f);    // x, y
	glVertex2f(-0.7f, -0.7f);    // x, y
    glEnd();

    glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor4f(1.0f, 1.0f, 0.0f,0.0f);
	glVertex2f(-0.9f, -0.6f);    // x, y
	glVertex2f(-0.7f, -0.6f);    // x, y
    glEnd();

    glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor4f(1.0f, 1.0f, 0.0f,0.0f);
	glVertex2f(-0.9f, -0.5f);    // x, y
	glVertex2f(-0.7f, -0.5f);    // x, y
    glEnd();

    glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor4f(1.0f, 1.0f, 0.0f,0.0f);
	glVertex2f(-0.9f, -0.4f);    // x, y
	glVertex2f(-0.7f, -0.4f);    // x, y
    glEnd();

    glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor4f(1.0f, 1.0f, 0.0f,0.0f);
	glVertex2f(-0.9f, -0.3f);    // x, y
	glVertex2f(-0.7f, -0.3f);    // x, y
    glEnd();
    glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor4f(1.0f, 1.0f, 0.0f,0.0f);
	glVertex2f(-0.9f, -0.2f);    // x, y
	glVertex2f(-0.7f, -0.2f);    // x, y
    glEnd();
    glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor4f(1.0f, 1.0f, 0.0f,0.0f);
	glVertex2f(-0.9f, -0.1f);    // x, y
	glVertex2f(-0.7f, -0.1f);    // x, y
    glEnd();
    glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor4f(1.0f, 1.0f, 0.0f,0.0f);
	glVertex2f(-0.9f, 0.0f);    // x, y
	glVertex2f(-0.7f, 0.0f);    // x, y
    glEnd();
    glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor4f(1.0f, 1.0f, 0.0f,0.0f);
	glVertex2f(-0.9f, 0.1f);    // x, y
	glVertex2f(-0.7f, 0.1f);    // x, y
    glEnd();
    glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor4f(1.0f, 1.0f, 0.0f,0.0f);
	glVertex2f(-0.9f, 0.2f);    // x, y
	glVertex2f(-0.7f, 0.2f);    // x, y
    glEnd();
     glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor4f(1.0f, 1.0f, 0.0f,0.0f);
	glVertex2f(-0.9f, 0.3f);    // x, y
	glVertex2f(-0.7f, 0.3f);    // x, y
    glEnd();
    //tiangular line:
     glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor4f(1.0f, 1.0f, 0.0f,0.0f);
	glVertex2f(-0.85f, 0.40f);    // x, y
	glVertex2f(-0.80f, 0.44f);    // x, y
    glEnd();
    //tiangular line:
     glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor4f(1.0f, 1.0f, 0.0f,0.0f);
	glVertex2f(-0.80f, 0.44f);    // x, y
	glVertex2f(-0.75f, 0.40f);
    glEnd();

    //sidelines:
     glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor4f(1.0f, 1.0f, 0.0f,0.0f);
	glVertex2f(-0.85f, 0.40f);    // x, y
	glVertex2f(-0.85f, -0.7f);
    glEnd();
     glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor4f(1.0f, 1.0f, 0.0f,0.0f);
	glVertex2f(-0.75f, 0.40f);    // x, y
	glVertex2f(-0.75f, -0.7f);
    glEnd();

      glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor4f(1.0f, 1.0f, 0.0f,0.0f);
	glVertex2f(-0.82f, 0.40f);    // x, y
	glVertex2f(-0.82f, -0.7f);
    glEnd();
     glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor4f(1.0f, 1.0f, 0.0f,0.0f);
	glVertex2f(-0.78f, 0.40f);    // x, y
	glVertex2f(-0.78f, -0.7f);
    glEnd();

    //Extra Floor:
     glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(-0.85f, 0.35f);    // x, y
	glVertex2f(-0.9f, 0.35f);
    glEnd();
    glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(-0.7f, 0.35f);    // x, y
	glVertex2f(-0.75f, 0.35f);
    glEnd();

    //top:
    glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(-0.80f, 0.44f);    // x, y
	glVertex2f(-0.8f,0.5f);
    glEnd();

	glFlush();  // Render now





//Building2:
glBegin(GL_POLYGON);            // These vertices form a closed polygon
	//glColor3f( 0.258824f, 0.435294f, 0.258824f); // navy blue
	glColor3f(0.137255f, 0.137255f, 0.556863f);
	glVertex2f(-0.6f,-0.7f);
	glVertex2f(-0.6f,0.3f);

	glVertex2f(-0.5f,0.3f);
	glVertex2f(-0.5f,-0.2f);
	glVertex2f(-0.4f,-0.2f);
	glVertex2f(-0.4f,-0.7f);
    glEnd();
   glFlush();
//windows:
glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor4f(1.0f, 1.0f, 0.0f,0.0f);
	glVertex2f(-0.58f,0.28f);
	glVertex2f(-0.56f,0.28f);

	glVertex2f(-0.56f,0.20f);
	glVertex2f(-0.58f,0.20f);

    glEnd();
   glFlush();
   glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor4f(1.0f, 1.0f, 0.0f,0.0f);
	glVertex2f(-0.54f,0.28f);
	glVertex2f(-0.52f,0.28f);

	glVertex2f(-0.52f,0.20f);
	glVertex2f(-0.54f,0.20f);

    glEnd();
   glFlush();
glBegin(GL_POLYGON);
    glColor4f(1.0f, 1.0f, 0.0f,0.0f);
	glVertex2f(-0.58f,0.15f);
	glVertex2f(-0.56f,0.15f);

	glVertex2f(-0.56f,0.07f);
	glVertex2f(-0.58f,0.07f);

    glEnd();
   glFlush();
glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor4f(1.0f, 1.0f, 0.0f,0.0f);
	glVertex2f(-0.54f,0.15f);
	glVertex2f(-0.52f,0.15f);

	glVertex2f(-0.52f,0.07f);
	glVertex2f(-0.54f,0.07f);

    glEnd();
   glFlush();

glBegin(GL_POLYGON);
   glColor4f(1.0f, 1.0f, 0.0f,0.0f);
	glVertex2f(-0.58f,0.02f);
	glVertex2f(-0.56f,0.02f);

	glVertex2f(-0.56f,-0.06f);
	glVertex2f(-0.58f,-0.06f);

    glEnd();
   glFlush();
glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor4f(1.0f, 1.0f, 0.0f,0.0f);
	glVertex2f(-0.54f,0.02f);
	glVertex2f(-0.52f,0.02f);

	glVertex2f(-0.52f,-0.06f);
	glVertex2f(-0.54f,-0.06f);

    glEnd();
   glFlush();
glBegin(GL_POLYGON);
   glColor4f(1.0f, 1.0f, 0.0f,0.0f);
	glVertex2f(-0.58f,-0.11f);
	glVertex2f(-0.56f,-0.11f);

	glVertex2f(-0.56f,-0.19f);
	glVertex2f(-0.58f,-0.19f);

    glEnd();
   glFlush();
glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor4f(1.0f, 1.0f, 0.0f,0.0f);
	glVertex2f(-0.54f,-0.11f);
	glVertex2f(-0.52f,-0.11f);

	glVertex2f(-0.52f,-0.19f);
	glVertex2f(-0.54f,-0.19f);

    glEnd();
   glFlush();
  //4 windows starts here
   glBegin(GL_POLYGON);
   glColor4f(1.0f, 1.0f, 0.0f,0.0f);
	glVertex2f(-0.58f,-0.24f);
	glVertex2f(-0.56f,-0.24f);

	glVertex2f(-0.56f,-0.32f);
	glVertex2f(-0.58f,-0.32f);

    glEnd();
   glFlush();
glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor4f(1.0f, 1.0f, 0.0f,0.0f);
	glVertex2f(-0.54f,-0.24f);
	glVertex2f(-0.52f,-0.24f);

	glVertex2f(-0.52f,-0.32f);
	glVertex2f(-0.54f,-0.32f);

    glEnd();
   glFlush();
glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor4f(1.0f, 1.0f, 0.0f,0.0f);
	glVertex2f(-0.50f,-0.24f);
	glVertex2f(-0.48f,-0.24f);

	glVertex2f(-0.48f,-0.32f);
	glVertex2f(-0.50f,-0.32f);

    glEnd();
   glFlush();

glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor4f(1.0f, 1.0f, 0.0f,0.0f);
	glVertex2f(-0.46f,-0.24f);
	glVertex2f(-0.44f,-0.24f);

	glVertex2f(-0.44f,-0.32f);
	glVertex2f(-0.46f,-0.32f);

    glEnd();
   glFlush();
//floor:
 glBegin(GL_POLYGON);
   glColor4f(1.0f, 1.0f, 0.0f,0.0f);
	glVertex2f(-0.58f,-0.37f);
	glVertex2f(-0.56f,-0.37f);

	glVertex2f(-0.56f,-0.45f);
	glVertex2f(-0.58f,-0.45f);

    glEnd();
   glFlush();
glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor4f(1.0f, 1.0f, 0.0f,0.0f);
	glVertex2f(-0.54f,-0.37f);
	glVertex2f(-0.52f,-0.37f);

	glVertex2f(-0.52f,-0.45f);
	glVertex2f(-0.54f,-0.45f);

    glEnd();
   glFlush();
glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor4f(1.0f, 1.0f, 0.0f,0.0f);
	glVertex2f(-0.50f,-0.37f);
	glVertex2f(-0.48f,-0.37f);

	glVertex2f(-0.48f,-0.45f);
	glVertex2f(-0.50f,-0.45f);

    glEnd();
   glFlush();

glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor4f(1.0f, 1.0f, 0.0f,0.0f);
	glVertex2f(-0.46f,-0.37f);
	glVertex2f(-0.44f,-0.37f);

	glVertex2f(-0.44f,-0.45f);
	glVertex2f(-0.46f,-0.45f);

    glEnd();
   glFlush();

//floor:
 glBegin(GL_POLYGON);
   glColor4f(1.0f, 1.0f, 0.0f,0.0f);
	glVertex2f(-0.58f,-0.50f);
	glVertex2f(-0.56f,-0.50f);

	glVertex2f(-0.56f,-0.58f);
	glVertex2f(-0.58f,-0.58f);

    glEnd();
   glFlush();
glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor4f(1.0f, 1.0f, 0.0f,0.0f);
	glVertex2f(-0.54f,-0.50f);
	glVertex2f(-0.52f,-0.50f);

	glVertex2f(-0.52f,-0.58f);
	glVertex2f(-0.54f,-0.58f);

    glEnd();
   glFlush();
glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor4f(1.0f, 1.0f, 0.0f,0.0f);
	glVertex2f(-0.50f,-0.50f);
	glVertex2f(-0.48f,-0.50f);

	glVertex2f(-0.48f,-0.58f);
	glVertex2f(-0.50f,-0.58f);

    glEnd();
   glFlush();

glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor4f(1.0f, 1.0f, 0.0f,0.0f);
	glVertex2f(-0.46f,-0.50f);
	glVertex2f(-0.44f,-0.50f);

	glVertex2f(-0.44f,-0.58f);
	glVertex2f(-0.46f,-0.58f);

    glEnd();
   glFlush();


//stars:
	glPointSize(1.9);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(-0.9f, 0.9f);    // x, y

	glEnd();

	glFlush();  // Render now

     glPointSize(2.0);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(-0.8f, 0.7f);    // x, y

	glEnd();

	glFlush();  // Render now
    glPointSize(3.0);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(-0.9f, 0.75f);    // x, y

	glEnd();

	glFlush();  // Render now
		glPointSize(2.7);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(-0.7f, 0.85f);    // x, y

	glEnd();

	glFlush();  // Render now
    glPointSize(1.9);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(-0.7f, 0.76f);    // x, y

	glEnd();

	glFlush();  // Render now

		glPointSize(3.0);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(-0.5f, 0.86f);    // x, y

	glEnd();

	glFlush();  // Render now
		glPointSize(2.8);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(-0.56f, 0.93f);    // x, y

	glEnd();

	glFlush();  // Render now
		glPointSize(2.77);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(-0.48f, 0.84f);    // x, y

	glEnd();

	glFlush();  // Render now
		glPointSize(1.9);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(-0.3f, 0.77f);    // x, y

	glEnd();

	glFlush();  // Render now

		glPointSize(3.9);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(-0.1f, 0.9f);    // x, y

	glEnd();

	glFlush();  // Render now
	glPointSize(2.9);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.0f, 0.96f);    // x, y

	glEnd();
		glPointSize(2.9);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.04f, 0.94f);    // x, y

	glEnd();

	glFlush();  // Render now
		glPointSize(3.9);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.08f, 0.91f);    // x, y

	glEnd();

	glFlush();  // Render now
	glPointSize(1.9);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(1.55f, 0.89f);    // x, y

	glEnd();

	glFlush();  // Render now
		glPointSize(3.3);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.2f, 0.93f);    // x, y

	glEnd();

	glFlush();  // Render now
		glPointSize(2.9);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.23f, 0.79f);    // x, y

	glEnd();

	glFlush();  // Render now
		glPointSize(1.9);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.5f, 0.9f);    // x, y

	glEnd();

	glFlush();  // Render now
		glPointSize(2.9);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.4f, 0.89f);    // x, y

	glEnd();

	glFlush();  // Render now

		glPointSize(1.9);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.33f, 0.85f);    // x, y

	glEnd();

	glFlush();  // Render now
		glPointSize(1.9);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.61f, 0.79f);    // x, y

	glEnd();

	glFlush();  // Render now

		glPointSize(2.9);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.69f, 0.84f);    // x, y

	glEnd();

	glFlush();  // Render now
		glPointSize(3.9);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.68f, 0.9f);    // x, y

	glEnd();

	glFlush();  // Render now
	glPointSize(4.0);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.75f, 0.76f);    // x, y

	glEnd();

	glFlush();  // Render now

	glPointSize(2.8);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.79f, 0.79f);    // x, y

	glEnd();

	glFlush();  // Render now
	glPointSize(3.8);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.83f, 0.88f);    // x, y

	glEnd();

	glFlush();  // Render now
	glPointSize(2.6);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.88f, 0.76f);    // x, y

	glEnd();

	glFlush();  // Render now
	glPointSize(3.7);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.92f, 0.73f);    // x, y

	glEnd();

	glFlush();  // Render now
	glPointSize(2.9);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.95f, 0.96f);    // x, y

	glEnd();

	glFlush();  // Render now





//Road:
glBegin(GL_QUADS);

        //glColor3f(0.1f, 0.1f, 0.1f);
        glColor3f(0.329412f, 0.329412f,  0.329412f);
        glVertex2f(-1.0f, -1.0f);
        glVertex2f(-1.0f, -0.73f);



        glVertex2f(1.0f, -0.73f);
        glVertex2f(1.0f, -1.0f);
    glEnd();
    glFlush();

//Footpath:
glBegin(GL_QUADS);

        //glColor3f(0.1f, 0.1f, 0.1f);
        glColor3f(0.623529f, 0.623529f,  0.372549f);
        glVertex2f(-1.0f, -0.73f);
        glVertex2f(-1.0f, -0.7f);



        glVertex2f(1.0f, -0.7f);
        glVertex2f(1.0f, -0.73f);
    glEnd();
    glFlush();

//road Lines:
glBegin(GL_QUADS);

        //glColor3f(0.1f, 0.1f, 0.1f);
        glColor3f(1.0f, 1.0f,  1.0f);
        glVertex2f(-0.9f, -0.85f);
        glVertex2f(-0.9f, -0.84f);



        glVertex2f(-0.7f, -0.84f);
        glVertex2f(-0.7f, -0.85f);
    glEnd();
    glFlush();

    glBegin(GL_QUADS);

        //glColor3f(0.1f, 0.1f, 0.1f);
        glColor3f(1.0f, 1.0f,  1.0f);
        glVertex2f(-0.5f, -0.85f);
        glVertex2f(-0.5f, -0.84f);



        glVertex2f(-0.3f, -0.84f);
        glVertex2f(-0.3f, -0.85f);
    glEnd();
    glFlush();

glBegin(GL_QUADS);

        //glColor3f(0.1f, 0.1f, 0.1f);
        glColor3f(1.0f, 1.0f,  1.0f);
        glVertex2f(-0.1f, -0.85f);
        glVertex2f(-0.1f, -0.84f);



        glVertex2f(0.1f, -0.84f);
        glVertex2f(0.1f, -0.85f);
    glEnd();
    glFlush();
glBegin(GL_QUADS);

        //glColor3f(0.1f, 0.1f, 0.1f);
        glColor3f(1.0f, 1.0f,  1.0f);
        glVertex2f(0.3f, -0.85f);
        glVertex2f(0.3f, -0.84f);



        glVertex2f(0.5f, -0.84f);
        glVertex2f(0.5f, -0.85f);
    glEnd();
    glFlush();

glBegin(GL_QUADS);

        //glColor3f(0.1f, 0.1f, 0.1f);
        glColor3f(1.0f, 1.0f,  1.0f);
        glVertex2f(0.7f, -0.85f);
        glVertex2f(0.7f, -0.84f);



        glVertex2f(0.9f, -0.84f);
        glVertex2f(0.9f, -0.85f);
    glEnd();
    glFlush();
    Circle(0.3,0.6,0.1);
    glFlush();

}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);          // Initialize GLUT
	glutCreateWindow("Vertex, Primitive & Color");  // Create window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	glutInitWindowPosition(50, 50); // Position the window's initial top-left corner
	glutDisplayFunc(display);       // Register callback handler for window re-paint event
	initGL();                       // Our own OpenGL initialization
	glutMainLoop();                 // Enter the event-processing loop
	return 0;
}

