#include <stdio.h>
#include <stdlib.h>
#include <GL/glut.h>
#include <math.h>
#define PI 3.141592653589
#include <string.h>

void studmsg(float,float);
float d=0.0;
void smallt1_ultamove(float,float);
void smallt_ultamove(float,float);
void createNewWindow(void);
void initSecondWindow(void);
void mydisplaySecondWindow(void);
void keySecond(unsigned char,int,int);
void initThirdWindow(void);
void createThirdWindow(void);
void mydisplayThirdWindow(void);
void keyThird(unsigned char,int,int);
void ultawindmessage(float,float);
void createFourthWindow(void);
void mydisplayFourthWindow(void);
void keyFourth(unsigned char,int,int);
void student(float,float);
void createFifthWindow(void);
void mydisplayFifthWindow(void);
void keyFifth(unsigned char,int,int);
void smallt1_move(float,float);
void createSixthWindow(void);
void mydisplaySixthWindow(void);
void keySixth(unsigned char,int,int);
void createSeventhWindow(void);
void mydisplaySeventhWindow(void);
void keySeventh(unsigned char,int,int);
void createEighthWindow(void);
void mydisplayEighthWindow(void);
void keyEighth(unsigned char,int,int);
void createNinethWindow(void);
void mydisplayNinethWindow(void);
void keyNineth(unsigned char,int,int);
void createTenthWindow(void);
void mydisplayTenthWindow(void);
void keyTenth(unsigned char,int,int);
void createEleventhWindow(void);
void mydisplayEleventhWindow(void);
void keyEleventh(unsigned char,int,int);
void createTwelvthWindow(void);
void mydisplayTwelvthWindow(void);
void keyTwelvth(unsigned char,int,int);

void secondwindmessage(float,float);
void drawClass(void);
void drawClass1(void);
void teacher(float,float);
void teacher1(float,float);
void teacher2(float,float);
void teacher3(float,float);
void teacher4(float,float);
void teacher_move(int,int);
void head(float,float);
void small_teacher(float,float);
void small1_teacher(float,float);
void small_teacher1(float,float);
void smallt_move(float,float);
void smallt_ulta(float,float);
void smallt1_ulta(float,float);
void displayHelp(char str[],float x,float y);
void displayHelp1(char str[],float x,float y);
void small1_teacher1(float,float);
void ultastudent(float,float);
void studentmove(float,float);
static float firstWindow,secondWindow,thirdWindow,fourthWindow,fifthWindow,sixthWindow,seventhWindow,eighthWindow,ninethWindow,tenthWindow,eleventhWindow,twelvthWindow;
static int flagSecondScene=0, flagThirdScene=0, flagFourthScene=0, flagFifthScene=0, flagSixthScene=0, flagSeventhScene=0, flagEighthScene=0, flagNinethScene=0, flagTenthScene=0;
static int flag5=0, flag6=0, flag7=0, flag8=0, flag9=0,flag10=0,flag11=0;
float j=0.0, yMove=0, k=0.0, l=0.0, m=0.0, n=0.0;
int z=0;
void *currentfont;
int flag;
double s,c, angle;

void setFont(void *font)
{
    currentfont=font;
}
void drawstring(float x,float y,float z,char *string)
{
    char *c;
    int len = (int) strlen(string);
    int i;
    glRasterPos3f(x,y,z);
    /*for(c=string;*c!='\0';c++)
    {
        glColor3f(0.0,0.0,0.0);
        glutBitmapCharacter(currentfont,*c);
    }*/
    for(i = 0;i<len;i++)
    {
        glColor3f(0.0,0.0,0.0);
        glutBitmapCharacter(currentfont,string[i]);
    }
}


void frontscreen(void)
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    setFont(GLUT_BITMAP_TIMES_ROMAN_24);
    glColor3f(2,1,0);
    drawstring(0-50,82,0.0,"DEPARTMENT OF COMPUTER SCIENCE AND ENGINEERING");
     glColor3f(2,1,0);
    drawstring(42-50,72,0.0,"NMAMIT");
    glColor3f(0.5,1,0);
    drawstring(29-50,60,0.0,"CLASSROOM SIMULATION");
    setFont(GLUT_BITMAP_HELVETICA_18);
    glColor3f(1,1,0);
    drawstring(40-50,30,0.0,"SUBMITTED BY");
    glColor3f(0,1,1);
    drawstring(25-50,20,0.0,"SHRADDHA G PAI");
    glColor3f(0,1,1);
    drawstring(25-50,10,0.0,"SMITHA");
    glColor3f(0,1,1);
    drawstring(58-50,20,0.0,"4NM18CS171");
    glColor3f(0,1,1);
    drawstring(58-50,10,0.0,"4NM18CS184");
    glColor3f(1,1,0);
    drawstring(40-50,-10,0.0,"SUBMITTED TO");
     glColor3f(0,1,1);
    drawstring(35-50,-20,0.0,"MR. PRADEEP KANCHAN");
     glColor3f(0,1,1);
    drawstring(36-50,-30,0.0,"ASST PROF GRADE III");
    glColor3f(0,1,1);
    drawstring(31-50,-40,0.0,"DEPARTMENT OF CSE,NMAMIT");
    glColor3f(1,0.1,1);
    drawstring(28-50,-60,0.0,"**PRESS ENTER TO START**");
    setFont(GLUT_BITMAP_HELVETICA_12);
    glColor3f(1,1,1);
    drawstring(36-50,-70,0.0,"PRESS C TO GO TO NEXT WINDOW");
    glColor3f(1,1,1);
    drawstring(42-50,-80,0.0,"PRESS M TO MOVE");

setFont(GLUT_BITMAP_HELVETICA_18);
    glutSwapBuffers();


   //glutSwapBuffers();
    glFlush();
}

void display()
{
glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

	glColor3f(1.0f, 0.9f, 0.3f);//BOARD-wall
	glBegin(GL_POLYGON);
	glVertex2f(80.0f, 200.0f);
	glVertex2f(80.0f,550.0f);
	glVertex2f(1300.0f,550.0f);
	glVertex2f(1300.0f,200.0f);

	glEnd();
	  glColor3f(0.8f, 0.7f, 0.5f);//floor
	glBegin(GL_POLYGON);
	glVertex2f(0.0f, 0.0f);
	glVertex2f(80.0f,200.0f);
	glVertex2f(1300.0f,200.0f);
	glVertex2f(1300.0f,0.0f);

	glEnd();


    glColor3f(0.6f, 0.4f, 0.2f);//LEG1
	  glLineWidth(4);
	  glBegin(GL_LINES);
	  glVertex2f(600.0f,220.0f);
	  glVertex2f(600.0f,180.0f);

      glEnd();
      glColor3f(0.6f, 0.4f, 0.2f);//LEG2
	  glLineWidth(4);
	  glBegin(GL_LINES);
	  glVertex2f(560.0f,220.0f);
	  glVertex2f(560.0f,160.0f);

      glEnd();
      glColor3f(0.6f, 0.4f, 0.2f);//LEG3
	  glLineWidth(4);
	  glBegin(GL_LINES);
	  glVertex2f(860.0f,220.0f);
	  glVertex2f(860.0f,160.0f);

      glEnd();

 float    radius=20.0;  //globe
    glColor3f(0.0f,0.5f,1.0f);
    glBegin(GL_POLYGON);
		for(float i=0;i<360;i+=0.1)
			glVertex2f(cos(i)*radius+1200,sin(i)*radius+390-30);
	glEnd();

 glColor3f(0.0f, 0.7f, 0.0f);//globe
       glBegin(GL_POLYGON);
	glVertex2f(1190.0f, 355.0f);
	glVertex2f(1210.0f,370.0f);
	glVertex2f(1205.0f, 355.0f);
	glVertex2f(1202.0f,358.0f);
	glVertex2f(1210.0f,350.0f);

      glEnd();

 glColor3f(0.8f,0.4f,0.1f);//CUPBOARD
	  glLineWidth(4);
	  glBegin(GL_POLYGON);
	glVertex2f(1150.0f, 160.0f);
	glVertex2f(1150.0f,320.0f);
	glVertex2f(1250.0f, 320.0f);
	glVertex2f(1250.0f,160.0f);

      glEnd();
      glColor3f(0.9f,0.4f,0.1f);//CUPBOARD
	  glLineWidth(4);
	  glBegin(GL_POLYGON);
	glVertex2f(1150.0f, 320.0f);
	glVertex2f(1170.0f,330.0f);
	glVertex2f(1270.0f, 330.0f);
	glVertex2f(1250.0f,320.0f);

      glEnd();
      glColor3f(0.6f, 0.4f, 0.2f);
	  glLineWidth(4);
	  glBegin(GL_LINES);
	  glVertex2f(1200.0f,340.0f);
	  glVertex2f(1200.0f,330.0f);

      glEnd();
      glColor3f(0.6f, 0.4f, 0.2f);
	  glLineWidth(8);
	  glBegin(GL_LINES);
	  glVertex2f(1180.0f,330.0f);
	  glVertex2f(1220.0f,330.0f);

      glEnd();
        glColor3f(0.9f,0.4f,0.1f);//CUPBOARD
	  glLineWidth(4);
	  glBegin(GL_POLYGON);
	glVertex2f(1250.0f, 320.0f);
	glVertex2f(1270.0f,330.0f);
	glVertex2f(1270.0f,180.0f);
	glVertex2f(1250.0f,160.0f);
      //CUPBOARD
      glEnd();
      glColor3f(0.9f,0.4f,0.1f);//line 1
	 glLineWidth(50);
	  glBegin(GL_LINES);
	  glVertex2f(1150.0f, 280.0f);
	  glVertex2f(1250.0f,280.0f);
	  glEnd();
	    glColor3f(0.9f,0.4f,0.1f);//line 2
	 glLineWidth(50);
	  glBegin(GL_LINES);
	  glVertex2f(1150.0f, 240.0f);
	  glVertex2f(1250.0f,240.0f);
	  glEnd();
	   glColor3f(0.9f,0.4f,0.1f);//line 3
	 glLineWidth(50);
	  glBegin(GL_LINES);
	  glVertex2f(1150.0f, 200.0f);
	  glVertex2f(1250.0f,200.0f);
	  glEnd();
	  //CUPBOARD BOOKS
	  //row1
	  glColor3f(1.0f,0.3f,1.0f);//book1
	 glLineWidth(150);
	  glBegin(GL_LINES);
	  glVertex2f(1205.0f, 280.0f);
	  glVertex2f(1225.0f,320.0f);
	  glEnd();
         glColor3f(0.4f,1.0f,1.0f);//book2
	 glLineWidth(150);
	  glBegin(GL_LINES);
	  glVertex2f(1210.0f, 280.0f);
	  glVertex2f(1230.0f,320.0f);
	  glEnd();
	  glColor3f(0.7f,0.8f,0.6f);//book3
	 glLineWidth(150);
	  glBegin(GL_LINES);
	  glVertex2f(1215.0f, 280.0f);
	  glVertex2f(1235.0f,320.0f);
	  glEnd();
	  glColor3f(0.8f,0.4f,0.4f);//book4
	 glLineWidth(150);
	  glBegin(GL_LINES);
	  glVertex2f(1220.0f, 280.0f);
	  glVertex2f(1240.0f,320.0f);
	  glEnd();
	 glColor3f(0.7f,0.0f,0.4f);//book5
	 glLineWidth(150);
	  glBegin(GL_LINES);
	  glVertex2f(1225.0f, 280.0f);
	  glVertex2f(1245.0f,320.0f);
	  glEnd();

	  //row2
	  glColor3f(1.0f,0.1f,0.1f);//book1
	 glLineWidth(150);
	  glBegin(GL_LINES);
	  glVertex2f(1155.0f, 280.0f);
	  glVertex2f(1175.0f,240.0f);
	  glEnd();
         glColor3f(0.9f,0.8f,0.9f);//book2
	 glLineWidth(150);
	  glBegin(GL_LINES);
	 glVertex2f(1160.0f, 280.0f);
	  glVertex2f(1180.0f,240.0f);
	  glEnd();
	  glColor3f(0.8f,0.2f,1.0f);//book3
	 glLineWidth(150);
	  glBegin(GL_LINES);
	 glVertex2f(1165.0f, 280.0f);
	  glVertex2f(1185.0f,240.0f);
	  glEnd();
	  glColor3f(0.7f,0.6f,1.0f);//book4
	 glLineWidth(150);
	  glBegin(GL_LINES);
	 glVertex2f(1170.0f, 280.0f);
	  glVertex2f(1190.0f,240.0f);
	  glEnd();
	  glColor3f(0.0f,0.8f,1.0f);//book5
	 glLineWidth(150);
	  glBegin(GL_LINES);
	  glVertex2f(1175.0f, 280.0f);
	  glVertex2f(1195.0f,240.0f);
	  glEnd();

//bench1
        glColor3f(0.5f, 0.2f, 0.1f);
	glBegin(GL_POLYGON);
	glVertex2f(90.0f,100.0f);
	glVertex2f(120.0f,150.0f);
	glVertex2f(250.0f,150.0f);
	glVertex2f(220.0f,100.0f);
	glEnd();
glColor3f(1.6f, 1.4f, 1.2f);//book-desk
	glBegin(GL_POLYGON);
	glVertex2f(130.0f,110.0f);
	glVertex2f(130.0f,150.0f);
	glVertex2f(200.0f,150.0f);
	glVertex2f(200.0f,110.0f);
	glEnd();
head(150.0,180.0);

//secondwindmessage(200.0,180.0);
       //desk1 leg1
       glColor3f(0.6f, 0.4f, 0.2f);//LEG3
       glLineWidth(4);
       glBegin(GL_LINES);
        glVertex2f(250.0f,150.0f);
	glVertex2f(250.0f,100.0f);
	glEnd();


	//desk2 leg2
       glColor3f(0.6f, 0.4f, 0.2f);
	glLineWidth(4);
	glBegin(GL_LINES);
	  glVertex2f(220.0f,100.0f);
	  glVertex2f(220.0f,50.0f);
	  glEnd();
 //desk 1()
      glColor3f(0.6f, 0.4f, 0.2f);
	glBegin(GL_POLYGON);
	glVertex2f(70.0f,130.0f);
	glVertex2f(70.0f,80.0f);
	glVertex2f(190.0f,80.0f);
	glVertex2f(190.0f,130.0f);
	glEnd();


	  //student bench leg1
        glColor3f(0.6f, 0.4f, 0.2f);
	  glLineWidth(12);
	  glBegin(GL_LINES);
      //glLineWidth(50);
	  glVertex2f(73.0f,80.0f);
	  glVertex2f(73.0f,50.0f);
	  glEnd();
	  //student b1 leg2
       glColor3f(0.6f, 0.4f, 0.2f);
	 glLineWidth(12);
	  glBegin(GL_LINES);
      //glLineWidth(50);
	  glVertex2f(187.0f,80.0f);
	  glVertex2f(187.0f,50.0f);
	  glEnd();
      //STUDENT1DESK1
    glColor3f(0.6f, 0.4f, 0.2f);
	glBegin(GL_POLYGON);
	glVertex2f(-20.0f, -60.0f);
	glVertex2f(10.0f,-60.0f);
	glVertex2f(5.0f, -70.0f);
	glVertex2f(-25.0f, -70.0f);
	glEnd();



	//bench2
	 glColor3f(0.5f, 0.2f, 0.1f);
	glBegin(GL_POLYGON);
	glVertex2f(350.0f,100.0f);
	glVertex2f(380.0f,150.0f);
	glVertex2f(530.0f,150.0f);
	glVertex2f(500.0f,100.0f);
	glEnd();
	glColor3f(1.6f, 1.4f, 1.2f);//book-desk
	glBegin(GL_POLYGON);
	glVertex2f(390.0f,110.0f);
	glVertex2f(390.0f,150.0f);
	glVertex2f(460.0f,150.0f);
	glVertex2f(460.0f,110.0f);
	glEnd();
head(410.0,180.0);
//secondwindmessage(460,180.0);
	//bench2 leg1
       glColor3f(0.6f, 0.4f, 0.2f);//LEG3
	  glLineWidth(4);
	  glBegin(GL_LINES);
	  glVertex2f(530.0f,150.0f);
	  glVertex2f(530.0f,100.0f);
	  glEnd();

	  //bench2 leg2
       glColor3f(0.6f, 0.4f, 0.2f);//LEG3
	  glLineWidth(4);
	  glBegin(GL_LINES);
	  glVertex2f(500.0f,100.0f);
	  glVertex2f(500.0f,50.0f);
	  glEnd();

	//desk 2()
      glColor3f(0.6f, 0.4f, 0.2f);
	glBegin(GL_POLYGON);
	glVertex2f(330.0f,130.0f);
	glVertex2f(330.0f,80.0f);
	glVertex2f(470.0f,80.0f);
	glVertex2f(470.0f,130.0f);
	glEnd();


	  //student desk2 leg3
       glColor3f(0.6f, 0.4f, 0.2f);//LEG3
	   glLineWidth(12);
	  glBegin(GL_LINES);
      //glLineWidth(50);
	  glVertex2f(333.0f,80.0f);
	  glVertex2f(333.0f,50.0f);
	  glEnd();
	  //student desk2 leg4
       glColor3f(0.6f, 0.4f, 0.2f);//LEG3
	   glLineWidth(12);
	  glBegin(GL_LINES);
      //glLineWidth(50);
	  glVertex2f(467.0f,80.0f);
	  glVertex2f(467.0f,50.0f);
	  glEnd();
    //student2desk2
     glColor3f(0.6f, 0.4f, 0.2f);
	glBegin(GL_POLYGON);
	glVertex2f(-75.0f,-60.0f);
	glVertex2f(-50.0f,-60.0f);
	glVertex2f(-55.0f, -70.0f);
	glVertex2f(-80.0f, -70.0f);
	glEnd();


	 //bench3
	  glColor3f(0.5f, 0.2f, 0.1f);
	glBegin(GL_POLYGON);
	glVertex2f(790.0f,100.0f);
	glVertex2f(820.0f,150.0f);
	glVertex2f(970.0f, 150.0f);
	glVertex2f(950.0f, 100.0f);
	glEnd();
	glColor3f(1.6f, 1.4f, 1.2f);//book-desk
	glBegin(GL_POLYGON);
	glVertex2f(830.0f,110.0f);
	glVertex2f(830.0f,150.0f);
	glVertex2f(910.0f,150.0f);
	glVertex2f(910.0f,110.0f);
	glEnd();
head(850.0,180.0);
//secondwindmessage(900,180.0);
	 //bench3 leg1
       glColor3f(0.6f, 0.4f, 0.2f);
	  glLineWidth(4);
	  glBegin(GL_LINES);
	  glVertex2f(970.0f, 150.0f);
	  glVertex2f(970.0f, 100.0f);
	  glEnd();


 //bench3 leg2
       glColor3f(0.6f, 0.4f, 0.2f);
	  glLineWidth(4);
	  glBegin(GL_LINES);
	  glVertex2f(950.0f, 100.0f);
	  glVertex2f(950.0f, 50.0f);
	  glEnd();

//desk 3()
      glColor3f(0.6f, 0.4f, 0.2f);
	glBegin(GL_POLYGON);
	glVertex2f(770.0f,130.0f);
	glVertex2f(770.0f,80.0f);
	glVertex2f(910.0f,80.0f);
	glVertex2f(910.0f,130.0f);
	glEnd();


 //student desk3 leg3
       glColor3f(0.6f, 0.4f, 0.2f);//LEG3
	  glLineWidth(12);
	  glBegin(GL_LINES);
      //glLineWidth(50);
	  glVertex2f(773.0f,80.0f);
	  glVertex2f(773.0f,50.0f);
	  glEnd();
	   //student desk3 leg4
       glColor3f(0.6f, 0.4f, 0.2f);//LEG3
	 glLineWidth(12);
	  glBegin(GL_LINES);
      //glLineWidth(50);
	  glVertex2f(907.0f,80.0f);
	  glVertex2f(907.0f,50.0f);
	  glEnd();

	//student3 desk3
	 glColor3f(0.6f, 0.4f, 0.2f);
	glBegin(GL_POLYGON);
	glVertex2f(40.0f,-60.0f);
	glVertex2f(70.0f,-60.0f);
	glVertex2f(65.0f, -70.0f);
	glVertex2f(35.0f, -70.0f);
	glEnd();



	 //bench 4
	  glColor3f(0.5f, 0.2f, 0.1f);
	glBegin(GL_POLYGON);
	glVertex2f(1050.0f,100.0f);
	glVertex2f(1080.0f,150.0f);
	glVertex2f(1230.0f, 150.0f);
	glVertex2f(1210.0f, 100.0f);
	glEnd();
	glColor3f(1.6f, 1.4f, 1.2f);//book-desk
	glBegin(GL_POLYGON);
	glVertex2f(1090.0f,110.0f);
	glVertex2f(1090.0f,150.0f);
	glVertex2f(1170.0f,150.0f);
	glVertex2f(1170.0f,110.0f);
	glEnd();
	head(1110.0,180.0);
//	secondwindmessage(1600,180.0);
	 //bench4 leg1
       glColor3f(0.6f, 0.4f, 0.2f);//LEG3
	  glLineWidth(4);
	  glBegin(GL_LINES);
      //glLineWidth(50);
	  glVertex2f(1230.0f, 150.0f);
	  glVertex2f(1230.0f, 100.0f);
	  glEnd();
	  //bench4 leg1
       glColor3f(0.6f, 0.4f, 0.2f);//LEG3
	  glLineWidth(4);
	  glBegin(GL_LINES);
      //glLineWidth(50);
	  glVertex2f(1210.0f, 100.0f);
	  glVertex2f(1210.0f, 50.0f);
	  glEnd();


	  //desk 4()
      glColor3f(0.6f, 0.4f, 0.2f);
	glBegin(GL_POLYGON);
	glVertex2f(1030.0f,130.0f);
	glVertex2f(1030.0f,80.0f);
	glVertex2f(1180.0f,80.0f);
	glVertex2f(1180.0f,130.0f);
	glEnd();


 //desk 4 leg2
       glColor3f(0.6f, 0.4f, 0.2f);//LEG3
	   glLineWidth(12);
	  glBegin(GL_LINES);
      //glLineWidth(50);
	  glVertex2f(1033.0f, 80.0f);
	  glVertex2f(1033.0f, 50.0f);
	  glEnd();
	  //desk 4 leg2
       glColor3f(0.6f, 0.4f, 0.2f);//LEG3
	 glLineWidth(12);
	  glBegin(GL_LINES);
      //glLineWidth(50);
	  glVertex2f(1177.0f, 80.0f);
	  glVertex2f(1177.0f, 50.0f);
	  glEnd();


	   //waste
	   glColor3f(1.0f, 1.0f, 1.0f);//WASTE
	glPointSize(15);
	  glBegin(GL_POINTS);
	  glVertex2f(90.0f, 230.0f);
	   glEnd();
	    glColor3f(1.0f, 1.0f, 1.0f);//WASTE
	glPointSize(10);
	  glBegin(GL_POINTS);
	  glVertex2f(120.0f, 230.0f);
	   glEnd();


	  //Dustbin

	  glColor3f(0.0f, 0.9f, 0.5f);//DUSTBIN
	 glLineWidth(5);
	  glBegin(GL_POLYGON);
	  glVertex2f(90.0f, 190.0f);
	    glVertex2f(80.0f,230.0f);
	  glVertex2f(130.0f, 230.0f);
	  glVertex2f(120.0f, 190.0f);
	  glEnd();




	   glColor3f(1.0f, 1.0f, 0.9f); //tubelight
	glBegin(GL_POLYGON);
	glVertex2f(550.0f, 460.0f);
	glVertex2f(900.0f,460.0f);
	glVertex2f(900.0f,450.0f);
	glVertex2f(550.0f,450.0f);

	glEnd();

    glColor3f(1.0f, 1.0f, 1.0f); //CEILING
	glBegin(GL_POLYGON);
	glVertex2f(0.0f, 700.0f);
	glVertex2f(80.0f,550.0f);
	glVertex2f(1300.0f,550.0f);
	glVertex2f(1300.0f,700.0f);
	glEnd();



	glColor3f(1.0f, 0.9f, 0.6f);//DOOR_WALL
	glBegin(GL_POLYGON);
	glVertex2f(0.0f, 700.0f);
	glVertex2f(80.0f,550.0f);
	glVertex2f(80.0f,200.0f);
	glVertex2f(0.0f, 0.0f);
	glEnd();


	glColor3f(0.4f, 0.2f, 0.1f);//DOOR
	glBegin(GL_POLYGON);
	//glBegin(GL_POLYGON);
	glVertex2f(70.0f, 400.0f);//
	glVertex2f(70.0f,178.0f);//
        glVertex2f(15.0f, 40.f);
	glVertex2f(15.0f, 440.0f);
	glEnd();


	glColor3f(0.0f, 0.0f, 0.0f);//BOARD
	glBegin(GL_POLYGON);
	glVertex2f(300.0f, 250.0f);
	glVertex2f(300.0f,380.0f);

	glVertex2f(1100.0f, 380.0f);
	glVertex2f(1100.0f,250.0f);

	glEnd();
 glColor3f(0.6f, 0.4f, 0.2f);//LEG4
	  glLineWidth(4);
	  glBegin(GL_LINES);
	  glVertex2f(900.0f,280.0f);
	  glVertex2f(900.0f,180.0f);
glEnd();
	glColor3f(0.5f, 0.2f, 0.1f);//TEACHER-TABLE
	glBegin(GL_POLYGON);
	glVertex2f(600.0f,280.0f);
	glVertex2f(560.0f,220.0f);
	glVertex2f(860.0f,220.0f);
	glVertex2f(900.0f,280.0f);
	glEnd();


	//Duster
	glColor3f(0.0f, 0.0f, 0.0f);//Duster upper part
	glBegin(GL_POLYGON);
	glVertex2f(800.0f,240.0f);
	glVertex2f(830.0f,240.0f);
	glVertex2f(830.0f,245.0f);
	glVertex2f(800.0f,245.0f);
	glEnd();
	glColor3f(1.0f, 1.0f, 1.0f);//Duster lower part
	glBegin(GL_POLYGON);
	glVertex2f(800.0f,240.0f);
	glVertex2f(830.0f,240.0f);
	glVertex2f(830.0f,232.0f);
	glVertex2f(800.0f,232.0f);
	glEnd();

//Chalk

glColor3f(1.0f, 1.0f, 1.0f);//1
	  glLineWidth(3);
	  glBegin(GL_LINES);
	  glVertex2f(810.0f,265.0f);
	  glVertex2f(850.0f,265.0f);
glEnd();
glColor3f(1.0f, 1.0f, 1.0f);//2
	  glLineWidth(3);
	  glBegin(GL_LINES);
	  glVertex2f(805.0f,260.0f);
	  glVertex2f(845.0f,260.0f);
glEnd();
glColor3f(1.0f, 1.0f, 1.0f);//3
	  glLineWidth(3);
	  glBegin(GL_LINES);
	  glVertex2f(800.0f,255.0f);
	  glVertex2f(840.0f,255.0f);
glEnd();


    glColor3f(1.0f, 1.0f, 1.0f);//notice board
	glBegin(GL_POLYGON);
	glVertex2f(100.0f, 350.0f);
	glVertex2f(250.0f,350.0f);
	glVertex2f(250.0f,270.0f);
	glVertex2f(100.0f,270.0f);
    glEnd();
    glColor3f(0.0,0.0,0.0);
   displayHelp1("THOUGHT FOR THE DAY",104,340);
    glColor3f(1.0,0.0,0.0);
    displayHelp1("\"HONESTY IS THE BEST",104,310);
     displayHelp1("POLICY !\"",152,290);

glLineWidth(1);

}
void drawCircle(GLfloat x, GLfloat y,
	GLfloat r, GLfloat g, GLfloat b,
	GLfloat sx, GLfloat sy,
	GLfloat radius)
	 {
		glPushMatrix();

		glTranslatef(x, y, 0);
		glScalef(sx, sy, 0);

    glBegin(GL_POLYGON);
		glColor3ub(r, g, b);
    for (GLfloat i = 0; i < 360; i += 5)
        glVertex2f(radius * sin(i * PI / 180), radius * cos(i * PI / 180));
    glEnd();

		glPopMatrix();
}
void smallt_ultamove(float a,float b)
{ float j1=a;

   if(j1<550 && flag8==1)
   {display();
   glColor3f(0.5f,0.8f,0.9f);//DOOR
	glBegin(GL_POLYGON);
	//glBegin(GL_POLYGON);
	glVertex2f(70.0f, 400.0f);//
	glVertex2f(70.0f,178.0f);//
        glVertex2f(15.0f, 40.f);
	glVertex2f(15.0f, 440.0f);
	glEnd();
    glColor3f(0.4f, 0.2f, 0.1f);//DOOR
	glBegin(GL_POLYGON);
	//glBegin(GL_POLYGON);
	glVertex2f(15.0f, 40.0f);//
	glVertex2f(40.0f,150.0f);//
        glVertex2f(40.0f, 380.f);
	glVertex2f(15.0f, 440.0f);
	glEnd();

      j1-=340;


d=j1;
       smallt_ulta(j1,b+yMove);
       // ultawindmessage(j1-12,b);


   }
   else if(j1<550)
   {display();
       //j1-=100;
       smallt_ulta(j1,b+yMove);
       ultawindmessage(j1-12,b);
        //j1-=1.5;

   }
else
    {  display();
        smallt_ulta(j1,b+yMove);
        // ultawindmessage(a-j1-12,b);
    }
glutPostRedisplay();

glFlush();

}
void smallt1_ultamove(float a1,float b1)
{ float j1=a1;

   if(j1<550 && flag10==1)
   {display();
      glColor3f(0.5f,0.8f,0.9f);//DOOR
	glBegin(GL_POLYGON);
	//glBegin(GL_POLYGON);
	glVertex2f(70.0f, 400.0f);//
	glVertex2f(70.0f,178.0f);//
        glVertex2f(15.0f, 40.f);
	glVertex2f(15.0f, 440.0f);
	glEnd();
    glColor3f(0.4f, 0.2f, 0.1f);//DOOR
	glBegin(GL_POLYGON);
	//glBegin(GL_POLYGON);
	glVertex2f(15.0f, 40.0f);//
	glVertex2f(40.0f,150.0f);//
        glVertex2f(40.0f, 380.f);
	glVertex2f(15.0f, 440.0f);
	glEnd();

j1-=340;

       smallt1_ulta(j1,b1+yMove);
        //ultawindmessage(j1-12,b);
      
   }
   else if(j1<550)
   {display();

       smallt1_ulta(j1,b1+yMove);
       ultawindmessage(j1-14,b1);
   }
else
    {  display();
        smallt1_ulta(a1-j1,b1+yMove);
        // ultawindmessage(a-j1-12,b);
    }
glutPostRedisplay();

glFlush();

}
void studentmove(float x,float y)
{
    if(j<550 && flag11==1)
	{
	    glBegin(GL_POLYGON);
glColor3f(1.0f, 0.9f, 0.3f);
glVertex2f(0.0,0.0);
glVertex2f(0.0,700.0);
glVertex2f(1300.0,700.0);
glVertex2f(1300.0,0.0);
glEnd();
drawClass();
glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
		glVertex2f(500.0,125.0);
        glVertex2f(800.0,125.0);
        glVertex2f(800.0,550.0);
        glVertex2f(500.0,550.0);
	glEnd();
ultastudent(j+0,20+yMove);
ultastudent(j+100,20+yMove);
ultastudent(j+200,20+yMove);
ultastudent(j+300,20+yMove);
 glColor3f(0.435f, 0.2f, 0.1f);//door opens
    glBegin(GL_POLYGON);
		glVertex2f(800.0,550.0);
        glVertex2f(800.0,125.0);
        glVertex2f(600.0,80);
        glVertex2f(600.0,450.0);

glEnd();
 float    radius=310.0;  //face
    glColor3f(0.0,1.0,0.0);

    glBegin(GL_POLYGON);
		for(float i=0;i<360;i+=0.1)
			glVertex2f(cos(i)*radius+0,sin(i)*radius+550);
	glEnd();
  glColor3f(0.5f, 0.2f, 0.1f);
    glBegin(GL_POLYGON);

    glVertex2f(0.0,0.0);
     glVertex2f(100.0,0.0);
      glVertex2f(100.0,300.0);
       glVertex2f(170.0,575.0);
        glVertex2f(160.0,500.0);
         glVertex2f(100.0,200.0);
          glVertex2f(0.0,400.0);
          glEnd();


		j-=1.5;
		//displayHelp("Press S to Stop",1000,100);
	}
	else if(j<550)
	{
	    glBegin(GL_POLYGON);
glColor3f(1.0f, 0.9f, 0.3f);
glVertex2f(0.0,0.0);
glVertex2f(0.0,700.0);
glVertex2f(1300.0,700.0);
glVertex2f(1300.0,0.0);
glEnd();
drawClass();
glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
		glVertex2f(500.0,125.0);
        glVertex2f(800.0,125.0);
        glVertex2f(800.0,550.0);
        glVertex2f(500.0,550.0);
	glEnd();
ultastudent(j+0,20+yMove);
ultastudent(j+100,20+yMove);
ultastudent(j+200,20+yMove);
ultastudent(j+300,20+yMove);
 glColor3f(0.435f, 0.2f, 0.1f);//door opens
    glBegin(GL_POLYGON);
		glVertex2f(800.0,550.0);
        glVertex2f(800.0,125.0);
        glVertex2f(600.0,80);
        glVertex2f(600.0,450.0);

glEnd();
 float    radius=310.0;  //face
    glColor3f(0.0,1.0,0.0);

    glBegin(GL_POLYGON);
		for(float i=0;i<360;i+=0.1)
			glVertex2f(cos(i)*radius+0,sin(i)*radius+550);
	glEnd();
  glColor3f(0.5f, 0.2f, 0.1f);
    glBegin(GL_POLYGON);

    glVertex2f(0.0,0.0);
     glVertex2f(100.0,0.0);
      glVertex2f(100.0,300.0);
       glVertex2f(170.0,575.0);
        glVertex2f(160.0,500.0);
         glVertex2f(100.0,200.0);
          glVertex2f(0.0,400.0);
          glEnd();


		//displayHelp("Press M to Move",1000,100);
	}
	else
	{
	    glBegin(GL_POLYGON);
glColor3f(1.0f, 0.9f, 0.3f);
glVertex2f(0.0,0.0);
glVertex2f(0.0,700.0);
glVertex2f(1300.0,700.0);
glVertex2f(1300.0,0.0);
glEnd();
drawClass();
glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
		glVertex2f(500.0,125.0);
        glVertex2f(800.0,125.0);
        glVertex2f(800.0,550.0);
        glVertex2f(500.0,550.0);
	glEnd();
ultastudent(j+0,20+yMove);
ultastudent(j+100,20+yMove);
ultastudent(j+200,20+yMove);
ultastudent(j+300,20+yMove);
 glColor3f(0.435f, 0.2f, 0.1f);//door opens
    glBegin(GL_POLYGON);
		glVertex2f(800.0,550.0);
        glVertex2f(800.0,125.0);
        glVertex2f(600.0,80);
        glVertex2f(600.0,450.0);

glEnd();
 float    radius=310.0;  //face
    glColor3f(0.0,1.0,0.0);

    glBegin(GL_POLYGON);
		for(float i=0;i<360;i+=0.1)
			glVertex2f(cos(i)*radius+0,sin(i)*radius+550);
	glEnd();
  glColor3f(0.5f, 0.2f, 0.1f);
    glBegin(GL_POLYGON);

    glVertex2f(0.0,0.0);
     glVertex2f(100.0,0.0);
      glVertex2f(100.0,300.0);
       glVertex2f(170.0,575.0);
        glVertex2f(160.0,500.0);
         glVertex2f(100.0,200.0);
          glVertex2f(0.0,400.0);
          glEnd();


		//displayHelp("Press C",1000,100);
	}
    glutPostRedisplay();

glFlush();

}
void teacher_move(int a,int b)
{
    if(j<400 &&  flag6==1)
	{   drawClass();

		teacher(0+j,b+yMove);
		 j+=0.25;
		 student(j-100,33+yMove);
         j+=0.25;
	    student(j-190,33+yMove);
        j+=0.25;
         student(j-280,33+yMove);
        j+=0.25;
         student(j-370,33+yMove);
        j+=0.25;
		//j11+=100;
		//displayHelp("When teacher reaches the class,she stops.",900,100);

  float    radius=310.0;  //face
    glColor3f(0.0,1.0,0.0);

    glBegin(GL_POLYGON);
		for(float i=0;i<360;i+=0.1)
			glVertex2f(cos(i)*radius+0,sin(i)*radius+550);
	glEnd();
  glColor3f(0.5f, 0.2f, 0.1f);
    glBegin(GL_POLYGON);

    glVertex2f(0.0,0.0);
     glVertex2f(100.0,0.0);
      glVertex2f(100.0,300.0);
       glVertex2f(170.0,575.0);
        glVertex2f(160.0,500.0);
         glVertex2f(100.0,200.0);
          glVertex2f(0.0,400.0);
          glEnd();



	}
	else if(j<400)
	{   drawClass();

		teacher(0+j,b+yMove);
         student(j,33+yMove);
         student(j-100,33+yMove);
         student(j-200,33+yMove);
          student(j-300,33+yMove);
		//displayHelp("Type M to move forward",1000,100);
		displayHelp("The teacher and the students move towards the class.",780,100);
		 float    radius=310.0;  //face
    glColor3f(0.0,1.0,0.0);
    glBegin(GL_POLYGON);
		for(float i=0;i<360;i+=0.1)
			glVertex2f(cos(i)*radius+0,sin(i)*radius+550);
	glEnd();
	 glColor3f(0.5f, 0.2f, 0.1f);

    glBegin(GL_POLYGON);

   glVertex2f(0.0,0.0);
     glVertex2f(100.0,0.0);
      glVertex2f(100.0,300.0);
       glVertex2f(170.0,575.0);
        glVertex2f(160.0,500.0);
         glVertex2f(100.0,200.0);
          glVertex2f(0.0,400.0);
          glEnd();
	}

	else
	{
		//teacher(a+300,b+yMove);
		displayHelp("Teacher then enters the class.",900,100);
displayHelp("Press c to enter the classroom",500,650);
drawClass();

 float    radius=310.0;  //face
    glColor3f(0.0,1.0,0.0);
   glBegin(GL_POLYGON);
		for(float i=0;i<360;i+=0.1)
			glVertex2f(cos(i)*radius+0,sin(i)*radius+550);
	glEnd();
	 glColor3f(0.5f, 0.2f, 0.1f);

    glBegin(GL_POLYGON);


  glVertex2f(0.0,0.0);
     glVertex2f(100.0,0.0);
      glVertex2f(100.0,300.0);
       glVertex2f(170.0,575.0);
        glVertex2f(160.0,500.0);
         glVertex2f(100.0,200.0);
          glVertex2f(0.0,400.0);
          glEnd();

	if(j<700 && flag6==1)
	{

     glColor3f(0.0,0.0,0.0);
	 glBegin(GL_POLYGON);
		glVertex2f(800.0,550.0);
        glVertex2f(800.0,125.0);
        glVertex2f(500.0,125);
        glVertex2f(500.0,550.0);
	glEnd();
student(j-50,33+yMove);
         j+=0.3;
         student(j-90,33+yMove);
         j+=0.3;
          student(j-130,33+yMove);
        j+=0.3;
         student(j-170,33+yMove);
        j+=0.3;
        teacher(0+j-10,200+yMove);
		j+=0.3;

    glColor3f(0.435f, 0.2f, 0.1f);//door opens
    glBegin(GL_POLYGON);
		glVertex2f(800.0,550.0);
        glVertex2f(800.0,125.0);
        glVertex2f(600.0,80);
        glVertex2f(600.0,450.0);

glEnd();


	//teacher(650,200+yMove);



	}






	}


glutPostRedisplay();
//student_move(a-50,b+50);
glFlush();

}

void mydisplaySecondWindow()
{
	drawClass();

		if(j<500 && flag5==1)
    {
         student(j,33+yMove);
         j+=0.3;
    }

        //student(100+j,200+yMove);

		//j11+=100;





glutPostRedisplay();
//student_move(a-50,b+50);
glFlush();

}



    /*if(j>250.0 && flagThirdScene)
	{
		createThirdWindow();
	}*/


void initSecondWindow(void)
{
	glClearColor(1.0,0.9,0.3,0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0,1300,0,700);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}

void initThirdWindow()
{

    glClearColor(0.0,0.0,0.0,1.0);
     gluOrtho2D(0,1300,0,700);
}

void drawClass(void)
{


	//Class Board
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
		glVertex2f(600.0,550.0);
        glVertex2f(700.0,550.0);
        glVertex2f(700.0,590.0);
        glVertex2f(600.0,590.0);
	glEnd();

                  //Floor
    glColor3f(1.0,1.9,1.3);
    glBegin(GL_POLYGON);
		glVertex2f(0.0,0.0);
        glVertex2f(1500.0,0.0);
        glVertex2f(1500.0,125.0);
        glVertex2f(0.0,125.0);
	glEnd();


	//Door
	//glColor3f(0.36, 0.25, 0.2);
	glColor3f(0.435f, 0.2f, 0.1f);
    glBegin(GL_POLYGON);
		glVertex2f(500.0,125.0);
        glVertex2f(800.0,125.0);
        glVertex2f(800.0,550.0);
        glVertex2f(500.0,550.0);
	glEnd();
	glColor3f(0.0,0.0,0.0);
                 drawstring(610,570,0,"CLASS II");
glColor3f(0.5f, 0.9f, 0.0f);

glLineWidth(8);

glBegin(GL_LINES);


for(int i=900;i<=1400;i+=10)
{
    glVertex2f(i,150.0);
    glVertex2f(i,200.0);
}
glEnd();
glLineWidth(1);
    glColor3f(0.435f, 0.2f, 0.1f);
    glBegin(GL_POLYGON);
    for(int i=900;i<=1400;i+=100)
    {
        glVertex2f(i,125.0);
        glVertex2f(i-25,150.0);
        glVertex2f(i+125,150.0);
        glVertex2f(i+100,125.0);
    }
glEnd();




}
void studmsg(float x,float y)
{


     glColor3f(1.0,1.0,1.0);
    glBegin(GL_POLYGON);
    glVertex2f(x,y);
    glVertex2f(x+20,y+20);
     glVertex2f(x+20,y+20);
      glVertex2f(x+160,y+20);
       glVertex2f(x+160,y-20);
        glVertex2f(x+20,y-20);
         glVertex2f(x+20,y-20);
         glEnd();


}

void head(float x1,float y1)
{
     float    radius=20.0;  //face
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_POLYGON);
		for(float i=0;i<360;i+=0.1)
			glVertex2f(cos(i)*radius+x1,sin(i)*radius+y1-30);
	glEnd();

}
void ultastudent(float x1,float y1)
{
     float    radius=30.0;  //face
    glColor3f(1.0,0.90,0.85);
    glBegin(GL_POLYGON);
		for(float i=0;i<360;i+=0.1)
			glVertex2f(cos(i)*radius+x1,sin(i)*radius+y1+250);
	glEnd();
	 glColor3f(0.0,0.0,0.0);

  radius=6.0; //eye
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
		for(float i=0;i<360;i++)
			glVertex2f(cos(i)*radius+x1-10,sin(i)*radius+y1+250);
	glEnd();
	radius=2.0;//eye ball
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
		for(float i=0;i<360;i++)
			glVertex2f(cos(i)*radius+x1-10,sin(i)*radius+y1+250);
	glEnd();

glColor3f(0.0,0.0,0.0); //hair
	glBegin(GL_POLYGON);
        glVertex2f(x1-30,y1+250+30);
        glVertex2f(x1+10,y1+250-10);
        //glVertex2f(x-15,y-15);
        glVertex2f(x1+30,y1+250);
        glVertex2f(x1+30,y1+250+30);

        glEnd();

		glColor3f(1.0,0.90,0.85);  //neck
	    glBegin(GL_POLYGON);
		glVertex2f(x1-10.0,y1+250-20.0);
		glVertex2f(x1-10.0,y1+250-35.0);
		glVertex2f(x1+10.0,y1+250-35.0);
		glVertex2f(x1+10.0,y1+250-20.0);
	    glEnd();


	    glColor3f(1.0,1.0,1.0); //body
	    glBegin(GL_POLYGON);
	    glVertex2f(x1+15.0,y1+250-35.0);
	    glVertex2f(x1+25.0,y1+250-45.0);
	     glVertex2f(x1+25.0,y1+250-90.0);
	     glVertex2f(x1-25.0,y1+250-90.0);
	      glVertex2f(x1-25.0,y1+250-45.0);
	       glVertex2f(x1-15.0,y1+250-35.0);
	       glEnd();
	       glColor3f(1.0,0.90,0.85); //left leg
	glBegin(GL_POLYGON);
    glVertex2f(x1-23,y1+250-120);
    glVertex2f(x1-23,y1+250-150);
    glVertex2f(x1-7,y1+250-150);
    glVertex2f(x1-5,y1+250-120);
glEnd();
//Right Leg
	glColor3f(1.0,0.90,0.85);
	glBegin(GL_POLYGON);
		 glVertex2f(x1+5.0,y1+250-120.0);
         glVertex2f(x1+5.0,y1+250-160.0);
         glVertex2f(x1+22.0,y1+250-160.0);
         glVertex2f(x1+22.0,y1+250-120.0);
	glEnd();
	       glColor3f(0.0,0.2,0.6); //trouser
	    glBegin(GL_POLYGON);
	    glVertex2f(x1+25.0,y1+250-90.0);
	    glVertex2f(x1+25.0,y1+250-120.0);
	     glVertex2f(x1+5.0,y1+250-120.0);
	      glVertex2f(x1,y1+250-105.0);
	      glVertex2f(x1-5.0,y1+250-120.0);
           glVertex2f(x1-25.0,y1+250-120.0);
	        glVertex2f(x1-25.0,y1+250-90.0);

	       glEnd();
	       glColor3f(0.0,0.0,0.0);  //left shoe
	glBegin(GL_POLYGON);
   glVertex2f(x1-23,y1+250-150);
    glVertex2f(x1-30,y1+250-150);
	 glVertex2f(x1-30,y1+250-160);
	 glVertex2f(x1-5,y1+250-160);
	 glVertex2f(x1-5,y1+250-150);



	glEnd();




	glColor3f(0.0,0.0,0.0);  //right shoe
	glBegin(GL_POLYGON);
		glVertex2f(x1+22.0,y1+250-160.0);
		glVertex2f(x1+23,y1+250-160.0);
		glVertex2f(x1+23.0,y1+250-170.0);
		glVertex2f(x1-3.0,y1+250-170.0);
		glVertex2f(x1-3.0,y1+250-160.0);
	glEnd();

	         //right hand
	    glColor3f(1.0,0.90,0.85);
	    glBegin(GL_POLYGON);
		glVertex2f(x1+5.0,y1+250-55.0);
		glVertex2f(x1+5.0,y1+250-100.0);
		glVertex2f(x1-5,y1+250-100.0);
		glVertex2f(x1-5,y1+250-55.0);
	    glEnd();









	glColor3f(0.0,0.0,0.0);  //bag
	glBegin(GL_POLYGON);
		glVertex2f(x1+25.0,y1+250-45.0);
		glVertex2f(x1+42.0,y1+250-45.0);
		glVertex2f(x1+42.0,y1+250-90.0);
		glVertex2f(x1+25.0,y1+250-90.0);

	glEnd();

glColor3f(1.0,0.0,0.0);  //mouth
	glBegin(GL_LINE_STRIP);
		glVertex2f(x1-25,y1+233);
		glVertex2f(x1-10,y1+233);
		glVertex2f(x1-10,y1+235);
	glEnd();



}

void student(float x1,float y1)
{
    float    radius=30.0;  //face
    glColor3f(1.0,0.90,0.85);
    glBegin(GL_POLYGON);
		for(float i=0;i<360;i+=0.1)
			glVertex2f(cos(i)*radius+x1,sin(i)*radius+y1+250);
	glEnd();
	 glColor3f(0.0,0.0,0.0);

  radius=6.0; //eye
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
		for(float i=0;i<360;i++)
			glVertex2f(cos(i)*radius+x1+10,sin(i)*radius+y1+250);
	glEnd();
	radius=2.0;//eye ball
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
		for(float i=0;i<360;i++)
			glVertex2f(cos(i)*radius+x1+10,sin(i)*radius+y1+250);
	glEnd();

glColor3f(0.0,0.0,0.0); //hair
	glBegin(GL_POLYGON);
        glVertex2f(x1+30,y1+250+30);
        glVertex2f(x1-10,y1+250-10);
        //glVertex2f(x-15,y-15);
        glVertex2f(x1-30,y1+250);
        glVertex2f(x1-30,y1+250+30);

        glEnd();

		glColor3f(1.0,0.90,0.85);  //neck
	    glBegin(GL_POLYGON);
		glVertex2f(x1-10.0,y1+250-20.0);
		glVertex2f(x1-10.0,y1+250-35.0);
		glVertex2f(x1+10.0,y1+250-35.0);
		glVertex2f(x1+10.0,y1+250-20.0);
	    glEnd();


	    glColor3f(1.0,1.0,1.0); //body
	    glBegin(GL_POLYGON);
	    glVertex2f(x1+15.0,y1+250-35.0);
	    glVertex2f(x1+25.0,y1+250-45.0);
	     glVertex2f(x1+25.0,y1+250-90.0);
	     glVertex2f(x1-25.0,y1+250-90.0);
	      glVertex2f(x1-25.0,y1+250-45.0);
	       glVertex2f(x1-15.0,y1+250-35.0);
	       glEnd();
	       glColor3f(1.0,0.90,0.85); //left leg
	glBegin(GL_POLYGON);
    glVertex2f(x1+23,y1+250-120);
    glVertex2f(x1+23,y1+250-150);
    glVertex2f(x1+7,y1+250-150);
    glVertex2f(x1+5,y1+250-120);
glEnd();
//Right Leg
	glColor3f(1.0,0.90,0.85);
	glBegin(GL_POLYGON);
		 glVertex2f(x1-5.0,y1+250-120.0);
         glVertex2f(x1-5.0,y1+250-160.0);
         glVertex2f(x1-22.0,y1+250-160.0);
         glVertex2f(x1-22.0,y1+250-120.0);
	glEnd();
	       glColor3f(0.0,0.2,0.6); //trouser
	    glBegin(GL_POLYGON);
	    glVertex2f(x1+25.0,y1+250-90.0);
	    glVertex2f(x1+25.0,y1+250-120.0);
	     glVertex2f(x1+5.0,y1+250-120.0);
	      glVertex2f(x1,y1+250-105.0);
	      glVertex2f(x1-5.0,y1+250-120.0);
           glVertex2f(x1-25.0,y1+250-120.0);
	        glVertex2f(x1-25.0,y1+250-90.0);

	       glEnd();
	       glColor3f(0.0,0.0,0.0);  //left shoe
	glBegin(GL_POLYGON);
   glVertex2f(x1+23,y1+250-150);
    glVertex2f(x1+30,y1+250-150);
	 glVertex2f(x1+30,y1+250-160);
	 glVertex2f(x1+5,y1+250-160);
	 glVertex2f(x1+5,y1+250-150);



	glEnd();




	glColor3f(0.0,0.0,0.0);  //right shoe
	glBegin(GL_POLYGON);
		glVertex2f(x1-22.0,y1+250-160.0);
		glVertex2f(x1-23,y1+250-160.0);
		glVertex2f(x1-23.0,y1+250-170.0);
		glVertex2f(x1+3.0,y1+250-170.0);
		glVertex2f(x1+3.0,y1+250-160.0);
	glEnd();

	         //right hand
	    glColor3f(1.0,0.90,0.85);
	    glBegin(GL_POLYGON);
		glVertex2f(x1+5.0,y1+250-55.0);
		glVertex2f(x1+5.0,y1+250-100.0);
		glVertex2f(x1-5,y1+250-100.0);
		glVertex2f(x1-5,y1+250-55.0);
	    glEnd();









	glColor3f(0.0,0.0,0.0);  //bag
	glBegin(GL_POLYGON);
		glVertex2f(x1-25.0,y1+250-45.0);
		glVertex2f(x1-42.0,y1+250-45.0);
		glVertex2f(x1-42.0,y1+250-90.0);
		glVertex2f(x1-25.0,y1+250-90.0);

	glEnd();

glColor3f(1.0,0.0,0.0);  //mouth
	glBegin(GL_LINE_STRIP);
		glVertex2f(x1+25,y1+233);
		glVertex2f(x1+10,y1+233);
		glVertex2f(x1+10,y1+235);
	glEnd();



}
void smallt1_ulta(float x,float y)
{
     float radius = 15.0;
	glColor3f(1.0,0.90,0.85);

	glBegin(GL_POLYGON);
		for(float i=0;i<360;i+=0.1)
			glVertex2f(cos(i)*radius+x,sin(i)*radius+y);
	glEnd();
radius=3.0;
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
		for(float i=0;i<360;i++)
			glVertex2f(cos(i)*radius+x-4,sin(i)*radius+y);
	glEnd();

	radius=1.5;
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
		for(float i=0;i<360;i++)
			glVertex2f(cos(i)*radius+x-4,sin(i)*radius+y);
	glEnd();
	//Draws the Hair
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(x+15,y);
glVertex2f(x+15,y-30);
glVertex2f(x+25,y-30);
glVertex2f(x+15,y+15);
glVertex2f(x-25,y+15);
	glEnd();

//Draws the Neck
	glColor3f(1.0,0.90,0.85);
	glBegin(GL_POLYGON);
		glVertex2f(x-5.0,y-13.0);
		glVertex2f(x-5.0,y-20.0);
		glVertex2f(x+5.0,y-20.0);
		glVertex2f(x+5.0,y-13.0);
	glEnd();
	//Draws the Books

glColor3f(0.0,1.0,1.0);
	glBegin(GL_POLYGON);
		glVertex2f(x-10,y-35);
		glVertex2f(x-10,y-40);
		glVertex2f(x-30,y-40);
		glVertex2f(x-30,y-35);
	glEnd();
	glColor3f(1.0,0.0,1.0);
	glBegin(GL_POLYGON);
		glVertex2f(x-10,y-40);
		glVertex2f(x-10,y-45);
		glVertex2f(x-30,y-45);
		glVertex2f(x-30,y-40);
	glEnd();



		//Draws the Red Shirt
	glColor3f(0.0,0.0,1.0);
	glBegin(GL_POLYGON);
		glVertex2f(x-10.0,y-20.0);
		glVertex2f(x+10.0,y-20.0);
		glVertex2f(x+15.0,y-30.0);
		glVertex2f(x+15.0,y-90.0);
		glVertex2f(x-15.0,y-90.0);
		glVertex2f(x-15.0,y-30.0);
		glVertex2f(x-10.0,y-20.0);

	glEnd();
	//Draws the Right Hand
	glColor3f(1.0,0.90,0.85);
	glBegin(GL_POLYGON);
		glVertex2f(x+3,y-30);
		glVertex2f(x+3,y-60);
		glVertex2f(x-1,y-60);
		glVertex2f(x-1,y-30);
	glEnd();
	//Draws the Mouth
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_LINES);
	glLineWidth(0.1);
		glVertex2f(x-15,y-7);
		//glVertex2f(x+15,y-7);
		glVertex2f(x-10,y-9);
	glEnd();

}
void smallt_ulta(float x,float y)
{
     float radius = 15.0;
	glColor3f(1.0,0.90,0.85);

	glBegin(GL_POLYGON);
		for(float i=0;i<360;i+=0.1)
			glVertex2f(cos(i)*radius+x,sin(i)*radius+y);
	glEnd();
radius=3.0;
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
		for(float i=0;i<360;i++)
			glVertex2f(cos(i)*radius+x-4,sin(i)*radius+y);
	glEnd();

	radius=1.5;
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
		for(float i=0;i<360;i++)
			glVertex2f(cos(i)*radius+x-4,sin(i)*radius+y);
	glEnd();
	//Draws the Hair
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(x+5,y);
    glVertex2f(x-15,y+15);
    glVertex2f(x+25,y+15);

    glVertex2f(x+25,y-55);
    glVertex2f(x+15,y-55);
   glEnd();

//Draws the Neck
	glColor3f(1.0,0.90,0.85);
	glBegin(GL_POLYGON);
		glVertex2f(x-5.0,y-13.0);
		glVertex2f(x-5.0,y-20.0);
		glVertex2f(x+5.0,y-20.0);
		glVertex2f(x+5.0,y-13.0);
	glEnd();
	//Draws the Books

glColor3f(0.0,0.0,1.0);
	glBegin(GL_POLYGON);
		glVertex2f(x-10,y-35);
		glVertex2f(x-10,y-40);
		glVertex2f(x-30,y-40);
		glVertex2f(x-30,y-35);
	glEnd();
	glColor3f(0.0,1.0,0.0);
	glBegin(GL_POLYGON);
		glVertex2f(x-10,y-40);
		glVertex2f(x-10,y-45);
		glVertex2f(x-30,y-45);
		glVertex2f(x-30,y-40);
	glEnd();


	//Draws the Red Shirt
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_POLYGON);
		glVertex2f(x-7.0,y-20.0);
		glVertex2f(x+7.0,y-20.0);
		glVertex2f(x+12.0,y-30.0);
		glVertex2f(x+12.0,y-130.0);
		glVertex2f(x-12.0,y-130.0);
		glVertex2f(x-12.0,y-30.0);
		glVertex2f(x-7.0,y-20.0);

	glEnd();
	//Draws the Right Hand
	glColor3f(1.0,0.90,0.85);
	glBegin(GL_POLYGON);
		glVertex2f(x+3,y-30);
		glVertex2f(x+3,y-60);
		glVertex2f(x-1,y-60);
		glVertex2f(x-1,y-30);
	glEnd();
	//Draws the Mouth
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_LINES);
	glLineWidth(0.1);
		glVertex2f(x-15,y-7);
		//glVertex2f(x+15,y-7);
		glVertex2f(x-10,y-9);
	glEnd();

}
void small_teacher(float x,float y)
{
    float radius = 15.0;
	glColor3f(1.0,0.90,0.85);

	glBegin(GL_POLYGON);
		for(float i=0;i<360;i+=0.1)
			glVertex2f(cos(i)*radius+x,sin(i)*radius+y);
	glEnd();
	radius=3.0;
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
		for(float i=0;i<360;i++)
			glVertex2f(cos(i)*radius+x+4,sin(i)*radius+y);
	glEnd();

	radius=1.5;
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
		for(float i=0;i<360;i++)
			glVertex2f(cos(i)*radius+x+4,sin(i)*radius+y);
	glEnd();
	//Draws the Hair
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);


        glVertex2f(x-35,y-40);
 glVertex2f(x-10,y-40);
        glVertex2f(x-35,y+10);

glVertex2f(x+20,y+20);

		glVertex2f(x-35,y+20);
		glVertex2f(x-35,y-40);
	glEnd();

//Draws the Neck
	glColor3f(1.0,0.90,0.85);
	glBegin(GL_POLYGON);
		glVertex2f(x-5.0,y-13.0);
		glVertex2f(x-5.0,y-20.0);
		glVertex2f(x+5.0,y-20.0);
		glVertex2f(x+5.0,y-13.0);
	glEnd();



//Draws the Books

glColor3f(0.0,0.0,1.0);
	glBegin(GL_POLYGON);
		glVertex2f(x+10,y-35);
		glVertex2f(x+10,y-40);
		glVertex2f(x+30,y-40);
		glVertex2f(x+30,y-35);
	glEnd();
	glColor3f(0.0,1.0,0.0);
	glBegin(GL_POLYGON);
		glVertex2f(x+10,y-40);
		glVertex2f(x+10,y-45);
		glVertex2f(x+30,y-45);
		glVertex2f(x+30,y-40);
	glEnd();


	//Draws the Red Shirt
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_POLYGON);
		glVertex2f(x-7.0,y-20.0);
		glVertex2f(x+7.0,y-20.0);
		glVertex2f(x+12.0,y-30.0);
		glVertex2f(x+12.0,y-130.0);
		glVertex2f(x-12.0,y-130.0);
		glVertex2f(x-12.0,y-30.0);
		glVertex2f(x-7.0,y-20.0);

	glEnd();



//Draws the Right Hand
	glColor3f(1.0,0.90,0.85);
	glBegin(GL_POLYGON);
		glVertex2f(x+3,y-30);
		glVertex2f(x+3,y-60);
		glVertex2f(x,y-60);
		glVertex2f(x,y-30);
	glEnd();





	//Draws the Mouth
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_LINES);
	glLineWidth(0.1);
		glVertex2f(x+15,y-7);
		//glVertex2f(x+15,y-7);
		glVertex2f(x+10,y-9);
	glEnd();


}

/*void drawScene()
{
   // glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);


    student();
    //drawBall2();

    glutSwapBuffers();
}
*/





void start()
{   glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);


glColor3f(0.0,0.0,0.0);
    drawstring(-12.5,75.0,0.0,"CLASS II");
    glColor3f(1.0f, 1.0f, 1.0f);//class board
	glBegin(GL_POLYGON);
	glVertex2f(-14.0f, 70.0f);
	glVertex2f(0.0f,70.0f);
	glVertex2f(0.0f, 80.0f);
    glVertex2f(-14.0f,80.0f);

	glEnd();


    glColor3f(0.4f, 0.2f, 0.1f);//DOOR
	glBegin(GL_POLYGON);
	glVertex2f(-35.0f, 70.0f);
	glVertex2f(20.0f,70.0f);
	glVertex2f(20.0f, -80.0f);
    glVertex2f(-35.0f, -80.f);

	glEnd();

	glColor3f(1.0f, 1.9f, 1.3f);//floor
	glBegin(GL_POLYGON);
	glVertex2f(-100.0f, -80.0f);
	glVertex2f(100.0f,-80.0f);
	glVertex2f(100.0f, -100.0f);
    glVertex2f(-100.0f, -100.f);
   glEnd();
drawCircle(510, 407,
		232, 190, 123, // Lighter Skin
		1, 1,
		30);
	glColor3f(1.0f, 0.9f, 0.3f);//DOOR-wall
	glBegin(GL_POLYGON);
	glVertex2f(-100.0f, 100.0f);
	glVertex2f(100.0f,100.0f);
	glVertex2f(100.0f, -100.0f);
    glVertex2f(-100.0f, -100.f);

   glEnd();


//student();

    glFlush();


}


void mydisplay(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	if(flag==0)
		frontscreen();



}

void myKeyboardFunc( unsigned char key, int x, int y )
{
    switch(key)
    {
        case 13:flagSecondScene=1;
                createThirdWindow();
                break;
        case 49:flagThirdScene=1;
                flag=1;
                mydisplay();
                break;

    }
    mydisplay();
}


void myinit()
{
    glClearColor(0.0,0.0,0.0,1.0);
    glOrtho(-100.0,100.0,-100.0,100.0,-50.0,50.0);
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB|GLUT_DEPTH);
    glutInitWindowSize(1500, 1500);
    firstWindow=glutCreateWindow("Classroom simulation");
//glutDisplayFunc(drawScene);

    glutDisplayFunc(mydisplay);
    //glutDisplayFunc(midpoint_circle);

    glutKeyboardFunc(myKeyboardFunc);
    myinit();

    glEnable(GL_DEPTH_TEST);
    glutMainLoop();
    //glutTimerFunc(100,student,0);
    //student();
}

void keySecond(unsigned char key,int x,int y)
{
	if(key=='x'||key=='X')
		exit(0);
	if(key=='m'||key=='M')
		flag5=1;
	if(key=='c' ||key=='C')
	{
		flagThirdScene=1;
		createThirdWindow();
	}
}
void displayHelp(char str[],float x,float y)
{
    int i;
	//glColor3f(0.0,0.0,0.0);
	glRasterPos2f(x,y);
    for(i=0;i<strlen(str);i++)
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str[i]);
    glutPostRedisplay();
}
void displayHelp1(char str[],float x,float y)
{
    int i;
	//glColor3f(0.0,0.0,0.0);
	glRasterPos2f(x,y);
    for(i=0;i<strlen(str);i++)
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,str[i]);
    glutPostRedisplay();
}

void createNewWindow()
{
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(1500,1500);
	glutInitWindowPosition(0,0);
	glutDestroyWindow(firstWindow);
	secondWindow=glutCreateWindow("Classroom simulation");
	//glutFullScreen();
	glutDisplayFunc(mydisplaySecondWindow);
	glutKeyboardFunc(keySecond);
	//glutKeyboardFunc(keySecond);
	initSecondWindow();
}
void createThirdWindow()
{
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(1500,1500);
	glutInitWindowPosition(0,0);
	glutDestroyWindow(secondWindow);
	thirdWindow=glutCreateWindow("Classroom simulation");
	//glutFullScreen();

	 glutDisplayFunc(mydisplayThirdWindow);
	 //PlaySound("C:/Users/DELL/Desktop/cg_program/song1.wav",NULL,SND_SYNC|SND_LOOP|SND_FILENAME|SND_NODEFAULT);

	glutKeyboardFunc(keyThird);


	initSecondWindow();

}
void secondwindmessage(float x,float y)
{

    glColor3f(1.0,1.0,1.0);
    glBegin(GL_POLYGON);
    glVertex2f(x,y);
    glVertex2f(x+20,y+20);
     glVertex2f(x+20,y+30);
      glVertex2f(x+160,y+30);
       glVertex2f(x+160,y-30);
        glVertex2f(x+20,y-30);
         glVertex2f(x+20,y-20);
         glEnd();
glColor3f(1.0,0.0,0.0);
         displayHelp1("Good Morning students!!!",x+20,y+20);
          displayHelp1("Let's start today's class.",x+20,y);
          displayHelp1("Open your note books.",x+20,y-20);

}
void ultawindmessage(float x,float y)
{

    glColor3f(1.0,1.0,1.0);
    glBegin(GL_POLYGON);
    glVertex2f(x,y);
    glVertex2f(x-20,y+20);
     glVertex2f(x-20,y+30);
      glVertex2f(x-180,y+30);
       glVertex2f(x-180,y-30);
        glVertex2f(x-20,y-30);
         glVertex2f(x-20,y-20);
         glEnd();
glColor3f(1.0,0.0,0.0);
         displayHelp1("Thank you students!!!",x-170,y+20);
          displayHelp1("Complete your homework",x-175,y);
          displayHelp1("Let's meet tomorrow.",x-170,y-20);

}

void keyThird(unsigned char key,int x,int y)
{
	if(key=='x'||key=='X')
		frontscreen();
	if(key=='m'||key=='M')
		flag6=1;

	if(key=='c' ||key=='C')
	{
		flagFourthScene=1;
		createFourthWindow();
	}
}


void mydisplayThirdWindow()
{

  glClear(GL_COLOR_BUFFER_BIT);

  teacher_move(0,150);

}
void keyFourth(unsigned char key,int x,int y)
{
	if(key=='x'||key=='X')
		exit(0);
	if(key=='m'||key=='M')
        j=0.0;
		flag7=1;
	if(key=='c' ||key=='C')
{
    flagFifthScene=1;
	createFifthWindow();
}


}
void keyFifth(unsigned char key,int x,int y)
{
	if(key=='x'||key=='X')
		exit(0);
    if(key=='c' ||key=='C')
{
    flagSixthScene=1;
	createSixthWindow();
}
}
void keySixth(unsigned char key,int x,int y)
{
	if(key=='x'||key=='X')
		exit(0);
    if(key=='m'||key=='M')
        flag8=1;
    if(key=='c'||key=='C')
    {    flagSeventhScene=1;
        createSeventhWindow();
    }
}
void keySeventh(unsigned char key,int x,int y)
{
	if(key=='x'||key=='X')
		exit(0);
    if(key=='m'||key=='M')
    {
        flag9=1;
    }
     if(key=='c'||key=='C')
    {    flagEighthScene=1;
        createEighthWindow();
    }


}
void keyEighth(unsigned char key,int x,int y)
{
	if(key=='x'||key=='X')
		exit(0);
    if(key=='c' ||key=='C')
{
    flagNinethScene=1;
	createNinethWindow();
}
}
void keyTenth(unsigned char key,int x,int y)
{
	if(key=='x'||key=='X')
		createEleventhWindow();
    if(key=='s'||key=='S')
        z=1;
    if(key=='r'||key=='R')
        z=2;
    if(key=='t'||key=='T')
        z=3;
    if(key=='u'||key=='U')
        z=4;


}
void keyNineth(unsigned char key,int x,int y)
{
	if(key=='x'||key=='X')
		exit(0);
    if(key=='m'||key=='M')
        flag10=1;
    if(key=='c' ||key=='C')
{
   flagTenthScene=1;
   	   createTenthWindow();
}
}
void keyEleventh(unsigned char key,int x,int y)
{
	if(key=='x'||key=='X')
		exit(0);
    if(key=='m'||key=='M')
        flag11=1;
  /*  if(key=='c'||key=='C')
    {

   	   createTwelvthWindow();
    }*/
}
void createFourthWindow()
{
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(1500,1500);
	glutInitWindowPosition(0,0);
	glutDestroyWindow(thirdWindow);
	fourthWindow=glutCreateWindow("Classroom simulation");
	//glutFullScreen();
	glutDisplayFunc(mydisplayFourthWindow);
	glutKeyboardFunc(keyFourth);
	initThirdWindow();
}

void createFifthWindow()
{
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(1500,1500);
	glutInitWindowPosition(0,0);
	glutDestroyWindow(fourthWindow);
	fourthWindow=glutCreateWindow("Classroom simulation");
	//glutFullScreen();
	glutDisplayFunc(mydisplayFifthWindow);
	glutKeyboardFunc(keyFifth);
	initThirdWindow();
}
void createSixthWindow()
{
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(1500,1500);
	glutInitWindowPosition(0,0);
	glutDestroyWindow(fifthWindow);
	sixthWindow=glutCreateWindow("Classroom simulation");
	//glutFullScreen();
	glutDisplayFunc(mydisplaySixthWindow);
	glutKeyboardFunc(keySixth);
	initThirdWindow();
}
void createSeventhWindow()
{
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(1500,1500);
	glutInitWindowPosition(0,0);
	glutDestroyWindow(sixthWindow);
	seventhWindow=glutCreateWindow("Classroom simulation");
	//glutFullScreen();
	glutDisplayFunc(mydisplaySeventhWindow);
	glutKeyboardFunc(keySeventh);
	initThirdWindow();
}
void createEighthWindow()
{
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(1500,1500);
	glutInitWindowPosition(0,0);
	glutDestroyWindow(seventhWindow);
	eighthWindow=glutCreateWindow("Classroom simulation");
	//glutFullScreen();
	glutDisplayFunc(mydisplayEighthWindow);
	glutKeyboardFunc(keyEighth);
	initThirdWindow();
}
void createNinethWindow()
{
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(1500,1500);
	glutInitWindowPosition(0,0);
	glutDestroyWindow(eighthWindow);
	ninethWindow=glutCreateWindow("Classroom simulation");
	//glutFullScreen();
	glutDisplayFunc(mydisplayNinethWindow);
	glutKeyboardFunc(keyNineth);
	initThirdWindow();
}
void createTenthWindow()
{
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(1500,1500);
	glutInitWindowPosition(0,0);
	glutDestroyWindow(ninethWindow);
	tenthWindow=glutCreateWindow("Classroom simulation");
	//glutFullScreen();
	glutDisplayFunc(mydisplayTenthWindow);
	glutKeyboardFunc(keyTenth);
	initThirdWindow();
}
void createEleventhWindow()
{
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(1500,1500);
	glutInitWindowPosition(0,0);
	glutDestroyWindow(tenthWindow);
	eleventhWindow=glutCreateWindow("Classroom simulation");
	//glutFullScreen();
	glutDisplayFunc(mydisplayEleventhWindow);

	glutKeyboardFunc(keyEleventh);
	initThirdWindow();
}
void createTwelvthWindow()
{
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(1500,1500);
	glutInitWindowPosition(0,0);
	glutDestroyWindow(eleventhWindow);
	twelvthWindow=glutCreateWindow("Classroom simulation");
	//glutFullScreen();
	glutDisplayFunc(mydisplayTwelvthWindow);
	//glutKeyboardFunc(keyTwelvth);
	initThirdWindow();
}
void mydisplayEleventhWindow()
{glClear(GL_COLOR_BUFFER_BIT);


studentmove(500.0,30.0);

 /*       radius=310.0;  //face
    glColor3f(0.0,1.0,0.0);

    glBegin(GL_POLYGON);
		for(float i=0;i<360;i+=0.1)
			glVertex2f(cos(i)*radius+0,sin(i)*radius+550);
	glEnd();
  glColor3f(0.5f, 0.2f, 0.1f);
    glBegin(GL_POLYGON);

    glVertex2f(0.0,0.0);
     glVertex2f(100.0,0.0);
      glVertex2f(100.0,300.0);
       glVertex2f(170.0,575.0);
        glVertex2f(160.0,500.0);
         glVertex2f(100.0,200.0);
          glVertex2f(0.0,400.0);
          glEnd();

*/
}
void mydisplayTenthWindow()
{
    glClear(GL_COLOR_BUFFER_BIT);
     display();
     glColor3f(0.5f,0.8f,0.9f);//DOOR
	glBegin(GL_POLYGON);
	//glBegin(GL_POLYGON);
	glVertex2f(70.0f, 400.0f);//
	glVertex2f(70.0f,178.0f);//
        glVertex2f(15.0f, 40.f);
	glVertex2f(15.0f, 440.0f);
	glEnd();
    glColor3f(0.4f, 0.2f, 0.1f);//DOOR
	glBegin(GL_POLYGON);
	//glBegin(GL_POLYGON);
	glVertex2f(15.0f, 40.0f);//
	glVertex2f(40.0f,150.0f);//
        glVertex2f(40.0f, 380.f);
	glVertex2f(15.0f, 440.0f);
	glEnd();

	if(z==1)
    {
        studmsg(170.0f,150.0f);
        glColor3f(1.0f,0.0f,0.0f);
        displayHelp1("Did you understand?",180.0f,150.0f);
    }
    if(z==2)
    {
        studmsg(430.0f,150.0f);
        glColor3f(1.0f,0.0f,0.0f);
        displayHelp1("Yes!!",460.0f,150.0f);
    }

if(z==3)
    {
        studmsg(870.0f,150.0f);
        glColor3f(1.0f,0.0f,0.0f);
        displayHelp1("Can you give your notes?",880.0f,150.0f);
    }
    if(z==4)
    {
        studmsg(1130.0f,150.0f);
        glColor3f(1.0f,0.0f,0.0f);
        displayHelp1("Okay!",1180.0f,150.0f);
    }


}


void mydisplayNinethWindow()
{ glClear(GL_COLOR_BUFFER_BIT);
     display();

      smallt1_ultamove(400,260);
  

}
void mydisplayTwelvthWindow()
{ glClear(GL_COLOR_BUFFER_BIT);
     drawClass();
 float    radius=310.0;  //face
    glColor3f(0.0,1.0,0.0);
    glBegin(GL_POLYGON);
		for(float i=0;i<360;i+=0.1)
			glVertex2f(cos(i)*radius+0,sin(i)*radius+550);
	glEnd();
	 glColor3f(0.5f, 0.2f, 0.1f);

    glBegin(GL_POLYGON);

   glVertex2f(0.0,0.0);
     glVertex2f(100.0,0.0);
      glVertex2f(100.0,300.0);
       glVertex2f(170.0,575.0);
        glVertex2f(160.0,500.0);
         glVertex2f(100.0,200.0);
          glVertex2f(0.0,400.0);
          glEnd();

}
void mydisplaySeventhWindow()
{
    glClear(GL_COLOR_BUFFER_BIT);
     //display();


     smallt1_move(90.0,260.0);

}
void mydisplaySixthWindow()
{
    glClear(GL_COLOR_BUFFER_BIT);
     display();
     smallt_ulta(400,300);
    // ultawindmessage(380,300);


 
smallt_ultamove(400,300);


}
void mydisplayFourthWindow()
{
    glClear(GL_COLOR_BUFFER_BIT);
    //display();

    smallt_move(90.0,300.0);





}
void mydisplayFifthWindow()
{
     glClear(GL_COLOR_BUFFER_BIT);
     display();
     small_teacher1(300,300);
     glColor3f(1.0,1.0,1.0);
     displayHelp("ENGLISH",350,330);
     displayHelp1("SENTENCE FORMATION USING FEW WORDS",350,310);
     displayHelp1("1.PLAY 2.ICECREAM 3.FLOWER ",350,290);


}
void mydisplayEighthWindow()
{
     glClear(GL_COLOR_BUFFER_BIT);
     display();
      glColor3f(0.5f,0.8f,0.9f);//DOOR
	glBegin(GL_POLYGON);
	//glBegin(GL_POLYGON);
	glVertex2f(70.0f, 400.0f);//
	glVertex2f(70.0f,178.0f);//
        glVertex2f(15.0f, 40.f);
	glVertex2f(15.0f, 440.0f);
	glEnd();
    glColor3f(0.4f, 0.2f, 0.1f);//DOOR
	glBegin(GL_POLYGON);
	//glBegin(GL_POLYGON);
	glVertex2f(15.0f, 40.0f);//
	glVertex2f(40.0f,150.0f);//
        glVertex2f(40.0f, 380.f);
	glVertex2f(15.0f, 440.0f);
	glEnd();

     small1_teacher1(300,280);
     glColor3f(1.0,1.0,1.0);
     displayHelp("MATHEMATICS",350,310);
     displayHelp1("MULTIPLICATION",350,290);
    // displayHelp1("2*4=8 ",350,290);
      displayHelp1("11*8=88 ",350,270);


}

void smallt_move(float a,float b)
{
    if(j<200 && flag7==1)
    {display();
        small_teacher(0+a+j,b+yMove);

        //secondwindmessage(a+j+18,b+yMove-10);
 j+=1.5;
    }
    else if(j<500)
	{display();
	    small_teacher(0+a+j,b+yMove);
	     secondwindmessage(a+j+18,b+yMove-10);

	}


	else
    {  display();
        small_teacher(0+a,b+yMove);
       // secondwindmessage(a+18,b+yMove-10);

    }

glutPostRedisplay();

glFlush();


}
void smallt1_move(float a2,float b2)
{
    if(j<380 && flag9==1)
    {display();
     //door open
  glColor3f(0.5f,0.8f,0.9f);//DOOR
	glBegin(GL_POLYGON);
	//glBegin(GL_POLYGON);
	glVertex2f(70.0f, 400.0f);//
	glVertex2f(70.0f,178.0f);//
        glVertex2f(15.0f, 40.f);
	glVertex2f(15.0f, 440.0f);
	glEnd();
    glColor3f(0.4f, 0.2f, 0.1f);//DOOR
	glBegin(GL_POLYGON);
	//glBegin(GL_POLYGON);
	glVertex2f(15.0f, 40.0f);//
	glVertex2f(40.0f,150.0f);//
        glVertex2f(40.0f, 380.f);
	glVertex2f(15.0f, 440.0f);
	glEnd();



    small1_teacher(0+j-a2,b2+yMove);

        secondwindmessage(j-a2+18,b2+yMove-10);



j+=1.5;
    }
   else if(j<700)
	{display();
	glColor3f(0.5f,0.8f,0.9f);//DOOR
	glBegin(GL_POLYGON);
	//glBegin(GL_POLYGON);
	glVertex2f(70.0f, 400.0f);//
	glVertex2f(70.0f,178.0f);//
        glVertex2f(15.0f, 40.f);
	glVertex2f(15.0f, 440.0f);
	glEnd();
    glColor3f(0.4f, 0.2f, 0.1f);//DOOR
	glBegin(GL_POLYGON);
	//glBegin(GL_POLYGON);
	glVertex2f(15.0f, 40.0f);//
	glVertex2f(40.0f,150.0f);//
        glVertex2f(40.0f, 380.f);
	glVertex2f(15.0f, 440.0f);
	glEnd();
	small1_teacher(0+j-a2,b2+yMove);

	    //secondwindmessage(j-a2+18,b2+yMove-10);

	}


else{
    display();
   glColor3f(0.5f,0.8f,0.9f);//DOOR
	glBegin(GL_POLYGON);
	//glBegin(GL_POLYGON);
	glVertex2f(70.0f, 400.0f);//
	glVertex2f(70.0f,178.0f);//
        glVertex2f(15.0f, 40.f);
	glVertex2f(15.0f, 440.0f);
	glEnd();
    glColor3f(0.4f, 0.2f, 0.1f);//DOOR
	glBegin(GL_POLYGON);
	//glBegin(GL_POLYGON);
	glVertex2f(15.0f, 40.0f);//
	glVertex2f(40.0f,150.0f);//
        glVertex2f(40.0f, 380.f);
	glVertex2f(15.0f, 440.0f);
	glEnd();
       small1_teacher(0+a2,b2+yMove);
      // secondwindmessage(a2+18,b2+yMove-10);



}

glutPostRedisplay();

glFlush();



}
void small1_teacher(float x,float y)
{
    float radius = 15.0;
	glColor3f(1.0,0.90,0.85);

	glBegin(GL_POLYGON);
		for(float i=0;i<360;i+=0.1)
			glVertex2f(cos(i)*radius+x,sin(i)*radius+y);
	glEnd();
	radius=3.0;
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
		for(float i=0;i<360;i++)
			glVertex2f(cos(i)*radius+x+4,sin(i)*radius+y);
	glEnd();

	radius=1.5;
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
		for(float i=0;i<360;i++)
			glVertex2f(cos(i)*radius+x+4,sin(i)*radius+y);
	glEnd();
	//Draws the Hair
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);

glVertex2f(x-15,y);
glVertex2f(x-15,y-30);
glVertex2f(x-25,y-30);
glVertex2f(x-15,y+15);
glVertex2f(x+25,y+15);
	glEnd();

//Draws the Neck
	glColor3f(1.0,0.90,0.85);
	glBegin(GL_POLYGON);
		glVertex2f(x-5.0,y-13.0);
		glVertex2f(x-5.0,y-20.0);
		glVertex2f(x+5.0,y-20.0);
		glVertex2f(x+5.0,y-13.0);
	glEnd();



//Draws the Books

glColor3f(0.0,1.0,1.0);
	glBegin(GL_POLYGON);
		glVertex2f(x+10,y-35);
		glVertex2f(x+10,y-40);
		glVertex2f(x+30,y-40);
		glVertex2f(x+30,y-35);
	glEnd();
	glColor3f(1.0,0.0,1.0);
	glBegin(GL_POLYGON);
		glVertex2f(x+10,y-40);
		glVertex2f(x+10,y-45);
		glVertex2f(x+30,y-45);
		glVertex2f(x+30,y-40);
	glEnd();


	//Draws the Red Shirt
	glColor3f(0.0,0.0,1.0);
	glBegin(GL_POLYGON);
		glVertex2f(x-10.0,y-20.0);
		glVertex2f(x+10.0,y-20.0);
		glVertex2f(x+15.0,y-30.0);
		glVertex2f(x+15.0,y-90.0);
		glVertex2f(x-15.0,y-90.0);
		glVertex2f(x-15.0,y-30.0);
		glVertex2f(x-10.0,y-20.0);

	glEnd();



//Draws the Right Hand
	glColor3f(1.0,0.90,0.85);
	glBegin(GL_POLYGON);
		glVertex2f(x+3,y-30);
		glVertex2f(x+3,y-60);
		glVertex2f(x,y-60);
		glVertex2f(x,y-30);
	glEnd();





	//Draws the Mouth
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_LINES);
	glLineWidth(0.1);
		glVertex2f(x+15,y-7);
		//glVertex2f(x+15,y-7);
		glVertex2f(x+10,y-9);
	glEnd();


}
void small1_teacher1(float x,float y)
{
    float radius = 15.0;
	glColor3f(1.0,0.90,0.85);

	glBegin(GL_POLYGON);
		for(float i=0;i<360;i+=0.1)
			glVertex2f(cos(i)*radius+x,sin(i)*radius+y);
	glEnd();
	radius=3.0;
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
		for(float i=0;i<360;i++)
			glVertex2f(cos(i)*radius+x+4,sin(i)*radius+y);
	glEnd();

	radius=1.5;
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
		for(float i=0;i<360;i++)
			glVertex2f(cos(i)*radius+x+4,sin(i)*radius+y);
	glEnd();
	//Draws the Hair
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);

glVertex2f(x-15,y);
glVertex2f(x-15,y-30);
glVertex2f(x-25,y-30);
glVertex2f(x-15,y+15);
glVertex2f(x+25,y+15);
	glEnd();

//Draws the Neck
	glColor3f(1.0,0.90,0.85);
	glBegin(GL_POLYGON);
		glVertex2f(x-5.0,y-13.0);
		glVertex2f(x-5.0,y-20.0);
		glVertex2f(x+5.0,y-20.0);
		glVertex2f(x+5.0,y-13.0);
	glEnd();



//Draws the Books

glColor3f(0.0,1.0,1.0);
	glBegin(GL_POLYGON);
		glVertex2f(x+10,y-35);
		glVertex2f(x+10,y-40);
		glVertex2f(x+30,y-40);
		glVertex2f(x+30,y-35);
	glEnd();
	glColor3f(1.0,0.0,1.0);
	glBegin(GL_POLYGON);
		glVertex2f(x+10,y-40);
		glVertex2f(x+10,y-45);
		glVertex2f(x+30,y-45);
		glVertex2f(x+30,y-40);
	glEnd();




	//Draws the Red Shirt
	glColor3f(0.0,0.0,1.0);
	glBegin(GL_POLYGON);
		glVertex2f(x-10.0,y-20.0);
		glVertex2f(x+10.0,y-20.0);
		glVertex2f(x+15.0,y-30.0);
		glVertex2f(x+15.0,y-90.0);
		glVertex2f(x-15.0,y-90.0);
		glVertex2f(x-15.0,y-30.0);
		glVertex2f(x-10.0,y-20.0);

	glEnd();



//Draws the Right Hand_writing_board
	glColor3f(1.0,0.90,0.85);
	glBegin(GL_POLYGON);
		glVertex2f(x+3,y-30);
		glVertex2f(x+3,y-40);
		glVertex2f(x+28,y-25);
		glVertex2f(x+28,y-18);
	glEnd();







	//Draws the Mouth
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_LINES);
	glLineWidth(0.1);
		glVertex2f(x+15,y-7);
		//glVertex2f(x+15,y-7);
		glVertex2f(x+10,y-9);
	glEnd();


}


void small_teacher1(float x,float y)
{
    float radius = 15.0;
	glColor3f(1.0,0.90,0.85);

	glBegin(GL_POLYGON);
		for(float i=0;i<360;i+=0.1)
			glVertex2f(cos(i)*radius+x,sin(i)*radius+y);
	glEnd();
	radius=3.0;
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
		for(float i=0;i<360;i++)
			glVertex2f(cos(i)*radius+x+4,sin(i)*radius+y);
	glEnd();

	radius=1.5;
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
		for(float i=0;i<360;i++)
			glVertex2f(cos(i)*radius+x+4,sin(i)*radius+y);
	glEnd();
	//Draws the Hair
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);

        glVertex2f(x-35,y-40);
        glVertex2f(x-10,y-40);
        glVertex2f(x-35,y+10);

		glVertex2f(x+20,y+20);

		glVertex2f(x-35,y+20);
		glVertex2f(x-35,y-40);


	glEnd();

//Draws the Neck
	glColor3f(1.0,0.90,0.85);
	glBegin(GL_POLYGON);
		glVertex2f(x-5.0,y-13.0);
		glVertex2f(x-5.0,y-20.0);
		glVertex2f(x+5.0,y-20.0);
		glVertex2f(x+5.0,y-13.0);
	glEnd();



//Draws the Books

glColor3f(0.0,0.0,1.0);
	glBegin(GL_POLYGON);
		glVertex2f(x+10,y-35);
		glVertex2f(x+10,y-40);
		glVertex2f(x+30,y-40);
		glVertex2f(x+30,y-35);
	glEnd();
	glColor3f(0.0,1.0,0.0);
	glBegin(GL_POLYGON);
		glVertex2f(x+10,y-40);
		glVertex2f(x+10,y-45);
		glVertex2f(x+30,y-45);
		glVertex2f(x+30,y-40);
	glEnd();


	//Draws the Red Shirt
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_POLYGON);
		glVertex2f(x-7.0,y-20.0);
		glVertex2f(x+7.0,y-20.0);
		glVertex2f(x+12.0,y-30.0);
		glVertex2f(x+12.0,y-130.0);
		glVertex2f(x-12.0,y-130.0);
		glVertex2f(x-12.0,y-30.0);
		glVertex2f(x-7.0,y-20.0);

	glEnd();



/*Draws the Right Hand
	glColor3f(1.0,0.90,0.85);
	glBegin(GL_POLYGON);
		glVertex2f(x+3,y-30);
		glVertex2f(x+3,y-60);
		glVertex2f(x,y-60);
		glVertex2f(x,y-30);
	glEnd();
	*/

	//Draws the Right Hand_writing_board
	glColor3f(1.0,0.90,0.85);
	glBegin(GL_POLYGON);
		glVertex2f(x+3,y-30);
		glVertex2f(x+3,y-40);
		glVertex2f(x+28,y-25);
		glVertex2f(x+28,y-18);
	glEnd();




	//Draws the Mouth
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_LINES);
	glLineWidth(0.1);
		glVertex2f(x+15,y-7);
		//glVertex2f(x+15,y-7);
		glVertex2f(x+10,y-9);
	glEnd();
/*

	//Draws the Nose
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINE_STRIP);
		glVertex2f(x+32,y+140);
		glVertex2f(x+32,y+150);
		glVertex2f(x+34,y+155);
	glEnd();

	glBegin(GL_LINE_STRIP);
		glVertex2f(x-10,y+160);
		glVertex2f(x-20,y+160);
		glVertex2f(x-20,y+140);
		glVertex2f(x-10,y+140);
	glEnd();

	glBegin(GL_LINES);
		glVertex2f(x-20,y+150);
		glVertex2f(x-10,y+150);
	glEnd();
glFlush();*/
}

void teacher(float x,float y)
{
	//Draws the Face
	float radius = 35.0;
	glColor3f(1.0,0.90,0.85);

	glBegin(GL_POLYGON);
		for(float i=0;i<360;i+=0.1)
			glVertex2f(cos(i)*radius+x,sin(i)*radius+y+150);
	glEnd();

	radius=6.0;
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
		for(float i=0;i<360;i++)
			glVertex2f(cos(i)*radius+x+20,sin(i)*radius+y+160);
	glEnd();

	radius=3.0;
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
		for(float i=0;i<360;i++)
			glVertex2f(cos(i)*radius+x+20,sin(i)*radius+y+160);
	glEnd();


	//Draws the Hair
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
        glVertex2f(x-60,y+150);
        glVertex2f(x-60,y+40);
		glVertex2f(x-25,y+40);

		glVertex2f(x-10,y+170);
		glVertex2f(x-55,y+175);

        glVertex2f(x+40,y+195);
		glVertex2f(x+35,y+175);
		glVertex2f(x+20,y+170);
	glEnd();


	//Draws the Neck
	glColor3f(1.0,0.90,0.85);
	glBegin(GL_POLYGON);
		glVertex2f(x-10.0,y+100.0);
		glVertex2f(x-10.0,y+120.0);
		glVertex2f(x+10.0,y+120.0);
		glVertex2f(x+10.0,y+100.0);
	glEnd();


	//Draws the Left Hand
	glBegin(GL_POLYGON);
		glVertex2f(x+10,y+90);
		glVertex2f(x+10,y+100);
		glVertex2f(x+50,y+85);
		glVertex2f(x+50,y+75);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(x+50,y+75);
		glVertex2f(x+50,y+85);
		glVertex2f(x+75,y+105);
		glVertex2f(x+75,y+95);
	glEnd();


	//Draws the Red Shirt
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_POLYGON);
		glVertex2f(x-25,y);
		glVertex2f(x-25,y+75);
		glVertex2f(x-15,y+100);
		glVertex2f(x+15,y+100);
		glVertex2f(x+25,y+75);
		glVertex2f(x+25,y);
	glEnd();


	//Draws the Left Leg
	glColor3f(1.0,0.90,0.85);
	glBegin(GL_POLYGON);
		glVertex2f(x-15,y-75);
		glVertex2f(x-15,y);
		glVertex2f(x-5,y);
		glVertex2f(x-5,y-75);
	glEnd();

	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
		glVertex2f(x-15,y-75);
		glVertex2f(x-5,y-65);
		glVertex2f(x+15,y-70);
		glVertex2f(x+15,y-75);
	glEnd();


	//Draws the Right Leg
	glColor3f(1.0,0.90,0.85);
	glBegin(GL_POLYGON);
		glVertex2f(x+10,y-75);
		glVertex2f(x+10,y);
		glVertex2f(x+20,y);
		glVertex2f(x+20,y-75);
	glEnd();

	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
		glVertex2f(x+10,y-75);
		glVertex2f(x+20,y-65);
		glVertex2f(x+40,y-70);
		glVertex2f(x+40,y-75);
	glEnd();

	//Draws the Shoes
	//Draws the Trousers
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_POLYGON);
		glVertex2f(x-25,y);
		glVertex2f(x-25,y-25);
		glVertex2f(x+25,y-25);
		glVertex2f(x+25,y);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(x-25,y-60);
		glVertex2f(x-25,y);
		glVertex2f(x,y);
		glVertex2f(x,y-60);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(x,y-60);
		glVertex2f(x,y);
		glVertex2f(x+25,y);
		glVertex2f(x+25,y-60);
	glEnd();


	//Draws the Right Hand
	glColor3f(1.0,0.90,0.85);
	glBegin(GL_POLYGON);
		glVertex2f(x,y+70);
		glVertex2f(x,y+80);
		glVertex2f(x+55,y+65);
		glVertex2f(x+55,y+55);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(x+55,y+55);
		glVertex2f(x+55,y+65);
		glVertex2f(x+80,y+95);
		glVertex2f(x+80,y+85);
	glEnd();


	//Draws the Mouth
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_LINE_STRIP);
		glVertex2f(x+25,y+125);
		glVertex2f(x+10,y+125);
		glVertex2f(x+10,y+127);
	glEnd();


	//Draws the Nose
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINE_STRIP);
		glVertex2f(x+32,y+140);
		glVertex2f(x+32,y+150);
		glVertex2f(x+34,y+155);
	glEnd();

	glBegin(GL_LINE_STRIP);
		glVertex2f(x-10,y+160);
		glVertex2f(x-20,y+160);
		glVertex2f(x-20,y+140);
		glVertex2f(x-10,y+140);
	glEnd();

	glBegin(GL_LINES);
		glVertex2f(x-20,y+150);
		glVertex2f(x-10,y+150);
	glEnd();


	//Draws the Books
	glColor3f(0.0,0.0,1.0);
	glBegin(GL_POLYGON);
		glVertex2f(x+50,y+95);
		glVertex2f(x+50,y+105);
		glVertex2f(x+110,y+105);
		glVertex2f(x+110,y+95);
	glEnd();

	glColor3f(0.0,1.0,0.0);
	glBegin(GL_POLYGON);
		glVertex2f(x+50,y+105);
		glVertex2f(x+50,y+115);
		glVertex2f(x+110,y+115);
		glVertex2f(x+110,y+105);
	glEnd();


	//Draws the Right Palm
	glColor3f(1.0,0.90,0.85);
	glBegin(GL_POLYGON);
		glVertex2f(x+80,y+85);
		glVertex2f(x+80,y+105);
		glVertex2f(x+90,y+105);
		glVertex2f(x+90,y+95);
	glEnd();

	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINES);
		glVertex2f(x+80,y+105);
		glVertex2f(x+80,y+100);
		glVertex2f(x+82.5,y+105);
		glVertex2f(x+82.5,y+100);
		glVertex2f(x+85,y+105);
		glVertex2f(x+85,y+100);
		glVertex2f(x+87,y+105);
		glVertex2f(x+87,y+100);
		glVertex2f(x+89.5,y+105);
		glVertex2f(x+89.5,y+100);
	glEnd();


	//Draws the Left Palm
	glColor3f(1.0,0.90,0.85);
	glBegin(GL_POLYGON);
		glVertex2f(x+65,y+95);
		glVertex2f(x+65,y+105);
		glVertex2f(x+75,y+105);
		glVertex2f(x+75,y+95);
	glEnd();

	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINES);
		glVertex2f(x+65,y+105);
		glVertex2f(x+65,y+100);
		glVertex2f(x+67.5,y+105);
		glVertex2f(x+67.5,y+100);
		glVertex2f(x+70,y+105);
		glVertex2f(x+70,y+100);
		glVertex2f(x+72.5,y+105);
		glVertex2f(x+72.5,y+100);
		glVertex2f(x+74.5,y+105);
		glVertex2f(x+74.5,y+100);
	glEnd();
}
