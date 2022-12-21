#include<windows.h>
#include<stdio.h>
#include<GL/glut.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#define CIRCLE_RADIUS  0.15f
# define PI 3.14159265358979323846
int eggs_caught=0,missed_eggs=0,level_count=1,points=0;


int egg_xc,egg_yc;
// para las coordenadas de huevo
int basket_x,basket_y;
// para coordenadas de la canasta
int a=600,b=650; // para el tama�o predeterminado de la pantalla
int s=0;
// para opci�n de men�
int dropped_eggs=0;
int speed_1=1,speed_2=1.5,speed_3=2,speed_4=2.5;
int w=48,h=48,t=10,e=9,g=12;
void myinit();
void start_screen(int,int);
void cloud1();
void egg();
void basket(int,int);
void duck(int,int);
void print_score();
void egg_start();
void color();
void score();
void display(void);
void basket_set(int,int);
void myReshape(int,int);
void keys(unsigned char,int,int);
void menu(int);
void myinit()
{
	glViewport(0,0,a,b);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0,(GLdouble)a,0,(GLdouble)b);
	glMatrixMode(GL_MODELVIEW);
	glutPostRedisplay();
}
void start_screen(int i,int j)
{
	int k;
	char cat[9]="Juego";
	char orr[11]="Atrapando";
	char hatch[7]="Huevos";
	char start[30]="Presiona 'S' para comenzar";
	glColor3f(0,1,0);
	glRasterPos2i(130,320);
	for(k=0;k<9;k++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,cat[k]);
	glColor3f(1,1,1);
	glRasterPos2i(200,320);
	for(k=0;k<9;k++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,orr[k]);
	glColor3f(1,0,0);
	glRasterPos2i(300,320);
	for(k=0;k<7;k++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,hatch[k]);
	glColor3f(1,1,0);
	glRasterPos2i(210,200);
	for(k=0;k<30;k++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,start[k]);
	glColor3f(1,.5,.5);
	
}

void sun()
{
	
	float theta;
	
	GLfloat angle;
	glLineWidth(1.5);
	glColor3f(0,0,255);
	glBegin(GL_POLYGON);
	for (int i = 0; i <360 ; i++)
	{
		theta  = i*PI*i/180;
		glVertex2f(500+80*cos(theta)/2, 600+80*sin(theta)/2);
	}
	
	glEnd();
	glFlush();
}
void cloud1()
{
	
	float theta;
	
	GLfloat angle;
	glLineWidth(1.5);
	glColor3f(1,1,1);
	glBegin(GL_POLYGON);
	for (int i = 0; i <360 ; i++)
	{
		theta  = i*PI*i/180;
		glVertex2f(100+50*cos(theta)/2, 590+50*sin(theta)/2);
	}
	
	glEnd();
	//GLfloat angle;
	glLineWidth(1.5);
	glColor3f(1,1,1);
	glBegin(GL_POLYGON);
	for (int i = 0; i <360 ; i++)
	{
		theta  = i*PI*i/180;
		glVertex2f(130+50*cos(theta)/2, 580+50*sin(theta)/2);
	}
	glEnd();
	
	glLineWidth(1.5);
	glColor3f(1,1,1);
	glBegin(GL_POLYGON);
	for (int i = 0; i <360 ; i++)
	{
		theta  = i*PI*i/180;
		glVertex2f(140+50*cos(theta)/2, 600+50*sin(theta)/2);
	}
	glEnd();
	
	glLineWidth(1.5);
	glColor3f(1,1,1);
	glBegin(GL_POLYGON);
	for (int i = 0; i <360 ; i++)
	{
		theta  = i*PI*i/180;
		glVertex2f(170+50*cos(theta)/2, 590+50*sin(theta)/2);
	}
	
	glEnd();
	glFlush();
}