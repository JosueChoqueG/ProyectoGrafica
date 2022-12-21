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