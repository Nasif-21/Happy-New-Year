#include<iostream>
using namespace std;
//#include <stdio.h>
#include <cstdlib>
#include<windows.h>
#define PI 3.1416
#include <GL/gl.h>
#include <GL/glut.h>
#include <vector>
#include<math.h>
#include<cstdio>





GLbyte slr = 202, slg = 202, slb = 202; ///Street  color
GLbyte  ldr =225  , ldg = 244 , ldb =278; /// Night Car Light



GLfloat Car1PositionX = 0.0f;

GLfloat Car1Speed = 0.003f;

void MoveCar1(int value)
{

        Car1Speed = 0.003f;
        if(Car1PositionX > 1.5f)
        {

            Car1PositionX = -0.9f;

        }
        else
        {
            Car1PositionX += Car1Speed;

        }


    glutPostRedisplay();
    glutTimerFunc(25, MoveCar1, 0);
}


GLfloat Car2PositionX = 0.0f;

GLfloat Car2Speed = 0.004f;

void MoveCar2(int value)
{

        Car2Speed = 0.004f;
        if(Car2PositionX > 1.3f)
        {

            Car2PositionX = -1.3f;

        }
        else
        {
            Car2PositionX += Car2Speed;

        }



    glutPostRedisplay();
    glutTimerFunc(25, MoveCar2, 0);
}





///-----------------------------------------------------------------------------------------------------------------------

/// Normal Functions



void DrawCircle(GLfloat x, GLfloat y, GLfloat radius, int triangleAmount)
{
    int i;
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++)
        {
            glVertex2f(
                        x + (radius * cos(i *  twicePi / triangleAmount)),
                        y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();
}

void DrawCircle2(GLfloat x, GLfloat y, GLfloat radius, int triangleAmount)
{
    int i;
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount/4;i++)
        {
            glVertex2f(
                       x + (radius * sin(i *  twicePi / triangleAmount)),
                       y + (radius * cos(i * twicePi / triangleAmount)));
		}
	glEnd();
}



void car1()
{

    glBegin(GL_QUADS);
    glColor3ub(225, 229, 150);
    glVertex2f(-0.28f, -0.96f);
    glVertex2f(-0.28f,  -0.797f);
    glVertex2f(-0.504f,  -0.797f);
    glVertex2f(-0.504f, -0.96);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(225, 229, 150);
    glVertex2f(-0.504f, -0.96f);
    glVertex2f(-0.504f,  -0.797f);
    glVertex2f(-0.520f, -0.8236f);
    glVertex2f(-0.520f, -0.9467f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(202, 174, 46);
    glVertex2f(-0.232f,  -0.96f);
    glVertex2f(-0.232f,  -0.875f);
    glVertex2f(-0.28f, -0.875f);
    glVertex2f(-0.28f, -0.96f);
    glEnd();

    GLfloat x= -0.28f; GLfloat y= -0.96f; GLfloat radius =0.085f;
    int triangleAmount = 20;

    glColor3ub(202, 174, 46);
    DrawCircle2(x,y,radius,triangleAmount);

    x = -0.28f; y = -0.875f; radius = 0.048f;
    glColor3ub(255, 228, 108);
    DrawCircle2(x,y,radius,triangleAmount);

    x = -0.27f; y = -0.96f; radius = 0.026f;
    glColor3ub(11, 11, 11);
    DrawCircle(x,y,radius,triangleAmount);

    x = -0.45f; y = -0.96f; radius = 0.026f;
    glColor3ub(11, 11, 11);
    DrawCircle(x,y,radius,triangleAmount);


   //car lights
    glColor3ub(ldr,ldg,ldb);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(-0.2f, -0.927f);
    glVertex2f(-0.15,-0.857f);
    glVertex2f(-0.15,-1.0f);
    glVertex2f(-0.2f, -0.947f);

    glEnd();

}


void car2()
{
    glBegin(GL_QUADS);
    glColor3ub(171, 0, 0);
    glVertex2f( 0.22f, -0.8f);
    glVertex2f( 0.22f,  -0.75f);
    glVertex2f( -0.08f, -0.75f);
    glVertex2f( -0.08f,  -0.8f);

    glVertex2f( 0.17f, -0.75f);
    glVertex2f( 0.11f, -0.8f);
    glVertex2f(-0.02f, -0.8f);
    glVertex2f(-0.08f, -0.75f);


    glColor3ub(180, 218, 240);
    glVertex2f( 0.15f, -0.75f);
    glVertex2f( 0.10f, -0.7f);
    glVertex2f(-0.01f, -0.7f);
    glVertex2f(-0.06f, -0.75f);
    glEnd();

    glColor3ub(97, 97, 97);
    glBegin(GL_LINE_LOOP);
    glVertex2f( 0.15f, -0.75f);
    glVertex2f( 0.10f, -0.7f);
    glVertex2f(-0.01f, -0.7f);
    glVertex2f(-0.06f, -0.75f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.01f, -0.7f);
    glVertex2f(-0.01f, -0.75f);

    glVertex2f( 0.10f, -0.7f);
    glVertex2f( 0.10f, -0.75f);

    glVertex2f( 0.05f, -0.7f);
    glVertex2f( 0.05f, -0.75f);
    glEnd();

    GLfloat x = 0.15f, y = -0.80f, radius = 0.026f;
    int triangleAmount = 20;
    glColor3ub(11, 11, 11);
    DrawCircle(x,y,radius,triangleAmount);

    x = -0.0f; y = -0.80f; radius = 0.026f;
    glColor3ub(11, 11, 11);
    DrawCircle(x,y,radius,triangleAmount);


   //car lights
    glColor3ub(ldr,ldg,ldb);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(0.22f, -0.76f);
    glVertex2f(0.27f,-0.71f);
    glVertex2f(0.27f,-0.83f);
    glVertex2f(0.22f,-0.78f);

    glEnd();

}



//circle for moon:
void Circle(float cx, float cy, float radius )
{
glBegin(GL_POLYGON);

 for (float i = 0.0; i <= 2*3.1416 ; i += 0.001)
    {        glColor3f(1.0,1.0,1.0);
         glVertex2f(cx+(sin(i)*radius), cy+(cos(i)*radius));
    }
glEnd();
}



///*****************************************************************************




float x,y,i,j;
float counter=0.0;
float counter1=0.0;
float counter2=0.0;

void MainDisplay()
{
   glClearColor(0.184314,0.184314, 0.309804,0.0);
        glClear(GL_COLOR_BUFFER_BIT);

         glClearColor(0.184314,0.184314, 0.309804,0.0);
        glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
        glColorMaterial ( GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE ) ;
        glEnable(GL_COLOR_MATERIAL);
        glClear(GL_COLOR_BUFFER_BIT);
        glLoadIdentity();

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


//random buildings:
glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.309804, 0.184314, 0.184314f);
	glVertex2f(-1.0f,0.06f);

	glVertex2f(-0.9f,0.06f);
    glVertex2f(-0.9f,-0.7f);
	glVertex2f(-1.0f,-0.7f);

	glEnd();

glBegin(GL_POLYGON);            // These vertices form a closed polygon
	//glColor3f(0.137255f, 0.137255f, 0.556863f);
	glColor3f( 0.258824f, 0.435294f, 0.258824f);
	glVertex2f(-0.7f,-0.09f);

	glVertex2f(-0.6f,-0.09f);
    glVertex2f(-0.6f,-0.7f);
	glVertex2f(-0.7f,-0.7f);

	glEnd();


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


glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor4f(1.0f, 1.0f, 0.0f,0.0f);
	glVertex2f(-0.69f,-0.15f);
	glVertex2f(-0.67f,-0.15f);

	glVertex2f(-0.67f,-0.25f);
	glVertex2f(-0.69f,-0.25f);

    glEnd();


glBegin(GL_POLYGON);
   	glColor4f(1.0f, 1.0f, 0.0f,0.0f);
	glVertex2f(-0.65f,-0.30f);
	glVertex2f(-0.63f,-0.30f);

	glVertex2f(-0.63f,-0.40f);
	glVertex2f(-0.65f,-0.40f);

    glEnd();


glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor4f(1.0f, 1.0f, 0.0f,0.0f);
	glVertex2f(-0.69f,-0.30f);
	glVertex2f(-0.67f,-0.30f);

	glVertex2f(-0.67f,-0.40f);
	glVertex2f(-0.69f,-0.40f);

    glEnd();



   //random building1 windows:
   glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor4f(1.0f, 1.0f, 0.0f,0.0f);
	glVertex2f(-0.97f,-0.09f);
	glVertex2f(-0.93f,-0.09f);

	glVertex2f(-0.93f,-0.25f);
	glVertex2f(-0.97f,-0.25f);

    glEnd();

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

//windows:
glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor4f(1.0f, 1.0f, 0.0f,0.0f);
	glVertex2f(-0.58f,0.28f);
	glVertex2f(-0.56f,0.28f);

	glVertex2f(-0.56f,0.20f);
	glVertex2f(-0.58f,0.20f);

    glEnd();

   glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor4f(1.0f, 1.0f, 0.0f,0.0f);
	glVertex2f(-0.54f,0.28f);
	glVertex2f(-0.52f,0.28f);

	glVertex2f(-0.52f,0.20f);
	glVertex2f(-0.54f,0.20f);

    glEnd();

glBegin(GL_POLYGON);
    glColor4f(1.0f, 1.0f, 0.0f,0.0f);
	glVertex2f(-0.58f,0.15f);
	glVertex2f(-0.56f,0.15f);

	glVertex2f(-0.56f,0.07f);
	glVertex2f(-0.58f,0.07f);

    glEnd();

glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor4f(1.0f, 1.0f, 0.0f,0.0f);
	glVertex2f(-0.54f,0.15f);
	glVertex2f(-0.52f,0.15f);

	glVertex2f(-0.52f,0.07f);
	glVertex2f(-0.54f,0.07f);

    glEnd();


glBegin(GL_POLYGON);
   glColor4f(1.0f, 1.0f, 0.0f,0.0f);
	glVertex2f(-0.58f,0.02f);
	glVertex2f(-0.56f,0.02f);

	glVertex2f(-0.56f,-0.06f);
	glVertex2f(-0.58f,-0.06f);

    glEnd();
glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor4f(1.0f, 1.0f, 0.0f,0.0f);
	glVertex2f(-0.54f,0.02f);
	glVertex2f(-0.52f,0.02f);

	glVertex2f(-0.52f,-0.06f);
	glVertex2f(-0.54f,-0.06f);

    glEnd();

glBegin(GL_POLYGON);
   glColor4f(1.0f, 1.0f, 0.0f,0.0f);
	glVertex2f(-0.58f,-0.11f);
	glVertex2f(-0.56f,-0.11f);

	glVertex2f(-0.56f,-0.19f);
	glVertex2f(-0.58f,-0.19f);

    glEnd();

glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor4f(1.0f, 1.0f, 0.0f,0.0f);
	glVertex2f(-0.54f,-0.11f);
	glVertex2f(-0.52f,-0.11f);

	glVertex2f(-0.52f,-0.19f);
	glVertex2f(-0.54f,-0.19f);

    glEnd();

  //4 windows starts here
   glBegin(GL_POLYGON);
   glColor4f(1.0f, 1.0f, 0.0f,0.0f);
	glVertex2f(-0.58f,-0.24f);
	glVertex2f(-0.56f,-0.24f);

	glVertex2f(-0.56f,-0.32f);
	glVertex2f(-0.58f,-0.32f);

    glEnd();

glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor4f(1.0f, 1.0f, 0.0f,0.0f);
	glVertex2f(-0.54f,-0.24f);
	glVertex2f(-0.52f,-0.24f);

	glVertex2f(-0.52f,-0.32f);
	glVertex2f(-0.54f,-0.32f);

    glEnd();

glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor4f(1.0f, 1.0f, 0.0f,0.0f);
	glVertex2f(-0.50f,-0.24f);
	glVertex2f(-0.48f,-0.24f);

	glVertex2f(-0.48f,-0.32f);
	glVertex2f(-0.50f,-0.32f);

    glEnd();

glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor4f(1.0f, 1.0f, 0.0f,0.0f);
	glVertex2f(-0.46f,-0.24f);
	glVertex2f(-0.44f,-0.24f);

	glVertex2f(-0.44f,-0.32f);
	glVertex2f(-0.46f,-0.32f);

    glEnd();

//floor:
 glBegin(GL_POLYGON);
   glColor4f(1.0f, 1.0f, 0.0f,0.0f);
	glVertex2f(-0.58f,-0.37f);
	glVertex2f(-0.56f,-0.37f);

	glVertex2f(-0.56f,-0.45f);
	glVertex2f(-0.58f,-0.45f);

    glEnd();

glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor4f(1.0f, 1.0f, 0.0f,0.0f);
	glVertex2f(-0.54f,-0.37f);
	glVertex2f(-0.52f,-0.37f);

	glVertex2f(-0.52f,-0.45f);
	glVertex2f(-0.54f,-0.45f);

    glEnd();

glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor4f(1.0f, 1.0f, 0.0f,0.0f);
	glVertex2f(-0.50f,-0.37f);
	glVertex2f(-0.48f,-0.37f);

	glVertex2f(-0.48f,-0.45f);
	glVertex2f(-0.50f,-0.45f);

    glEnd();


glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor4f(1.0f, 1.0f, 0.0f,0.0f);
	glVertex2f(-0.46f,-0.37f);
	glVertex2f(-0.44f,-0.37f);

	glVertex2f(-0.44f,-0.45f);
	glVertex2f(-0.46f,-0.45f);

    glEnd();


//floor:
 glBegin(GL_POLYGON);
   glColor4f(1.0f, 1.0f, 0.0f,0.0f);
	glVertex2f(-0.58f,-0.50f);
	glVertex2f(-0.56f,-0.50f);

	glVertex2f(-0.56f,-0.58f);
	glVertex2f(-0.58f,-0.58f);

    glEnd();

glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor4f(1.0f, 1.0f, 0.0f,0.0f);
	glVertex2f(-0.54f,-0.50f);
	glVertex2f(-0.52f,-0.50f);

	glVertex2f(-0.52f,-0.58f);
	glVertex2f(-0.54f,-0.58f);

    glEnd();

glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor4f(1.0f, 1.0f, 0.0f,0.0f);
	glVertex2f(-0.50f,-0.50f);
	glVertex2f(-0.48f,-0.50f);

	glVertex2f(-0.48f,-0.58f);
	glVertex2f(-0.50f,-0.58f);

    glEnd();


glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor4f(1.0f, 1.0f, 0.0f,0.0f);
	glVertex2f(-0.46f,-0.50f);
	glVertex2f(-0.44f,-0.50f);

	glVertex2f(-0.44f,-0.58f);
	glVertex2f(-0.46f,-0.58f);

    glEnd();

//stars:
	glPointSize(1.9);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(-0.9f, 0.9f);    // x, y

	glEnd();



     glPointSize(2.0);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(-0.8f, 0.7f);    // x, y

	glEnd();


    glPointSize(3.0);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(-0.9f, 0.75f);    // x, y

	glEnd();


		glPointSize(2.7);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(-0.7f, 0.85f);    // x, y

	glEnd();


    glPointSize(1.9);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(-0.7f, 0.76f);    // x, y

	glEnd();



		glPointSize(3.0);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(-0.5f, 0.86f);    // x, y

	glEnd();


		glPointSize(2.8);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(-0.56f, 0.93f);    // x, y

	glEnd();


		glPointSize(2.77);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(-0.48f, 0.84f);    // x, y

	glEnd();


		glPointSize(1.9);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(-0.3f, 0.77f);    // x, y

	glEnd();



		glPointSize(3.9);

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(-0.1f, 0.9f);    // x, y

	glEnd();


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


		glPointSize(3.9);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.08f, 0.91f);    // x, y

	glEnd();


	glPointSize(1.9);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(1.55f, 0.89f);    // x, y

	glEnd();


		glPointSize(3.3);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.2f, 0.93f);    // x, y

	glEnd();


		glPointSize(2.9);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.23f, 0.79f);    // x, y

	glEnd();

		glPointSize(1.9);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.5f, 0.9f);    // x, y

	glEnd();


		glPointSize(2.9);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.4f, 0.89f);    // x, y

	glEnd();



		glPointSize(1.9);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.33f, 0.85f);    // x, y

	glEnd();


		glPointSize(1.9);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.61f, 0.79f);    // x, y

	glEnd();



		glPointSize(2.9);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.69f, 0.84f);    // x, y

	glEnd();


		glPointSize(3.9);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.68f, 0.9f);    // x, y

	glEnd();


	glPointSize(4.0);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.75f, 0.76f);    // x, y

	glEnd();



	glPointSize(2.8);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.79f, 0.79f);    // x, y

	glEnd();


	glPointSize(3.8);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.83f, 0.88f);    // x, y

	glEnd();


	glPointSize(2.6);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.88f, 0.76f);    // x, y

	glEnd();


	glPointSize(3.7);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.92f, 0.73f);    // x, y

	glEnd();


	glPointSize(2.9);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.95f, 0.96f);    // x, y

	glEnd();

	//Road:
glBegin(GL_QUADS);

        //glColor3f(0.1f, 0.1f, 0.1f);
        glColor3f(0.329412f, 0.329412f,  0.329412f);
        glVertex2f(-1.0f, -1.0f);
        glVertex2f(-1.0f, -0.73f);



        glVertex2f(1.0f, -0.73f);
        glVertex2f(1.0f, -1.0f);
    glEnd();


//Footpath:
glBegin(GL_QUADS);

        //glColor3f(0.1f, 0.1f, 0.1f);
        glColor3f(0.623529f, 0.623529f,  0.372549f);
        glVertex2f(-1.0f, -0.73f);
        glVertex2f(-1.0f, -0.7f);



        glVertex2f(1.0f, -0.7f);
        glVertex2f(1.0f, -0.73f);
    glEnd();


//road Lines:
glBegin(GL_QUADS);

        //glColor3f(0.1f, 0.1f, 0.1f);
        glColor3f(1.0f, 1.0f,  1.0f);
        glVertex2f(-0.9f, -0.85f);
        glVertex2f(-0.9f, -0.84f);



        glVertex2f(-0.7f, -0.84f);
        glVertex2f(-0.7f, -0.85f);
    glEnd();


    glBegin(GL_QUADS);

        //glColor3f(0.1f, 0.1f, 0.1f);
        glColor3f(1.0f, 1.0f,  1.0f);
        glVertex2f(-0.5f, -0.85f);
        glVertex2f(-0.5f, -0.84f);



        glVertex2f(-0.3f, -0.84f);
        glVertex2f(-0.3f, -0.85f);
    glEnd();


glBegin(GL_QUADS);

        //glColor3f(0.1f, 0.1f, 0.1f);
        glColor3f(1.0f, 1.0f,  1.0f);
        glVertex2f(-0.1f, -0.85f);
        glVertex2f(-0.1f, -0.84f);



        glVertex2f(0.1f, -0.84f);
        glVertex2f(0.1f, -0.85f);
    glEnd();

glBegin(GL_QUADS);

        //glColor3f(0.1f, 0.1f, 0.1f);
        glColor3f(1.0f, 1.0f,  1.0f);
        glVertex2f(0.3f, -0.85f);
        glVertex2f(0.3f, -0.84f);



        glVertex2f(0.5f, -0.84f);
        glVertex2f(0.5f, -0.85f);
    glEnd();


glBegin(GL_QUADS);


        glColor3f(1.0f, 1.0f,  1.0f);
        glVertex2f(0.7f, -0.85f);
        glVertex2f(0.7f, -0.84f);



        glVertex2f(0.9f, -0.84f);
        glVertex2f(0.9f, -0.85f);
    glEnd();

//CAFE:

glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.53f, 0.12f, 0.47f);
	 glVertex2f(-0.4f, -0.7f);
    glVertex2f(-0.12f, -0.7f);
    glVertex2f(-0.12f, -0.3f);
    glVertex2f(-0.4f, -0.3f);

glEnd();


glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor4f(1.0f, 1.0f, 0.0f,0.0f);
	 glVertex2f(-0.388f, -0.7f);
    glVertex2f(-0.131f, -0.7f);
    glVertex2f(-0.131f, -0.5f);
    glVertex2f(-0.388f, -0.5f);

glEnd();

glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.43f, 0.78f);
	 glVertex2f(-0.25f, -0.7f);
    glVertex2f(-0.26f, -0.7f);
    glVertex2f(-0.26f, -0.5f);
    glVertex2f(-0.25f, -0.5f);

glEnd();

  //cafe title:
   //C
glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 1.0f);
	 glVertex2f(-0.37f, -0.38f);
    glVertex2f(-0.36f, -0.38f);
    glVertex2f(-0.36f, -0.46f);
    glVertex2f(-0.37f, -0.46f);

glEnd();
glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f);
	 glVertex2f(-0.37f, -0.36f);
    glVertex2f(-0.33f, -0.36f);
    glVertex2f(-0.33f, -0.38f);
    glVertex2f(-0.37f, -0.38f);

glEnd();

glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f);
	 glVertex2f(-0.37f, -0.44f);
    glVertex2f(-0.33f, -0.44f);
    glVertex2f(-0.33f, -0.46f);
    glVertex2f(-0.37f, -0.46f);

glEnd();
  //A
glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 1.0f);
	 glVertex2f(-0.31f, -0.38f);
    glVertex2f(-0.30f, -0.38f);
    glVertex2f(-0.30f, -0.46f);
    glVertex2f(-0.31f, -0.46f);
glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f);
	 glVertex2f(-0.31f, -0.36f);
    glVertex2f(-0.27f, -0.36f);
    glVertex2f(-0.27f, -0.38f);
    glVertex2f(-0.31f, -0.38f);

glEnd();
glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 1.0f);
	 glVertex2f(-0.28f, -0.38f);
    glVertex2f(-0.27f, -0.38f);
    glVertex2f(-0.27f, -0.46f);
    glVertex2f(-0.28f, -0.46f);
glEnd();
glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f);
	 glVertex2f(-0.31f, -0.40f);
    glVertex2f(-0.27f, -0.40f);
    glVertex2f(-0.27f, -0.41f);
    glVertex2f(-0.31f, -0.41f);

glEnd();

  //F:
  glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 1.0f);
	 glVertex2f(-0.25f, -0.38f);
    glVertex2f(-0.24f, -0.38f);
    glVertex2f(-0.24f, -0.46f);
    glVertex2f(-0.25f, -0.46f);
    glEnd();
  glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f);
	 glVertex2f(-0.25f, -0.40f);
    glVertex2f(-0.23f, -0.40f);
    glVertex2f(-0.23f, -0.41f);
    glVertex2f(-0.25f, -0.41f);

glEnd();

  glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f);
	 glVertex2f(-0.25f, -0.36f);
    glVertex2f(-0.22f, -0.36f);
    glVertex2f(-0.22f, -0.38f);
    glVertex2f(-0.25f, -0.38f);

glEnd();


  //E:
  glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 1.0f);
	 glVertex2f(-0.19f, -0.38f);
    glVertex2f(-0.20f, -0.38f);
    glVertex2f(-0.20f, -0.46f);
    glVertex2f(-0.19f, -0.46f);

glEnd();

glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f);
	 glVertex2f(-0.20f, -0.36f);
    glVertex2f(-0.16f, -0.36f);
    glVertex2f(-0.16f, -0.38f);
    glVertex2f(-0.20f, -0.38f);

glEnd();
  glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f);
	 glVertex2f(-0.20f, -0.40f);
    glVertex2f(-0.18f, -0.40f);
    glVertex2f(-0.18f, -0.41f);
    glVertex2f(-0.20f, -0.41f);

glEnd();

glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f);
	 glVertex2f(-0.20f, -0.44f);
    glVertex2f(-0.16f, -0.44f);
    glVertex2f(-0.16f, -0.46f);
    glVertex2f(-0.20f, -0.46f);

glEnd();

//Tower:
    glBegin(GL_QUADS);

        glColor3f(0.81f, 0.71f,  0.23f);

        glVertex2f(0.12f, -0.7f);
        glVertex2f(0.12f, 0.18f);



        glVertex2f(-0.12f, 0.18f);
        glVertex2f(-0.12f, -0.7f);
    glEnd();


glBegin(GL_TRIANGLES);

        glColor3f(0.0f, 0.0f,  1.0f);
        glVertex2f(0.13f, 0.18f);
        glVertex2f(0.0f, 0.4f);
        glVertex2f(-0.13f, 0.18f);


    glEnd();

glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.0f, 0.4f);
    glVertex2f(0.0f, 0.5f);
    glEnd();

glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.08f, -0.7f);
    glVertex2f(0.08f, -0.14f);
    glEnd();

glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.04f, -0.7f);
    glVertex2f(0.04f, -0.14f);
    glEnd();


glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.0f, -0.7f);
    glVertex2f(0.0f, -0.14f);
    glEnd();

glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.04f, -0.7f);
    glVertex2f(-0.04f, -0.14f);
    glEnd();

glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.08f, -0.7f);
    glVertex2f(-0.08f, -0.14f);
    glEnd();
   //horizontal

glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.81f, 0.71f,  0.23f);
	 glVertex2f(-0.08f, -0.19f);
    glVertex2f(0.08f, -0.19f);
    glVertex2f(0.08f, -0.22f);
    glVertex2f(-0.08f, -0.22f);

glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.81f, 0.71f, 0.23f);
	 glVertex2f(-0.13f, 0.15f);
    glVertex2f(0.13f, 0.15f);
    glVertex2f(0.13f, -0.12f);
    glVertex2f(-0.13f, -0.12f);

glEnd();

//CLOCK...............................................
        glLoadIdentity();
        glRotatef(0,0.0,0.0,-1.0);
        glBegin(GL_TRIANGLE_FAN);
        glColor3f(1,1,1);


        for(j=0;j<=2*3.14;j+=0.0001)
            {

                 x=-(0.11*sin(j));
                y=(0.11*cos(j));
                glVertex2f(x,y);
            }


        glEnd();




            glPushMatrix();
            glRotatef(counter,0.0,0.0,-1.0);
            counter+=0.09;
            glBegin(GL_QUADS); //minute
            glColor3ub(0,0,0);
            glVertex2f(-.009,0);
            glVertex2f(.004,0);
            glVertex2f(.004,.1);
            glVertex2f(-.009,.1);
            glEnd();


            glPopMatrix();
            glPushMatrix();
            glRotatef(counter1,0.0,0.0,-1.0);
            counter1+=0.5;
            glBegin(GL_QUADS); //second
            glColor3f(1,0,0);
            glVertex2f(-.01,0);
            glVertex2f(-.01,-.1);
            glVertex2f(.0,-.1);
            glVertex2f(.0,.0);
            glEnd();
            glPopMatrix();
            glPushMatrix();
            glRotatef(counter2,0.0,0.0,-1.0);
            counter2+=0.005;
            glBegin(GL_QUADS); //hour
            glColor3ub(0,0,0);
            glVertex2f(0,-.01);
            glVertex2f(.09,-.01);
            glVertex2f(.09,.01);
            glVertex2f(0,.01);
            glEnd();
            glPopMatrix();
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0,0,0);


            for(i=0;i<=2*3.14;i+=0.0001)
                {

                    x=(0.02*sin(i));
                    y=(0.02*cos(i));
                    glVertex2f(x,y);
                }

    //DIGITS:

//6:
glPointSize(3.9);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.0f, -0.09f);    // x, y

	glEnd();


//12
 glPointSize(3.9);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.0f, 0.09f);    // x, y

	glEnd();


//3
glPointSize(3.9);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.09f, 0.0f);    // x, y

	glEnd();

//9
glPointSize(3.9);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.09f, 0.0f);    // x, y

	glEnd();


//
//1
glPointSize(3.3);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.05f, 0.065f);    // x, y

	glEnd();



//4:
glPointSize(3.3);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.05f, -0.065f);    // x, y

	glEnd();



//10:
glPointSize(3.3);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.05f, 0.065f);    // x, y

	glEnd();


//7
glPointSize(3.3);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.05f,- 0.065f);    // x, y

	glEnd();



    glEnd();
    glutSwapBuffers();



/////////////////////
//carss
glPopMatrix();
glPushMatrix();
        glTranslatef(Car2PositionX, 0.0f, 0.0f);
        car2();
        glPopMatrix();
        glPushMatrix();
        glTranslatef(Car1PositionX, 0.0f, 0.0f);
        car1();
        glPopMatrix();

//MOON:
Circle(0.3,0.6,0.1);
    glFlush();
        glFlush();
}


void init() {
   glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}









int main(int argc, char** argv) {


    glutInit(&argc, argv);
    glutInitWindowSize(1050, 650);
    glutInitWindowPosition(50, 50);
    glutCreateWindow("HAPPY NEW YEAR !!!");
    glutDisplayFunc(MainDisplay);
    init();


    glutTimerFunc(25, MoveCar1, 0);
    glutTimerFunc(25, MoveCar2, 0);




    glutMainLoop();
    return 0;
}
