#include<graphics.h>
#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<bios.h>
#include<process.h>
#include<dos.h>
#include<stdlib.h>
#include<fstream.h>

int x=180,y=100;
int x1=120,y1=30;
char k1,k11,k2,k22,k3,k33,k4,k44,k5,k55,k6,k66;
int z1,z11,z2,z22,z3,z33,z4,z44,z5,z55,z6,z66;
int u1,u2,u3,u4,u5,u6,u7,u8,u9,u10;
double u11,u22,u33,u44,u55,u66,u77,u88,u99,u100;

struct qwe
{
 char play1[20] ;
 char play2[20];
}g;
void help();

void face()
{
     /*FACE*/
      {	 setcolor(15);
	{
	 {
	 setfillstyle(5,4);
	 fillellipse(150,50,25,25);
	 }
	 settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 3);
	 outtextxy(110,95,"PLAYER 1");
		/* face 1 */
	 ellipse(150,200,170,370,50, 65);
	 line(95,190,205,190);
	 /*cap*/
      {	 setfillstyle(5,RED);
		sector(150,195,0,180,55,50);
		bar(205,180,235,190);
		line(205,190,235,190);
		line(205,180,235,180);
		line(235,190,235,180);
       }
	 /*eyes*/
	 ellipse(133,210,0,360,6,10);
	 ellipse(167,210,0,360,6,10);
	 /*nose*/
	 ellipse(150,230,0,360,2, 2);
	 /*mouth*/
	 ellipse(450,245,180,360,7, 2);
	 }
	{ setcolor(15);
	{ setfillstyle(5,6);
	 fillellipse(450,50,25,25); }
	 settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 3);
	 outtextxy(410,95,"PLAYER 2");
	 }
	 /* face 2*/
	 ellipse(450,200,170,370,50, 65);
	 line(395,190,505,190);
	 /*cap*/
       {	 setfillstyle(5,BLUE);
		sector(450,195,0,180,55,50);
		bar(505,180,535,190);
		line(505,190,535,190);
		line(505,180,535,180);
		line(535,190,535,180);
	}
	 /*eyes*/
	 ellipse(433,210,0,360,6,10);
	 ellipse(467,210,0,360,6,10);
	 /*nose*/
	 ellipse(450,230,0,360,2, 2);
	 /*mouth*/
	 ellipse(150,245,180,360,7, 2);
	 }
	 {
	 gotoxy(17,20);
	 cout<<".....";
	 gotoxy(54,20);
	 cout<<".....";
	 gotoxy(17,20);
	 cin>>g.play1;
	 gotoxy(54,20);
	 cin>>g.play2;
	 }
	 {
	 ellipse(530,428,0,360,50,25);
	 settextstyle(SMALL_FONT, HORIZ_DIR,9 );
	 setcolor(10);
	 outtextxy(500,410,"PLAY");
	 }
  }





void credit()
{
int i,j;
      setfillstyle(XHATCH_FILL ,12);
{   for(i=0,j=0;i<=480,j<=620;i++,j++)
      /* draw the bar */

   {  delay(1);
      bar(0,0,15 ,0+i);
      bar(620,480,635 ,480-i);
      bar(15,0,0+j,15);
      bar(620,485,610-j,465);
    }
  }

setcolor(9);
settextstyle(2, HORIZ_DIR, 8);
outtextxy(100,150,"GAME CONCEPTION AND DESIGN BY");
setcolor(12);
settextstyle(2, HORIZ_DIR,8 );
outtextxy(70,185,"GAURAV TRIPATHI AND MANANK SHASTRI");
setcolor(11);
settextstyle(2, HORIZ_DIR,8 );
outtextxy(280,230,"12 C");
setcolor(13);
settextstyle(2, HORIZ_DIR,8 );
outtextxy(190,270,"(c)2012 NAVRACHANA ");
}

void design()
{
   char pattern[8] ={0xfe,0xbc,0xda,0xe4,0xe2,0xc0,0x88,0x00};
   setfillpattern(pattern,1);
   setcolor(0);
   bar(0,0,640,480);
   delay(500);
   for(int i=0;i<=320;i++)
   {
   rectangle(0+i,0,640-i,480);
   delay(1);
   }
   setcolor(getmaxcolor());
   for(int p=0;p<650;p++)
		 {
			line(0,20,p,20);
			setcolor(2);
			line(0,25,p,25);
			setcolor(4);
			line(0,30,p,30);
			line(20,0,20,p);
			setcolor(2);
			line(25,0,25,p);
			setcolor(4);
			line(30,0,30,p);
			delay(1);
		 }
   for( p=600;p>0;p--)
		 {      setcolor(2);
			line(650,450,p,450);
			setcolor(4);
			line(650,455,p,455);
			setcolor(4);
			line(650,445,p,445);
			line(600,600,600,p);
			setcolor(2);
			line(595,600,595,p);
			setcolor(4);
			line(590,600,590,p);
			delay(1);
		 }
	 randomize();
	 int y=random(12)+1;
	 int u=random(13)+1;
	 int f=random(14)+1;
	 setcolor(YELLOW);
	 settextstyle(TRIPLEX_FONT, HORIZ_DIR, 8);
	 outtextxy(100,70,"CONNECT 4");
	 setcolor(y);
	 delay(400);
	 settextstyle(TRIPLEX_FONT, HORIZ_DIR, 4);
	 outtextxy(270,250,"PLAY");
	 settextstyle(TRIPLEX_FONT, HORIZ_DIR, 4);
	 outtextxy(220,250,"1.");
	 setcolor(f);
	 delay(400);
	 settextstyle(TRIPLEX_FONT, HORIZ_DIR, 4);
	 outtextxy(270,290,"HELP");
	 settextstyle(TRIPLEX_FONT, HORIZ_DIR, 4);
	 outtextxy(220,290,"2.");
	 setcolor(u);
	 delay(400);
	 settextstyle(TRIPLEX_FONT, HORIZ_DIR, 4);
	 outtextxy(270,330,"EXIT");
	 settextstyle(TRIPLEX_FONT, HORIZ_DIR, 4);
	 outtextxy(220,330,"3.");
	 int key;
	 sel:
	 key=bioskey(0);
	 if(key==561 || key==20273)
	   {
	   cleardevice();
	   face();
	   }
	 else
	 if(key==818 || key==20530)
	  {
	    help();
	    delay(100);
	    exit(0);
	   }
	 else
	 if(key==1075||key==20787)
	 {
	 exit(0);
	 }
	 else
	 {
	  goto sel;
	 }
	  getch();
}

void help()
{
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;
   int xmax, ymax;

   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "c:\\tc\\bgi");

   /* read result of initialization */
   errorcode = graphresult();
   /* an error occurred */
   if (errorcode != grOk)
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1);
   }setcolor(YELLOW);
   setlinestyle(1,5,1);
   {
   setlinestyle(1,5,1);
   setcolor(YELLOW);
     line(x1,y1,x1+300,y1);
   line(x1,y1+60,x1+300,y1+60);
   line(x1,y1+120,x1+300,y1+120);
   line(x1,y1+180,x1+300,y1+180);
   line(x1,y1+240,x1+300,y1+240);
   line(x1,y1+300,x1+300,y1+300);


    line(x1,y1,x1,y1+300);
    line(x1+60,y1,x1+60,y1+300);
    line(x1+120,y1,x1+120,y1+300);
    line(x1+180,y1,x1+180,y1+300);
    line(x1+240,y1,x1+240,y1+300);
    line(x1+300,y1,x1+300,y1+300);


    outtextxy(x1+30,y1+270,"A");
     outtextxy(x1+90,y1+270,"B");
     outtextxy(x1+150,y1+270,"C");
     outtextxy(x1+210,y1+270,"D");
    outtextxy(x1+270,y1+270,"E");

    outtextxy(x1+30,y1+210,"F");
     outtextxy(x1+90,y1+210,"G");
     outtextxy(x1+150,y1+210,"H");
     outtextxy(x1+210,y1+210,"I");
    outtextxy(x1+270,y1+210,"J");

    outtextxy(x1+30,y1+150,"K");
     outtextxy(x1+90,y1+150,"L");
     outtextxy(x1+150,y1+150,"M");
     outtextxy(x1+210,y1+150,"N");
    outtextxy(x1+270,y1+150,"O");

    outtextxy(x1+30,y1+90,"P");
     outtextxy(x1+90,y1+90,"Q");
     outtextxy(x1+150,y1+90,"R");
     outtextxy(x1+210,y1+90,"S");
    outtextxy(x1+270,y1+90,"T");

    outtextxy(x1+30,y1+30,"U");
     outtextxy(x1+90,y1+30,"V");
     outtextxy(x1+150,y1+30,"W");
     outtextxy(x1+210,y1+30,"X");
    outtextxy(x1+270,y1+30,"Y");


    }
   {
    setlinestyle(1,5,1);
   setcolor(GREEN);
   outtextxy(100,350,"To win connect 4 you must be the first player to get ");
   outtextxy(130,360,"4 of ur colored checkers in a row either ");
   outtextxy(170,370,"horizontal , vertically or diagonally ");
   outtextxy(150,380,"YOU HAVE ONLY 'FIVE' CHANCES TO WIN THE GAME" );
   }

   outtextxy(445,306,"<");
   outtextxy(475,306,"ROW 1");
   line(450,320,470,320);
   outtextxy(445,246,"<");
   outtextxy(475,246," ROW 2");
   line(450,260,470,260);
   outtextxy(445,186,"<");
   outtextxy(475,186," ROW 3");
   line(450,200,470,200);
   outtextxy(445,126,"<");
   outtextxy(475,126," ROW 4");
   line(450,140,470,140);
   outtextxy(445,66,"<");
   outtextxy(475,66," ROW 5");
   line(450,80,470,80);
   settextstyle(0,0,1);
   outtextxy(475,400,"ESC-MAINMENU");
   int key1;
   ss:
   key1=bioskey(0);
   if(key1==283)
   {
   cleardevice();
   design();
   }
   else
   {
   goto ss;
   }
}
void loading()
{
   int t,t1,t2,t3,t4,t5,t6;
   randomize();
   t=random(14)+1;
   t1=random(14)+1;
   t2=random(14)+1;
   t3=random(14)+1;
   t4=random(14)+1;
   t5=random(14)+1;
   t6=random(14)+1;
//11111111111111111111111111111111111111
    setcolor(t);
   for(int i=1;i<=100;i++)
  { line(50,130+i,60,130+i);
   delay(2); }
   for(i=1;i<=45;i++)
  { line(49+i,220,49+i,230);
    delay(2); }

//22222222222222222222222222222222222222

   setcolor(t1);
    for(i=100;i>=1;i--)
  { line(104,130+i,114,130+i);
   delay(2); }
   for(i=1;i<=45;i++)
  { line(104+i,131,104+i,141);
    delay(2); }

    for(i=1;i<=100;i++)
  { line(149,130+i,159,130+i);
   delay(2); }
   for(i=45;i>=1;i--)
  { line(109+i,230,109+i,220);
    delay(2); }

//33333333333333333333333333333333333333
     setcolor(t2);
    for(i=100;i>=1;i--)
  { line(165,130+i,175,130+i);
   delay(2); }
   for(i=1;i<=40;i++)
  { line(165+i,131,165+i,141);
    delay(2); }

    for(i=1;i<=100;i++)
  { line(205,130+i,215,130+i);
   delay(2); }
   for(i=40;i>=1;i--)
  { line(165+i,180,165+i,170);
    delay(2); }

//44444444444444444444444444444444444444444
    setcolor(t3);
    for(i=100;i>=1;i--)
  { line(220,130+i,230,130+i);
   delay(2); }
  for(i=1;i<=50;i++)
  { line(220+i,131,220+i,141);
    delay(2); }

  for(i=1;i<=80;i++)
  { line(270,140+i,280,140+i);
    delay(2); }
   for(i=40;i>=1;i--)
  { line(229+i,230,229+i,220);
    delay(2); }

//5555555555555555555555555555555555555555

   setcolor(t4);
   for(i=1;i<=90;i++)
  { line(310,130+i,320,130+i);
   delay(2); }
   for(i=1;i<=50;i++)
  { line(289+i,131,289+i,141);
    delay(2); }
   for(i=1;i<=50;i++)
  { line(289+i,220,289+i,230);
    delay(2); }

//666666666666666666666666666666666666666

  setcolor(t5);
   for(i=1;i<=100;i++)
  { line(349,130+i,359,130+i);
   delay(2); }
   for(i=1;i<=100;i++)
  { line(349+i,130+i,359+i,130+i);
   delay(2); }
   for(i=100;i>=1;i--)
  { line(449,130+i,459,130+i);
   delay(2); }

//77777777777777777777777777777777777777777

    setcolor(t6);
    for(i=100;i>=1;i--)
  { line(469,130+i,479,130+i);
   delay(2); }
   for(i=1;i<=50;i++)
  { line(469+i,131,469+i,141);
    delay(2); }
  for(i=1;i<=50;i++)
  { line(479+i,230,479+i,220);
    delay(2); }
  for(i=1;i<=60;i++)
  { line(519,170+i,529,170+i);
   delay(2); }
  for(i=40;i>=1;i--)
  { line(489+i,180,489+i,170);
    delay(2); }

//8888888888888888888888888888888888888888888888888
   setcolor(t);
  for(i=1;i<=10;i++)
  { line(540+i,220,540+i,230);
    delay(2); }
  for(i=1;i<=10;i++)
  { line(555+i,220,555+i,230);
    delay(2); }
  for(i=1;i<=10;i++)
  { line(570+i,220,570+i,230);
    delay(2); }
    }
    /*

//111111111111111111111111111111111111111
    setcolor(0);
   for(i=1;i<=100;i++)
  { line(50,130+i,60,130+i);
   delay(2); }
   for(i=1;i<=45;i++)
  { line(49+i,220,49+i,230);
    delay(2); }

//22222222222222222222222222222222222222

   setcolor(0);
    for(i=100;i>=1;i--)
  { line(104,130+i,114,130+i);
   delay(2); }
   for(i=1;i<=45;i++)
  { line(104+i,131,104+i,141);
    delay(2); }

    for(i=1;i<=100;i++)
  { line(149,130+i,159,130+i);
   delay(2); }
   for(i=45;i>=1;i--)
  { line(109+i,230,109+i,220);
    delay(2); }

//33333333333333333333333333333333333333
     setcolor(0);
    for(i=100;i>=1;i--)
  { line(165,130+i,175,130+i);
   delay(2); }
   for(i=1;i<=40;i++)
  { line(165+i,131,165+i,141);
    delay(2); }
    for(i=1;i<=100;i++)
  { line(205,130+i,215,130+i);
   delay(2); }
   for(i=40;i>=1;i--)
  { line(165+i,180,165+i,170);
    delay(2); }

//44444444444444444444444444444444444444444
    setcolor(0);
    for(i=100;i>=1;i--)
  { line(220,130+i,230,130+i);
   delay(2); }
  for(i=1;i<=50;i++)
  { line(220+i,131,220+i,141);
    delay(2); }

  for(i=1;i<=80;i++)
  { line(270,140+i,280,140+i);
    delay(2); }
   for(i=40;i>=1;i--)
  { line(229+i,230,229+i,220);
    delay(2); }

//5555555555555555555555555555555555555555

   setcolor(0);
   for(i=1;i<=90;i++)
  { line(310,130+i,320,130+i);
   delay(2); }
   for(i=1;i<=50;i++)
  { line(289+i,131,289+i,141);
    delay(2); }
   for(i=1;i<=50;i++)
  { line(289+i,220,289+i,230);
    delay(2); }

//666666666666666666666666666666666666666

  setcolor(0);
   for(i=1;i<=100;i++)
  { line(349,130+i,359,130+i);
   delay(2); }
   for(i=1;i<=100;i++)
  { line(349+i,130+i,359+i,130+i);
   delay(2); }
   for(i=100;i>=1;i--)
  { line(449,130+i,459,130+i);
   delay(2); }

//77777777777777777777777777777777777777777

    setcolor(0);
    for(i=100;i>=1;i--)
  { line(469,130+i,479,130+i);
   delay(2); }
   for(i=1;i<=50;i++)
  { line(469+i,131,469+i,141);
    delay(2); }
  for(i=1;i<=50;i++)
  { line(479+i,230,479+i,220);
    delay(2); }
  for(i=1;i<=60;i++)
  { line(519,170+i,529,170+i);
   delay(2); }
  for(i=40;i>=1;i--)
  { line(489+i,180,489+i,170);
    delay(2); }

//8888888888888888888888888888888888888888888888888

  for(i=1;i<=10;i++)
  { line(540+i,220,540+i,230);
    delay(2); }
  for(i=1;i<=10;i++)
  { line(555+i,220,555+i,230);
    delay(2); }
  for(i=1;i<=10;i++)
  { line(570+i,220,570+i,230);
    delay(2); }
}


    */



void calc()
{
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;
   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "c:\\tc\\bgi");
   /* read result of initialization */
   errorcode = graphresult();
   /* an error occurred */
   if (errorcode != grOk)
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1);
   }
   for(int i=1;i<=500;i++)
   {
    setcolor((2*i)/5);
    arc(i,i,i,i+465,i);
    delay(3);
   }
   setcolor(6);
   settextstyle(5,0,5);
   int s;
 randomize();
 s=random(20000)+10000;
 gotoxy(33,15);
 cout<<g.play1<<" DEFEATS "<<g.play2;
 gotoxy(33,17);
 cout<<"SCORE : "<<s;
 getch();
 {
  fstream f;
  f.open("score2.txt",ios::app);
  f.write((char*)&g,sizeof(g));
  f<<" "
   <<s
   <<"\n";
  f.flush();
  f.close();
  }
}

void calc1()
{
  /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;
   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "c:\\tc\\bgi");
   /* read result of initialization */
   errorcode = graphresult();
   /* an error occurred */
   if (errorcode != grOk)
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1);
   }
   for(int i=1;i<=500;i++)
   {
    setcolor((2*i)/5);
    arc(i,i,i,i+465,i);
    delay(3);
   }
   setcolor(6);
   settextstyle(5,0,5);
 int s;
 randomize();
 s=random(20000)+10000;
 gotoxy(33,15);
 cout<<g.play2<<" DEFEATS "<<g.play1;
 gotoxy(33,17);
 cout<<"SCORE : "<<s;
 getch();
 {
  fstream f;
  f.open("score2.txt",ios::app);
  f.write((char*)&g,sizeof(g));
  f<<" "
   <<s
   <<"\n";
  f.flush();
  f.close();
 }
}

void calc2()
{
   // request auto detection
   int gdriver = DETECT, gmode, errorcode;
   // initialize graphics and local variables
   initgraph(&gdriver, &gmode, "c:\\tc\\bgi");
   // read result of initialization
   errorcode = graphresult();
   // an error occurred
   if (errorcode != grOk)
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1);
   }
   for(int i=1;i<=500;i++)
   {
    setcolor((2*i)/5);
    arc(i,i,i,i+465,i);
    delay(3);
   }
   setcolor(6);
   settextstyle(5,0,5);
  char a[30]={"DRAW"};
  gotoxy(30,15);
  cout<<a<<" BETWEEN "<<g.play1<<" AND "<<g.play2;
  {
  fstream f;
  f.open("score2.txt",ios::app);
  f.write((char*)&g,sizeof(g));
  f<<" "
   <<"DRAW"
   <<"\n";
  f.flush();
  f.close();
 }
  getch();
}


void all()
{
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;

   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "c:\\tc\\bgi");

   /* read result of initialization */
   errorcode = graphresult();
   /* an error occurred */
   if (errorcode != grOk)
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1);
   }

   {
   setlinestyle(1,5,1);
   setcolor(YELLOW);
   line(x,y,x+300,y);
   line(x,y+60,x+300,y+60);
   line(x,y+120,x+300,y+120);
   line(x,y+180,x+300,y+180);
   line(x,y+240,x+300,y+240);
   line(x,y+300,x+300,y+300);


    line(x,y,x,y+300);
    line(x+60,y,x+60,y+300);
    line(x+120,y,x+120,y+300);
    line(x+180,y,x+180,y+300);
    line(x+240,y,x+240,y+300);
    line(x+300,y,x+300,y+300);


    outtextxy(x+30,y+270,"A");
     outtextxy(x+90,y+270,"B");
     outtextxy(x+150,y+270,"C");
     outtextxy(x+210,y+270,"D");
    outtextxy(x+270,y+270,"E");

    outtextxy(x+30,y+210,"F");
     outtextxy(x+90,y+210,"G");
     outtextxy(x+150,y+210,"H");
     outtextxy(x+210,y+210,"I");
    outtextxy(x+270,y+210,"J");

    outtextxy(x+30,y+150,"K");
     outtextxy(x+90,y+150,"L");
     outtextxy(x+150,y+150,"M");
     outtextxy(x+210,y+150,"N");
    outtextxy(x+270,y+150,"O");

    outtextxy(x+30,y+90,"P");
     outtextxy(x+90,y+90,"Q");
     outtextxy(x+150,y+90,"R");
     outtextxy(x+210,y+90,"S");
    outtextxy(x+270,y+90,"T");

    outtextxy(x+30,y+30,"U");
     outtextxy(x+90,y+30,"V");
     outtextxy(x+150,y+30,"W");
     outtextxy(x+210,y+30,"X");
    outtextxy(x+270,y+30,"Y");

    }

// player 1(1st)
    a:
    cout<<g.play1<<"1: ";
      k1=bioskey(0);

    if(k1=='a' || k1=='A')
    { z1=2;

     setfillstyle(5,4);
     fillellipse(x+30,y+270,20,20);
    }
    else if(k1=='b'|| k1=='B')
    {
    z1=3;
    setfillstyle(5,4);
     fillellipse(x+90,y+270,20,20);
    }
    else if(k1=='c'|| k1=='C')
    {z1=5;
     setfillstyle(5,4);
     fillellipse(x+150,y+270,20,20);

    }

    else if(k1=='d'|| k1=='D')
    {z1=7;
     setfillstyle(5,4);
     fillellipse(x+210,y+270,20,20);

    }

    else if(k1=='e'|| k1=='E')
    {z1=11;
     setfillstyle(5,4);
     fillellipse(x+270,y+270,20,20);
    }

    else
    {
     cout<<"\ninvalid.. choice\n";
     goto a;
    }

// player 2(1st)
    aa:
    cout<<"\r"<<g.play2<<"1:" ;
      k11=bioskey(0);
      if(k11==k1)
      {
       cout<<"\ralready occupied";
       goto aa;
      }
      else
      {
    if(k11=='a' || k11=='A')
    { z11=2;

     setfillstyle(5,3);
     fillellipse(x+30,y+270,20,20);
    }
    else if(k11=='b'|| k11=='B')
    {
    z11=3;
    setfillstyle(5,3);
     fillellipse(x+90,y+270,20,20);
    }
    else if(k11=='c'|| k11=='C')
    {z11=5;
     setfillstyle(5,3);
     fillellipse(x+150,y+270,20,20);

    }

    else if(k11=='d'|| k11=='D')
    {z11=7;
     setfillstyle(5,3);
     fillellipse(x+210,y+270,20,20);

    }

    else if(k11=='e'|| k11=='E')
    {z11=11;
     setfillstyle(5,3);
     fillellipse(x+270,y+270,20,20);
    }

     else if(k11=='f'|| k11=='F')
    {z11=13;
     setfillstyle(5,3);
     fillellipse(x+30,y+210,20,20);

    }

    else if(k11=='g'|| k11=='G')
    {z11=17;
     setfillstyle(5,3);
     fillellipse(x+90,y+210,20,20);

    }

    else if(k11=='h'|| k11=='H')
    {z11=19;
     setfillstyle(5,3);
     fillellipse(x+150,y+210,20,20);

    }

    else if(k11=='i'|| k11=='I')
    {z11=23;
     setfillstyle(5,3);
     fillellipse(x+210,y+210,20,20);

    }

    else if(k11=='j'|| k11=='J')
    {z11=29;
     setfillstyle(5,3);
     fillellipse(x+270,y+210,20,20);
    }

    else
    {
     cout<<"\ninvalid.. choice\n";
     goto aa;
    } }

//player 1(2nd)
    b:
    cout<<"\r"<<g.play1<<"2: " ;
      k2=bioskey(0);

      if(k2==k1 || k2==k11)
      {
       cout<<"\ralready occupied";
       goto b;
      }
    else
    {
    if(k2=='a' || k2=='A')
    { z2=2;

     setfillstyle(5,4);
     fillellipse(x+30,y+270,20,20);
    }
    else if(k2=='b'|| k2=='B')
    {
    z2=3;
    setfillstyle(5,4);
     fillellipse(x+90,y+270,20,20);
    }
    else if(k2=='c'|| k2=='C')
    {z2=5;
     setfillstyle(5,4);
     fillellipse(x+150,y+270,20,20);

    }

    else if(k2=='d'|| k2=='D')
    {z2=7;
     setfillstyle(5,4);
     fillellipse(x+210,y+270,20,20);

    }

    else if(k2=='e'|| k2=='E')
    {z2=11;
     setfillstyle(5,4);
     fillellipse(x+270,y+270,20,20);
    }

     else if(k2=='f'|| k2=='F')
    {z2=13;
     setfillstyle(5,4);
     fillellipse(x+30,y+210,20,20);

    }

    else if(k2=='g'|| k2=='G')
    {z2=17;
     setfillstyle(5,4);
     fillellipse(x+90,y+210,20,20);

    }

    else if(k2=='h'|| k2=='H')
    {z2=19;
     setfillstyle(5,4);
     fillellipse(x+150,y+210,20,20);

    }

    else if(k2=='i'|| k2=='I')
    {z2=23;
     setfillstyle(5,4);
     fillellipse(x+210,y+210,20,20);

    }

    else if(k2=='j'|| k2=='J')
    {z2=29;
     setfillstyle(5,4);
     fillellipse(x+270,y+210,20,20);
    }


     else if(k2=='k'|| k2=='K')
    {z2=31;
     setfillstyle(5,4);
     fillellipse(x+30,y+150,20,20);

    }

    else if(k2=='l'|| k2=='L')
    {z2=37;
     setfillstyle(5,4);
     fillellipse(x+90,y+150,20,20);

    }

    else if(k2=='m'|| k2=='M')
    {z2=41;
     setfillstyle(5,4);
     fillellipse(x+150,y+150,20,20);

    }

    else if(k2=='n'|| k2=='N')
    {z2=43;
     setfillstyle(5,4);
     fillellipse(x+210,y+150,20,20);

    }

    else if(k2=='o'|| k2=='O')
    {z2=47;
     setfillstyle(5,4);
     fillellipse(x+270,y+150,20,20);
    }

    else
    {
     cout<<"\ninvalid.. choice\n";
     goto b;
    }
      }

// player 2(2nd)
    bb:
    cout<<"\r"<<g.play2<<"2: "  ;
      k22=bioskey(0);
    if(k22==k1 || k22==k11 || k22==k2)
      {
       cout<<"\ralready occupied";
       goto bb;
      }
      else
      {
    if(k22=='a' || k22=='A')
    { z22=2;

     setfillstyle(5,3);
     fillellipse(x+30,y+270,20,20);
    }
    else if(k22=='b'|| k22=='B')
    {
    z22=3;
    setfillstyle(5,3);
     fillellipse(x+90,y+270,20,20);
    }
    else if(k22=='c'|| k22=='C')
    {z22=5;
     setfillstyle(5,3);
     fillellipse(x+150,y+270,20,20);

    }

    else if(k22=='d'|| k22=='D')
    {z22=7;
     setfillstyle(5,3);
     fillellipse(x+210,y+270,20,20);

    }

    else if(k22=='e'|| k22=='E')
    {z22=11;
     setfillstyle(5,3);
     fillellipse(x+270,y+270,20,20);
    }

     else if(k22=='f'|| k22=='F')
    {z22=13;
     setfillstyle(5,3);
     fillellipse(x+30,y+210,20,20);

    }

    else if(k22=='g'|| k22=='G')
    {z22=17;
     setfillstyle(5,3);
     fillellipse(x+90,y+210,20,20);

    }

    else if(k22=='h'|| k22=='H')
    {z22=19;
     setfillstyle(5,3);
     fillellipse(x+150,y+210,20,20);

    }

    else if(k22=='i'|| k22=='I')
    {z22=23;
     setfillstyle(5,3);
     fillellipse(x+210,y+210,20,20);

    }

    else if(k22=='j'|| k22=='J')
    {z22=29;
     setfillstyle(5,3);
     fillellipse(x+270,y+210,20,20);
    }

     else if(k22=='k'|| k22=='K')
    {z22=31;
     setfillstyle(5,3);
     fillellipse(x+30,y+150,20,20);

    }

    else if(k22=='l'|| k22=='L')
    {z22=37;
     setfillstyle(5,3);
     fillellipse(x+90,y+150,20,20);

    }

    else if(k22=='m'|| k22=='M')
    {z22=41;
     setfillstyle(5,3);
     fillellipse(x+150,y+150,20,20);

    }

    else if(k22=='n'|| k22=='N')
    {z22=43;
     setfillstyle(5,3);
     fillellipse(x+210,y+150,20,20);

    }

    else if(k22=='o'|| k22=='O')
    {z22=47;
     setfillstyle(5,3);
     fillellipse(x+270,y+150,20,20);
    }

    else if(k22=='p'|| k22=='P')
    {z22=53;
     setfillstyle(5,3);
     fillellipse(x+30,y+90,20,20);

    }

    else if(k22=='q'|| k22=='Q')
    {z22=59;
     setfillstyle(5,3);
     fillellipse(x+90,y+90,20,20);

    }

    else if(k22=='r'|| k22=='R')
    {z22=61;
     setfillstyle(5,3);
     fillellipse(x+150,y+90,20,20);

    }

    else if(k22=='s'|| k22=='S')
    {z22=67;
     setfillstyle(5,3);
     fillellipse(x+210,y+90,20,20);

    }

    else if(k22=='t'|| k22=='T')
    {z22=71;
     setfillstyle(5,3);
     fillellipse(x+270,y+90,20,20);
    }

     else
    {
     cout<<"\ninvalid.. choice\n";
     goto bb;
    }  }

//player 1(3rd)
    c:
    cout<<"\r"<<g.play1<<"3:" ;
      k3=bioskey(0);
      if(k3==k22 || k3==k1 || k3==k11 || k3==k2 )
      {
       cout<<"\ralready occupied";
       goto c;
      }
      else
      {
    if(k3=='a' || k3=='A')
    { z3=2;

     setfillstyle(5,4);
     fillellipse(x+30,y+270,20,20);
    }
    else if(k3=='b'|| k3=='B')
    {
    z3=3;
    setfillstyle(5,4);
     fillellipse(x+90,y+270,20,20);
    }
    else if(k3=='c'|| k3=='C')
    {z3=5;
     setfillstyle(5,4);
     fillellipse(x+150,y+270,20,20);

    }

    else if(k3=='d'|| k3=='D')
    {z3=7;
     setfillstyle(5,4);
     fillellipse(x+210,y+270,20,20);

    }

    else if(k3=='e'|| k3=='E')
    {z3=11;
     setfillstyle(5,4);
     fillellipse(x+270,y+270,20,20);
    }

     else if(k3=='f'|| k3=='F')
    {z3=13;
     setfillstyle(5,4);
     fillellipse(x+30,y+210,20,20);

    }

    else if(k3=='g'|| k3=='G')
    {z3=17;
     setfillstyle(5,4);
     fillellipse(x+90,y+210,20,20);

    }

    else if(k3=='h'|| k3=='H')
    {z3=19;
     setfillstyle(5,4);
     fillellipse(x+150,y+210,20,20);

    }

    else if(k3=='i'|| k3=='I')
    {z3=23;
     setfillstyle(5,4);
     fillellipse(x+210,y+210,20,20);

    }

    else if(k3=='j'|| k3=='J')
    {z3=29;
     setfillstyle(5,4);
     fillellipse(x+270,y+210,20,20);
    }


     else if(k3=='k'|| k3=='K')
    {z3=31;
     setfillstyle(5,4);
     fillellipse(x+30,y+150,20,20);

    }

    else if(k3=='l'|| k3=='L')
    {z3=37;
     setfillstyle(5,4);
     fillellipse(x+90,y+150,20,20);

    }

    else if(k3=='m'|| k3=='M')
    {z3=41;
     setfillstyle(5,4);
     fillellipse(x+150,y+150,20,20);

    }

    else if(k3=='n'|| k3=='N')
    {z3=43;
     setfillstyle(5,4);
     fillellipse(x+210,y+150,20,20);

    }

    else if(k3=='o'|| k3=='O')
    {z3=47;
     setfillstyle(5,4);
     fillellipse(x+270,y+150,20,20);
    }

    else if(k3=='p'|| k3=='P')
    {z3=53;
     setfillstyle(5,4);
     fillellipse(x+30,y+90,20,20);

    }

    else if(k3=='q'|| k3=='Q')
    {z3=59;
     setfillstyle(5,4);
     fillellipse(x+90,y+90,20,20);

    }

    else if(k3=='r'|| k3=='R')
    {z3=61;
     setfillstyle(5,4);
     fillellipse(x+150,y+90,20,20);

    }

    else if(k3=='s'|| k3=='S')
    {z3=67;
     setfillstyle(5,4);
     fillellipse(x+210,y+90,20,20);

    }

    else if(k3=='t'|| k3=='T')
    {z3=71;
     setfillstyle(5,4);
     fillellipse(x+270,y+90,20,20);
    }


     else if(k3=='u'|| k3=='U')
    {z3=73;
     setfillstyle(5,4);
     fillellipse(x+30,y+30,20,20);

    }

    else if(k3=='v'|| k3=='V')
    {z3=79;
     setfillstyle(5,4);
     fillellipse(x+90,y+30,20,20);

    }

    else if(k3=='w'|| k3=='W')
    {z3=83;
     setfillstyle(5,4);
     fillellipse(x+150,y+30,20,20);

    }

    else if(k3=='x'|| k3=='X')
    {z3=89;
     setfillstyle(5,4);
     fillellipse(x+210,y+30,20,20);

    }

    else if(k3=='y'|| k3=='Y')
    {z3=97;
     setfillstyle(5,4);
     fillellipse(x+270,y+30,20,20);
    }

    else
    {
     cout<<"\ninvalid.. choice\n";
     goto c;
    }  }

//player 2(3rd)
    cc:
    cout<<"\r"<<g.play2<<"3: " ;
      k33=bioskey(0);
       if(k33==k22 || k33==k1 || k33==k11 || k33==k2 || k33==k3)
      {
       cout<<"\ralready occupied";
       goto cc;
      }
     else
     {
    if(k33=='a' || k33=='A')
    { z33=2;
      setfillstyle(5,3);
     fillellipse(x+30,y+270,20,20);
    }
    else if(k33=='b'|| k33=='B')
    {
    z33=3;
    setfillstyle(5,3);
     fillellipse(x+90,y+270,20,20);
    }
    else if(k33=='c'|| k33=='C')
    {z33=5;
     setfillstyle(5,3);
     fillellipse(x+150,y+270,20,20);

    }

    else if(k33=='d'|| k33=='D')
    {z33=7;
     setfillstyle(5,3);
     fillellipse(x+210,y+270,20,20);

    }

    else if(k33=='e'|| k33=='E')
    {z33=11;
     setfillstyle(5,3);
     fillellipse(x+270,y+270,20,20);
    }

     else if(k33=='f'|| k33=='F')
    {z33=13;
     setfillstyle(5,3);
     fillellipse(x+30,y+210,20,20);

    }

    else if(k33=='g'|| k33=='G')
    {z33=17;
     setfillstyle(5,3);
     fillellipse(x+90,y+210,20,20);

    }

    else if(k33=='h'|| k33=='H')
    {z33=19;
     setfillstyle(5,3);
     fillellipse(x+150,y+210,20,20);

    }

    else if(k33=='i'|| k33=='I')
    {z33=23;
     setfillstyle(5,3);
     fillellipse(x+210,y+210,20,20);

    }

    else if(k33=='j'|| k33=='J')
    {z33=29;
     setfillstyle(5,3);
     fillellipse(x+270,y+210,20,20);
    }


     else if(k33=='k'|| k33=='K')
    {z33=31;
     setfillstyle(5,3);
     fillellipse(x+30,y+150,20,20);

    }

    else if(k33=='l'|| k33=='L')
    {z33=37;
     setfillstyle(5,3);
     fillellipse(x+90,y+150,20,20);

    }

    else if(k33=='m'|| k33=='M')
    {z33=41;
     setfillstyle(5,3);
     fillellipse(x+150,y+150,20,20);

    }

    else if(k33=='n'|| k33=='N')
    {z33=43;
     setfillstyle(5,3);
     fillellipse(x+210,y+150,20,20);

    }

    else if(k33=='o'|| k33=='O')
    {z33=47;
     setfillstyle(5,3);
     fillellipse(x+270,y+150,20,20);
    }

    else if(k33=='p'|| k33=='P')
    {z33=53;
     setfillstyle(5,3);
     fillellipse(x+30,y+90,20,20);

    }

    else if(k33=='q'|| k33=='Q')
    {z33=59;
     setfillstyle(5,3);
     fillellipse(x+90,y+90,20,20);

    }

    else if(k33=='r'|| k33=='R')
    {z33=61;
     setfillstyle(5,3);
     fillellipse(x+150,y+90,20,20);

    }

    else if(k33=='s'|| k33=='S')
    {z33=67;
     setfillstyle(5,3);
     fillellipse(x+210,y+90,20,20);

    }

    else if(k33=='t'|| k33=='T')
    {z33=71;
     setfillstyle(5,3);
     fillellipse(x+270,y+90,20,20);
    }


     else if(k33=='u'|| k33=='U')
    {z33=73;
     setfillstyle(5,3);
     fillellipse(x+30,y+30,20,20);

    }

    else if(k33=='v'|| k33=='V')
    {z33=79;
     setfillstyle(5,3);
     fillellipse(x+90,y+30,20,20);

    }

    else if(k33=='w'|| k33=='W')
    {z33=83;
     setfillstyle(5,3);
     fillellipse(x+150,y+30,20,20);

    }

    else if(k33=='x'|| k33=='X')
    {z33=89;
     setfillstyle(5,3);
     fillellipse(x+210,y+30,20,20);

    }

    else if(k33=='y'|| k33=='Y')
    {z33=97;
     setfillstyle(5,3);
     fillellipse(x+270,y+30,20,20);
    }

    else
    {
     cout<<"\ninvalid choice\n";
     goto cc;
    } }

//player 1(4th)
    d:
    cout<<"\r"<<g.play1<<"4: " ;
      k4=bioskey(0);
       if(k4==k22 || k4==k1 || k4==k11 || k4==k2 || k4==k3 || k4==k33)
      {
       cout<<"\ralready occupied";
       goto d;
      }
    else
    {
    if(k4=='a' || k4=='A')
    { z4=2;

     setfillstyle(5,4);
     fillellipse(x+30,y+270,20,20);
    }
    else if(k4=='b'|| k4=='B')
    {
    z4=3;
    setfillstyle(5,4);
     fillellipse(x+90,y+270,20,20);
    }
    else if(k4=='c'|| k4=='C')
    {z4=5;
     setfillstyle(5,4);
     fillellipse(x+150,y+270,20,20);

    }

    else if(k4=='d'|| k4=='D')
    {z4=7;
     setfillstyle(5,4);
     fillellipse(x+210,y+270,20,20);

    }

    else if(k4=='e'|| k4=='E')
    {z4=11;
     setfillstyle(5,4);
     fillellipse(x+270,y+270,20,20);
    }

     else if(k4=='f'|| k4=='F')
    {z4=13;
     setfillstyle(5,4);
     fillellipse(x+30,y+210,20,20);

    }

    else if(k4=='g'|| k4=='G')
    {z4=17;
     setfillstyle(5,4);
     fillellipse(x+90,y+210,20,20);

    }

    else if(k4=='h'|| k4=='H')
    {z4=19;
     setfillstyle(5,4);
     fillellipse(x+150,y+210,20,20);

    }

    else if(k4=='i'|| k4=='I')
    {z4=23;
     setfillstyle(5,4);
     fillellipse(x+210,y+210,20,20);

    }

    else if(k4=='j'|| k4=='J')
    {z4=29;
     setfillstyle(5,4);
     fillellipse(x+270,y+210,20,20);
    }


     else if(k4=='k'|| k4=='K')
    {z4=31;
     setfillstyle(5,4);
     fillellipse(x+30,y+150,20,20);

    }

    else if(k4=='l'|| k4=='L')
    {z4=37;
     setfillstyle(5,4);
     fillellipse(x+90,y+150,20,20);

    }

    else if(k4=='m'|| k4=='M')
    {z4=41;
     setfillstyle(5,4);
     fillellipse(x+150,y+150,20,20);

    }

    else if(k4=='n'|| k4=='N')
    {z4=43;
     setfillstyle(5,4);
     fillellipse(x+210,y+150,20,20);

    }

    else if(k4=='o'|| k4=='O')
    {z4=47;
     setfillstyle(5,4);
     fillellipse(x+270,y+150,20,20);
    }

    else if(k4=='p'|| k4=='P')
    {z4=53;
     setfillstyle(5,4);
     fillellipse(x+30,y+90,20,20);

    }

    else if(k4=='q'|| k4=='Q')
    {z4=59;
     setfillstyle(5,4);
     fillellipse(x+90,y+90,20,20);

    }

    else if(k4=='r'|| k4=='R')
    {z4=61;
     setfillstyle(5,4);
     fillellipse(x+150,y+90,20,20);

    }

    else if(k4=='s'|| k4=='S')
    {z4=67;
     setfillstyle(5,4);
     fillellipse(x+210,y+90,20,20);

    }

    else if(k4=='t'|| k4=='T')
    {z4=71;
     setfillstyle(5,4);
     fillellipse(x+270,y+90,20,20);
    }


     else if(k4=='u'|| k4=='U')
    {z4=73;
     setfillstyle(5,4);
     fillellipse(x+30,y+30,20,20);

    }

    else if(k4=='v'|| k4=='V')
    {z4=79;
     setfillstyle(5,4);
     fillellipse(x+90,y+30,20,20);

    }

    else if(k4=='w'|| k4=='W')
    {z4=83;
     setfillstyle(5,4);
     fillellipse(x+150,y+30,20,20);

    }

    else if(k4=='x'|| k4=='X')
    {z4=89;
     setfillstyle(5,4);
     fillellipse(x+210,y+30,20,20);

    }

    else if(k4=='y'|| k4=='Y')
    {z4=97;
     setfillstyle(5,4);
     fillellipse(x+270,y+30,20,20);
    }

    else
    {
     cout<<"\ninvalid.. choice\n";
     goto d;
    }
     }
  //one();

  {
 u1=z1+z2+z3+z4;
 u11=z1*z2*z3*z4;
 if(u11==210)
   {
   /* gotoxy(10,20);
    cout<<"1"; */
    setfillstyle(1,BLUE);
    fillellipse(x+30,y+270,20,20);
    delay(300);
    fillellipse(x+90,y+270,20,20);
    delay(300);
    fillellipse(x+150,y+270,20,20);
    delay(300);
    fillellipse(x+210,y+270,20,20);
    delay(300);
    cleardevice();
    calc();
    exit(0);
   // break;
   }
  else if(u11==155)
  {
    setfillstyle(1,BLUE);
    fillellipse(x+90,y+270,20,20);
    delay(300);
    fillellipse(x+150,y+270,20,20);
    delay(300);
    fillellipse(x+210,y+270,20,20);
    delay(300);
    fillellipse(x+270,y+270,20,20);
    delay(300);
    cleardevice();
    calc();
    exit(0);
  //  break;
   }
 else if(u11==42718)
 {
    setfillstyle(1,BLUE);
    fillellipse(x+30,y+90,20,20);
    delay(300);
    fillellipse(x+30,y+150,20,20);
    delay(300);
    fillellipse(x+30,y+210,20,20);
    delay(300);
    fillellipse(x+30,y+270,20,20);
    delay(300);
    cleardevice();
    calc();
    exit(0);
   // break;
   }
   else if(u11==111333)
   {
    setfillstyle(1,BLUE);
    fillellipse(x+90,y+90,20,20);
    delay(300);
    fillellipse(x+90,y+150,20,20);
    delay(300);
    fillellipse(x+90,y+210,20,20);
    delay(300);
    fillellipse(x+90,y+270,20,20);
    delay(300);
    cleardevice();
    calc();

    exit(0);
  ///  break;
   }
   else if(u11==206435)
   {
    setfillstyle(1,BLUE);
    fillellipse(x+150,y+90,20,20);
    delay(300);
    fillellipse(x+150,y+150,20,20);
    delay(300);
    fillellipse(x+150,y+210,20,20);
    delay(300);
    fillellipse(x+150,y+270,20,20);
    delay(300);
    cleardevice();
    calc();

    exit(0);
//    break;
   }
   else if(u11==463841)
   {
    setfillstyle(1,BLUE);
    fillellipse(x+210,y+90,20,20);
    delay(300);
    fillellipse(x+210,y+150,20,20);
    delay(300);
    fillellipse(x+210,y+210,20,20);
    delay(300);
    fillellipse(x+210,y+270,20,20);
    delay(300);
    cleardevice();
    calc();

    exit(0);
   // break;
   }
   else if(u11== 1064503)
   {
    setfillstyle(1,BLUE);
    fillellipse(x+270,y+90,20,20);
    delay(300);
    fillellipse(x+270,y+150,20,20);
    delay(300);
    fillellipse(x+270,y+210,20,20);
    delay(300);
    fillellipse(x+270,y+270,20,20);
    delay(300);
    cleardevice();
    calc();
    exit(0);
//    break;
   }
    else if(u11==174021)
   {
    setfillstyle(1,BLUE);
    fillellipse(x+90,y+270,20,20);
    delay(300);
    fillellipse(x+150,y+210,20,20);
    delay(300);
    fillellipse(x+210,y+150,20,20);
    delay(300);
    fillellipse(x+270,y+90,20,20);
    delay(300);
    cleardevice();
    calc();

    exit(0);
 //   break;
   }
    else if(u11==93398)
   {
    setfillstyle(1,BLUE);
    fillellipse(x+30,y+270,20,20);
    delay(300);
    fillellipse(x+90,y+210,20,20);
    delay(300);
    fillellipse(x+150,y+150,20,20);
    delay(300);
    fillellipse(x+210,y+90,20,20);
    delay(300);
    cleardevice();
    calc();
    exit(0);
//    break;
   }
   else if(u11== 612007)
   {
    setfillstyle(1,BLUE);
    fillellipse(x+270,y+270,20,20);
    delay(300);
    fillellipse(x+210,y+210,20,20);
    delay(300);
    fillellipse(x+150,y+150,20,20);
    delay(300);
    fillellipse(x+90,y+90,20,20);
    delay(300);
    cleardevice();
    calc();
    exit(0);
  //  break;
   }
  }
  if(u11==260813)
  {
    setfillstyle(1,BLUE);
    fillellipse(x+270,y+210,20,20);
    delay(300);
    fillellipse(x+210,y+150,20,20);
    delay(300);
    fillellipse(x+150,y+90,20,20);
    delay(300);
    fillellipse(x+90,y+30,20,20);
    delay(300);
    cleardevice();
    calc();
    exit(0);

   }
 //getch();


//player 2(4th)
    dd:
    cout<<"\r"<<g.play2<<"4: " ;
      k44=bioskey(0);
       if(k44==k22 || k44==k1 || k44==k11 || k44==k2 || k44==k3 || k44==k33 ||k44==k4)
      {
       cout<<"\ralready occupied";
       goto dd;
      }
    else
    {
    if(k44=='a' || k44=='A')
    { z44=2;

     setfillstyle(5,3);
     fillellipse(x+30,y+270,20,20);
    }
    else if(k44=='b'|| k44=='B')
    {
    z44=3;
    setfillstyle(5,3);
     fillellipse(x+90,y+270,20,20);
    }
    else if(k44=='c'|| k44=='C')
    {z44=5;
     setfillstyle(5,3);
     fillellipse(x+150,y+270,20,20);

    }

    else if(k44=='d'|| k44=='D')
    {z44=7;
     setfillstyle(5,3);
     fillellipse(x+210,y+270,20,20);

    }

    else if(k44=='e'|| k44=='E')
    {z44=11;
     setfillstyle(5,3);
     fillellipse(x+270,y+270,20,20);
    }

     else if(k44=='f'|| k44=='F')
    {z44=13;
     setfillstyle(5,3);
     fillellipse(x+30,y+210,20,20);

    }

    else if(k44=='g'|| k44=='G')
    {z44=17;
     setfillstyle(5,3);
     fillellipse(x+90,y+210,20,20);

    }

    else if(k44=='h'|| k44=='H')
    {z44=19;
     setfillstyle(5,3);
     fillellipse(x+150,y+210,20,20);

    }

    else if(k44=='i'|| k44=='I')
    {z44=23;
     setfillstyle(5,3);
     fillellipse(x+210,y+210,20,20);

    }

    else if(k44=='j'|| k44=='J')
    {z44=29;
     setfillstyle(5,3);
     fillellipse(x+270,y+210,20,20);
    }


     else if(k44=='k'|| k44=='K')
    {z44=31;
     setfillstyle(5,3);
     fillellipse(x+30,y+150,20,20);

    }

    else if(k44=='l'|| k44=='L')
    {z44=37;
     setfillstyle(5,3);
     fillellipse(x+90,y+150,20,20);

    }

    else if(k44=='m'|| k44=='M')
    {z44=41;
     setfillstyle(5,3);
     fillellipse(x+150,y+150,20,20);

    }

    else if(k44=='n'|| k44=='N')
    {z44=43;
     setfillstyle(5,3);
     fillellipse(x+210,y+150,20,20);

    }

    else if(k44=='o'|| k44=='O')
    {z44=47;
     setfillstyle(5,3);
     fillellipse(x+270,y+150,20,20);
    }

    else if(k44=='p'|| k44=='P')
    {z44=53;
     setfillstyle(5,3);
     fillellipse(x+30,y+90,20,20);

    }

    else if(k44=='q'|| k44=='Q')
    {z44=59;
     setfillstyle(5,3);
     fillellipse(x+90,y+90,20,20);

    }

    else if(k44=='r'|| k44=='R')
    {z44=61;
     setfillstyle(5,3);
     fillellipse(x+150,y+90,20,20);

    }

    else if(k44=='s'|| k44=='S')
    {z44=67;
     setfillstyle(5,3);
     fillellipse(x+210,y+90,20,20);

    }

    else if(k44=='t'|| k44=='T')
    {z44=71;
     setfillstyle(5,3);
     fillellipse(x+270,y+90,20,20);
    }


     else if(k44=='u'|| k44=='U')
    {z44=73;
     setfillstyle(5,3);
     fillellipse(x+30,y+30,20,20);

    }

    else if(k44=='v'|| k44=='V')
    {z44=79;
     setfillstyle(5,3);
     fillellipse(x+90,y+30,20,20);

    }

    else if(k44=='w'|| k44=='W')
    {z44=83;
     setfillstyle(5,3);
     fillellipse(x+150,y+30,20,20);

    }

    else if(k44=='x'|| k44=='X')
    {z44=89;
     setfillstyle(5,3);
     fillellipse(x+210,y+30,20,20);

    }

    else if(k44=='y'|| k44=='Y')
    {z44=97;
     setfillstyle(5,3);
     fillellipse(x+270,y+30,20,20);
    }

  else
    {
     cout<<"\ninvalid choice\n";
     goto dd;
    }
     }
   {
    u22=z11*z22*z33*z44;
 u2=z11+z22+z33+z44;
  if(u22== 1559207)
   {
    setfillstyle(1,GREEN);
    fillellipse(x+30,y+210,20,20);
    delay(300);
    fillellipse(x+30,y+150,20,20);
    delay(300);
    fillellipse(x+30,y+90,20,20);
    delay(300);
    fillellipse(x+30,y+30,20,20);
    delay(300);
    cleardevice();
    calc1();
    exit(0);
 //   break;
   }
  else if(u22==2931769)
  {
    setfillstyle(1,GREEN);
    fillellipse(x+90,y+210,20,20);
    delay(300);
    fillellipse(x+90,y+150,20,20);
    delay(300);
    fillellipse(x+90,y+90,20,20);
    delay(300);
    fillellipse(x+90,y+30,20,20);
    delay(300);
    cleardevice();
    calc1();
    exit(0);
  //  break;
   }
  else if(u22== 3944077)
  {
    setfillstyle(1,GREEN);
    fillellipse(x+150,y+210,20,20);
    delay(300);
    fillellipse(x+150,y+150,20,20);
    delay(300);
    fillellipse(x+150,y+90,20,20);
    delay(300);
    fillellipse(x+150,y+30,20,20);
    delay(300);
    cleardevice();
    calc1();
    exit(0);
  //  break;
   }
  else if(u22==5897407)
   {
    setfillstyle(1,GREEN);
    fillellipse(x+210,y+210,20,20);
    delay(300);
    fillellipse(x+210,y+150,20,20);
    delay(300);
    fillellipse(x+210,y+90,20,20);
    delay(300);
    fillellipse(x+210,y+30,20,20);
    delay(300);
    cleardevice();
    calc1();
    exit(0);
//    break;
   }
   else if(u22== 9386981)
   {
    setfillstyle(1,GREEN);
    fillellipse(x+270,y+210,20,20);
    delay(300);
    fillellipse(x+270,y+150,20,20);
    delay(300);
    fillellipse(x+270,y+90,20,20);
    delay(300);
    fillellipse(x+270,y+30,20,20);
    delay(300);
    cleardevice();
    calc1();
    exit(0);
  //  break;
   }
   else if(u22== 4061501)
   {
    setfillstyle(1,GREEN);
    fillellipse(x+210,y+210,20,20);
    delay(300);
    fillellipse(x+150,y+150,20,20);
    delay(300);
    fillellipse(x+90,y+90,20,20);
    delay(300);
    fillellipse(x+30,y+30,20,20);
    delay(300);
    cleardevice();
    calc1();
    exit(0);
  //  break;
   }

   else if(u22== 96577)
   {
    setfillstyle(1,GREEN);
    fillellipse(x+30,y+210,20,20);
    delay(300);
    fillellipse(x+90,y+210,20,20);
    delay(300);
    fillellipse(x+150,y+210,20,20);
    delay(300);
    fillellipse(x+210,y+210,20,20);
    delay(300);
    cleardevice();
    calc1();
    exit(0);
   // break;
   }
    else if(u22==215441)
   {
    setfillstyle(1,GREEN);
    fillellipse(x+90,y+210,20,20);
    delay(300);
    fillellipse(x+150,y+210,20,20);
    delay(300);
    fillellipse(x+210,y+210,20,20);
    delay(300);
    fillellipse(x+270,y+210,20,20);
    delay(300);
    cleardevice();
    calc1();
    exit(0);
//    break;
   }
  }
  if(u22==4529803)
  {
   setfillstyle(1,GREEN);
    fillellipse(x+90,y+210,20,20);
    delay(300);
    fillellipse(x+150,y+150,20,20);
    delay(300);
    fillellipse(x+210,y+90,20,20);
    delay(300);
    fillellipse(x+270,y+30,20,20);
    delay(300);
    cleardevice();
    calc1();
    delay(100);
    exit(0);

   }

//player 1(5th)
    e:
    cout<<"\r"<<g.play1<<"5: " ;
      k5=bioskey(0);
       if(k5==k22 || k5==k1 || k5==k11 || k5==k2 || k5==k3 || k5==k33 ||k5==k4|| k5==k44)
      {
       cout<<"\ralready occupied";
       goto e;
      }
      else
      {
    if(k5=='a' || k5=='A')
    { z5=2;

     setfillstyle(5,4);
     fillellipse(x+30,y+270,20,20);
    }
    else if(k5=='b'|| k5=='B')
    {
    z5=3;
    setfillstyle(5,4);
     fillellipse(x+90,y+270,20,20);
    }
    else if(k5=='c'|| k5=='C')
    {z5=5;
     setfillstyle(5,4);
     fillellipse(x+150,y+270,20,20);

    }

    else if(k5=='d'|| k5=='D')
    {z5=7;
     setfillstyle(5,4);
     fillellipse(x+210,y+270,20,20);

    }

    else if(k5=='e'|| k5=='E')
    {z5=11;
     setfillstyle(5,4);
     fillellipse(x+270,y+270,20,20);
    }

     else if(k5=='f'|| k5=='F')
    {z5=13;
     setfillstyle(5,4);
     fillellipse(x+30,y+210,20,20);

    }

    else if(k5=='g'|| k5=='G')
    {z5=17;
     setfillstyle(5,4);
     fillellipse(x+90,y+210,20,20);

    }

    else if(k5=='h'|| k5=='H')
    {z5=19;
     setfillstyle(5,4);
     fillellipse(x+150,y+210,20,20);

    }

    else if(k5=='i'|| k5=='I')
    {z5=23;
     setfillstyle(5,4);
     fillellipse(x+210,y+210,20,20);

    }

    else if(k5=='j'|| k5=='J')
    {z5=29;
     setfillstyle(5,4);
     fillellipse(x+270,y+210,20,20);
    }


     else if(k5=='k'|| k5=='K')
    {z5=31;
     setfillstyle(5,4);
     fillellipse(x+30,y+150,20,20);

    }

    else if(k5=='l'|| k5=='L')
    {z5=37;
     setfillstyle(5,4);
     fillellipse(x+90,y+150,20,20);

    }

    else if(k5=='m'|| k5=='M')
    {z5=41;
     setfillstyle(5,4);
     fillellipse(x+150,y+150,20,20);

    }

    else if(k5=='n'|| k5=='N')
    {z5=43;
     setfillstyle(5,4);
     fillellipse(x+210,y+150,20,20);

    }

    else if(k5=='o'|| k5=='O')
    {z5=47;
     setfillstyle(5,4);
     fillellipse(x+270,y+150,20,20);
    }

    else if(k5=='p'|| k5=='P')
    {z5=53;
     setfillstyle(5,4);
     fillellipse(x+30,y+90,20,20);

    }

    else if(k5=='q'|| k5=='Q')
    {z5=59;
     setfillstyle(5,4);
     fillellipse(x+90,y+90,20,20);

    }

    else if(k5=='r'|| k5=='R')
    {z5=61;
     setfillstyle(5,4);
     fillellipse(x+150,y+90,20,20);

    }

    else if(k5=='s'|| k5=='S')
    {z5=67;
     setfillstyle(5,4);
     fillellipse(x+210,y+90,20,20);

    }

    else if(k5=='t'|| k5=='T')
    {z5=71;
     setfillstyle(5,4);
     fillellipse(x+270,y+90,20,20);
    }


     else if(k5=='u'|| k5=='U')
    {z5=73;
     setfillstyle(5,4);
     fillellipse(x+30,y+30,20,20);

    }

    else if(k5=='v'|| k5=='V')
    {z5=79;
     setfillstyle(5,4);
     fillellipse(x+90,y+30,20,20);

    }

    else if(k5=='w'|| k5=='W')
    {z5=83;
     setfillstyle(5,4);
     fillellipse(x+150,y+30,20,20);

    }

    else if(k5=='x'|| k5=='X')
    {z5=89;
     setfillstyle(5,4);
     fillellipse(x+210,y+30,20,20);

    }

    else if(k5=='y'|| k5=='Y')
    {z5=97;
     setfillstyle(5,4);
     fillellipse(x+270,y+30,20,20);
    }

    else
    {
     cout<<"\ninvalid.. choice\n";
     goto e;
    }

       }



u33=z1*z2*z3*z5;
u4=z1+z2+z4+z5;
u55=z1*z3*z4*z5;
u66=z2*z3*z4*z5;

  if(u33==210)
 {
  setfillstyle(1,BLUE);                //17
    fillellipse(x+30,y+270,20,20);
    delay(300);
    fillellipse(x+90,y+270,20,20);
    delay(300);
    fillellipse(x+150,y+270,20,20);
    delay(300);
    fillellipse(x+210,y+270,20,20);
    delay(300);
    cleardevice();
    calc();
    delay(100);

 exit(0);
// break;
 }

 else if(u33==42718)
 {
 setfillstyle(1,BLUE);                //99
    fillellipse(x+30,y+270,20,20);
    delay(300);
    fillellipse(x+30,y+210,20,20);
    delay(300);
    fillellipse(x+30,y+150,20,20);
    delay(300);
    fillellipse(x+30,y+90,20,20);
    delay(300);
    cleardevice();
    calc1();
    delay(100);

 exit(0);
// break;
 }
 else if(u33== 93398)
 {
 setfillstyle(1,BLUE);
    fillellipse(x+30,y+270,20,20);
    delay(300);
    fillellipse(x+90,y+210,20,20);
    delay(300);
    fillellipse(x+150,y+150,20,20);
    delay(300);
    fillellipse(x+210,y+90,20,20);
    delay(300);
    cleardevice();
    calc();
 exit(0);
 //break;
 }
 else if(u33== 1155)
 {
 setfillstyle(1,BLUE);               //26
    fillellipse(x+90,y+270,20,20);
    delay(300);
    fillellipse(x+150,y+270,20,20);
    delay(300);
    fillellipse(x+210,y+270,20,20);
    delay(300);
    fillellipse(x+270,y+270,20,20);
    delay(300);
    cleardevice();
    calc();

 exit(0);
// break;
 }
 else if(u33== 111333)
 {
  setfillstyle(1,BLUE);
    fillellipse(x+90,y+90,20,20);
    delay(300);
    fillellipse(x+90,y+150,20,20);
    delay(300);
    fillellipse(x+90,y+210,20,20);
    delay(300);
    fillellipse(x+90,y+270,20,20);
    delay(300);
    cleardevice();
    calc();

 exit(0);
 //break;
 }

  else if(u33== 206435)
 {
 setfillstyle(1,BLUE);
    fillellipse(x+150,y+90,20,20);
    delay(300);
    fillellipse(x+150,y+150,20,20);
    delay(300);
    fillellipse(x+150,y+210,20,20);
    delay(300);
    fillellipse(x+150,y+270,20,20);
    delay(300);
    cleardevice();
    calc();

 exit(0);
// break;
 }
 else if(u33==463841)
 {
  setfillstyle(1,BLUE);
    fillellipse(x+210,y+90,20,20);
    delay(300);
    fillellipse(x+210,y+150,20,20);
    delay(300);
    fillellipse(x+210,y+210,20,20);
    delay(300);
    fillellipse(x+210,y+270,20,20);
    delay(300);
    cleardevice();
    calc();

 exit(0);
 //break;
 }
 else if(u33==1064503)
 {
  setfillstyle(1,BLUE);
    fillellipse(x+270,y+90,20,20);
    delay(300);
    fillellipse(x+270,y+150,20,20);
    delay(300);
    fillellipse(x+270,y+210,20,20);
    delay(300);
    fillellipse(x+270,y+270,20,20);
    delay(300);
    cleardevice();
    calc();

 exit(0);
// break;
 }
 else if(u33==174021)
 {
  setfillstyle(1,BLUE);
    fillellipse(x+90,y+270,20,20);
    delay(300);
    fillellipse(x+150,y+210,20,20);
    delay(300);
    fillellipse(x+210,y+150,20,20);
    delay(300);
    fillellipse(x+270,y+90,20,20);
    delay(300);
    cleardevice();
    calc();

 delay(200);
 exit(0);
 //break;
 }
 else if(u33== 612007)
 {
  setfillstyle(1,BLUE);
    fillellipse(x+270,y+270,20,20);
    delay(300);
    fillellipse(x+210,y+210,20,20);
    delay(300);
    fillellipse(x+150,y+150,20,20);
    delay(300);
    fillellipse(x+90,y+90,20,20);
    delay(300);
    cleardevice();
    calc();

 exit(0);
 //break;
 }

 if(u33==260813)
 {
  setfillstyle(1,BLUE);
    fillellipse(x+270,y+210,20,20);
    delay(300);
    fillellipse(x+210,y+150,20,20);
    delay(300);
    fillellipse(x+150,y+90,20,20);
    delay(300);
    fillellipse(x+90,y+30,20,20);
    delay(300);
    cleardevice();
    calc();

 delay(200);
 exit(0);
 }


if(u44==210)
{
 setfillstyle(1,BLUE);                //17
    fillellipse(x+30,y+270,20,20);
    delay(300);
    fillellipse(x+90,y+270,20,20);
    delay(300);
    fillellipse(x+150,y+270,20,20);
    delay(300);
    fillellipse(x+210,y+270,20,20);
    delay(300);
    cleardevice();
    calc1();
    delay(100);

 exit(0);
// break;
 }
else if(u44==42718)
 {
 setfillstyle(1,BLUE);                //99
    fillellipse(x+30,y+270,20,20);
    delay(300);
    fillellipse(x+30,y+210,20,20);
    delay(300);
    fillellipse(x+30,y+150,20,20);
    delay(300);
    fillellipse(x+30,y+90,20,20);
    delay(300);
    cleardevice();
    calc1();
    delay(100);

 delay(200);
 exit(0);
// break;
 }
 else if(u44==93398)
 {
   setfillstyle(1,BLUE);
    fillellipse(x+30,y+270,20,20);
    delay(300);
    fillellipse(x+90,y+210,20,20);
    delay(300);
    fillellipse(x+150,y+150,20,20);
    delay(300);
    fillellipse(x+210,y+90,20,20);
    delay(300);
    cleardevice();
    calc();

 exit(0);
// break;
 }
else if(u44==1155)
 {
 setfillstyle(1,BLUE);               //26
    fillellipse(x+90,y+270,20,20);
    delay(300);
    fillellipse(x+150,y+270,20,20);
    delay(300);
    fillellipse(x+210,y+270,20,20);
    delay(300);
    fillellipse(x+270,y+270,20,20);
    delay(300);
    cleardevice();
    calc();

 exit(0);
// break;
 }
 else if(u44==111333)
 {
     setfillstyle(1,BLUE);
    fillellipse(x+90,y+90,20,20);
    delay(300);
    fillellipse(x+90,y+150,20,20);
    delay(300);
    fillellipse(x+90,y+210,20,20);
    delay(300);
    fillellipse(x+90,y+270,20,20);
    delay(300);
    cleardevice();
    calc();

 exit(0);
// break;
 }

else if(u44==206435)
 {
    setfillstyle(1,BLUE);
    fillellipse(x+150,y+90,20,20);
    delay(300);
    fillellipse(x+150,y+150,20,20);
    delay(300);
    fillellipse(x+150,y+210,20,20);
    delay(300);
    fillellipse(x+150,y+270,20,20);
    delay(300);
    cleardevice();
    calc();

 exit(0);
// break;
 }
 else if(u44==463841)
 {
    setfillstyle(1,BLUE);
    fillellipse(x+210,y+90,20,20);
    delay(300);
    fillellipse(x+210,y+150,20,20);
    delay(300);
    fillellipse(x+210,y+210,20,20);
    delay(300);
    fillellipse(x+210,y+270,20,20);
    delay(300);
    cleardevice();
    calc();

 delay(200);
 exit(0);
// break;
 }
 else if(u44==1064503)
 {
    setfillstyle(1,BLUE);
    fillellipse(x+270,y+90,20,20);
    delay(300);
    fillellipse(x+270,y+150,20,20);
    delay(300);
    fillellipse(x+270,y+210,20,20);
    delay(300);
    fillellipse(x+270,y+270,20,20);
    delay(300);
    cleardevice();
    calc();

 exit(0);
// break;
 }
 else if(u44==174021)
 {
    setfillstyle(1,BLUE);
    fillellipse(x+90,y+270,20,20);
    delay(300);
    fillellipse(x+150,y+210,20,20);
    delay(300);
    fillellipse(x+210,y+150,20,20);
    delay(300);
    fillellipse(x+270,y+90,20,20);
    delay(300);
    cleardevice();
    calc();

 exit(0);
// break;
 }
 else if(u44==612007)
 {
     setfillstyle(1,BLUE);
    fillellipse(x+270,y+270,20,20);
    delay(300);
    fillellipse(x+210,y+210,20,20);
    delay(300);
    fillellipse(x+150,y+150,20,20);
    delay(300);
    fillellipse(x+90,y+90,20,20);
    delay(300);
    cleardevice();
    calc();
    exit(0);

 exit(0);
// break;
 }

 else if(u44==260813)
 {
     setfillstyle(1,BLUE);
    fillellipse(x+270,y+210,20,20);
    delay(300);
    fillellipse(x+210,y+150,20,20);
    delay(300);
    fillellipse(x+150,y+90,20,20);
    delay(300);
    fillellipse(x+90,y+30,20,20);
    delay(300);
    cleardevice();
    calc();

 exit(0);
 }


else if(u55==210)
{
 setfillstyle(1,BLUE);                //17
    fillellipse(x+30,y+270,20,20);
    delay(300);
    fillellipse(x+90,y+270,20,20);
    delay(300);
    fillellipse(x+150,y+270,20,20);
    delay(300);
    fillellipse(x+210,y+270,20,20);
    delay(300);
    cleardevice();
    calc1();
    delay(100);

 exit(0);
// break;
 }
else if(u55==42718)
 {
 setfillstyle(1,BLUE);                //99
    fillellipse(x+30,y+270,20,20);
    delay(300);
    fillellipse(x+30,y+210,20,20);
    delay(300);
    fillellipse(x+30,y+150,20,20);
    delay(300);
    fillellipse(x+30,y+90,20,20);
    delay(300);
    cleardevice();
    calc1();
    delay(100);

 delay(200);
 exit(0);
// break;
 }
 else if(u55==93398)
 {
   setfillstyle(1,BLUE);
    fillellipse(x+30,y+270,20,20);
    delay(300);
    fillellipse(x+90,y+210,20,20);
    delay(300);
    fillellipse(x+150,y+150,20,20);
    delay(300);
    fillellipse(x+210,y+90,20,20);
    delay(300);
    cleardevice();
    calc();

 exit(0);
// break;
 }
else if(u55==1155)
 {
 setfillstyle(1,BLUE);               //26
    fillellipse(x+90,y+270,20,20);
    delay(300);
    fillellipse(x+150,y+270,20,20);
    delay(300);
    fillellipse(x+210,y+270,20,20);
    delay(300);
    fillellipse(x+270,y+270,20,20);
    delay(300);
    cleardevice();
    calc();

 exit(0);
// break;
 }
 else if(u55==111333)
 {
     setfillstyle(1,BLUE);
    fillellipse(x+90,y+90,20,20);
    delay(300);
    fillellipse(x+90,y+150,20,20);
    delay(300);
    fillellipse(x+90,y+210,20,20);
    delay(300);
    fillellipse(x+90,y+270,20,20);
    delay(300);
    cleardevice();
    calc();

 exit(0);
// break;
 }

else if(u55==206435)
 {
    setfillstyle(1,BLUE);
    fillellipse(x+150,y+90,20,20);
    delay(300);
    fillellipse(x+150,y+150,20,20);
    delay(300);
    fillellipse(x+150,y+210,20,20);
    delay(300);
    fillellipse(x+150,y+270,20,20);
    delay(300);
    cleardevice();
    calc();

 exit(0);
// break;
 }
 else if(u55==463841)
 {
    setfillstyle(1,BLUE);
    fillellipse(x+210,y+90,20,20);
    delay(300);
    fillellipse(x+210,y+150,20,20);
    delay(300);
    fillellipse(x+210,y+210,20,20);
    delay(300);
    fillellipse(x+210,y+270,20,20);
    delay(300);
    cleardevice();
    calc();

 delay(200);
 exit(0);
// break;
 }
 else if(u55==1064503)
 {
    setfillstyle(1,BLUE);
    fillellipse(x+270,y+90,20,20);
    delay(300);
    fillellipse(x+270,y+150,20,20);
    delay(300);
    fillellipse(x+270,y+210,20,20);
    delay(300);
    fillellipse(x+270,y+270,20,20);
    delay(300);
    cleardevice();
    calc();

 exit(0);
// break;
 }
 else if(u55==174021)
 {
    setfillstyle(1,BLUE);
    fillellipse(x+90,y+270,20,20);
    delay(300);
    fillellipse(x+150,y+210,20,20);
    delay(300);
    fillellipse(x+210,y+150,20,20);
    delay(300);
    fillellipse(x+270,y+90,20,20);
    delay(300);
    cleardevice();
    calc();

 exit(0);
// break;
 }
 else if(u55==612007)
 {
     setfillstyle(1,BLUE);
    fillellipse(x+270,y+270,20,20);
    delay(300);
    fillellipse(x+210,y+210,20,20);
    delay(300);
    fillellipse(x+150,y+150,20,20);
    delay(300);
    fillellipse(x+90,y+90,20,20);
    delay(300);
    cleardevice();
    calc();
    exit(0);

 exit(0);
// break;
 }

 else if(u55==260813)
 {
     setfillstyle(1,BLUE);
    fillellipse(x+270,y+210,20,20);
    delay(300);
    fillellipse(x+210,y+150,20,20);
    delay(300);
    fillellipse(x+150,y+90,20,20);
    delay(300);
    fillellipse(x+90,y+30,20,20);
    delay(300);
    cleardevice();
    calc();

 exit(0);
 }

   else if(u66==1559207)
 {
    setfillstyle(1,BLUE);
    fillellipse(x+30,y+210,20,20);
    delay(300);
    fillellipse(x+30,y+150,20,20);
    delay(300);
    fillellipse(x+30,y+90,20,20);
    delay(300);
    fillellipse(x+30,y+30,20,20);
    delay(300);
    cleardevice();
    calc();
  exit(0);
// break;
 }
else if(u66==2931769)
 {
    setfillstyle(1,BLUE);
    fillellipse(x+90,y+210,20,20);
    delay(300);
    fillellipse(x+90,y+150,20,20);
    delay(300);
    fillellipse(x+90,y+90,20,20);
    delay(300);
    fillellipse(x+90,y+30,20,20);
    delay(300);
    cleardevice();
    calc();

  exit(0);
// break;
 }
else if(u66==3944077)
 {
   setfillstyle(1,BLUE);
    fillellipse(x+150,y+210,20,20);
    delay(300);
    fillellipse(x+150,y+150,20,20);
    delay(300);
    fillellipse(x+150,y+90,20,20);
    delay(300);
    fillellipse(x+150,y+30,20,20);
    delay(300);
    cleardevice();
    calc();

 exit(0);
// break;
 }
else if(u66==5897407)
 {
     setfillstyle(1,BLUE);
    fillellipse(x+210,y+210,20,20);
    delay(300);
    fillellipse(x+210,y+150,20,20);
    delay(300);
    fillellipse(x+210,y+90,20,20);
    delay(300);
    fillellipse(x+210,y+30,20,20);
    delay(300);
    cleardevice();
    calc();

 exit(0);
// break;
 }

else if(u66==938681)
 {
     setfillstyle(1,BLUE);
    fillellipse(x+270,y+210,20,20);
    delay(300);
    fillellipse(x+270,y+150,20,20);
    delay(300);
    fillellipse(x+270,y+90,20,20);
    delay(300);
    fillellipse(x+270,y+30,20,20);
    delay(300);
    cleardevice();
    calc();

 exit(0);
// break;
 }
else if(u66==4061501)
 {
     setfillstyle(1,BLUE);
    fillellipse(x+210,y+210,20,20);
    delay(300);
    fillellipse(x+150,y+150,20,20);
    delay(300);
    fillellipse(x+90,y+90,20,20);
    delay(300);
    fillellipse(x+30,y+30,20,20);
    delay(300);
    cleardevice();
    calc();

 exit(0);
// break;
 }
else if(u66==215441)
 {
     setfillstyle(1,BLUE);
    fillellipse(x+90,y+210,20,20);
    delay(300);
    fillellipse(x+150,y+210,20,20);
    delay(300);
    fillellipse(x+210,y+210,20,20);
    delay(300);
    fillellipse(x+270,y+210,20,20);
    delay(300);
    cleardevice();
    calc();

 exit(0);
// break;
 }
else if(u66==96577)
 {
     setfillstyle(1,BLUE);
    fillellipse(x+30,y+210,20,20);
    delay(300);
    fillellipse(x+90,y+210,20,20);
    delay(300);
    fillellipse(x+150,y+210,20,20);
    delay(300);
    fillellipse(x+210,y+210,20,20);
    delay(300);
    cleardevice();
    calc();

 exit(0);
// break;
 }
else if(u66==4529803)
{
    setfillstyle(1,BLUE);
    fillellipse(x+90,y+210,20,20);
    delay(300);
    fillellipse(x+150,y+150,20,20);
    delay(300);
    fillellipse(x+210,y+90,20,20);
    delay(300);
    fillellipse(x+270,y+30,20,20);
    delay(300);
    cleardevice();
    calc();

 exit(0);
}

//player 2(5th)
    ee:
    cout<<"\r"<<g.play2<<"5: ";
      k55=bioskey(0);
       if(k55==k22 || k55==k1 || k55==k11 || k55==k2 || k55==k3 || k55==k33 ||k55==k4|| k55==k44 || k55==k5)
      {
       cout<<"\ralready occupied";
       goto ee;
      }
      else
      {
    if(k55=='a' || k55=='A')
    { z55=2;

     setfillstyle(5,3);
     fillellipse(x+30,y+270,20,20);
    }
    else if(k55=='b'|| k55=='B')
    {
    z55=3;
    setfillstyle(5,3);
     fillellipse(x+90,y+270,20,20);
    }
    else if(k55=='c'|| k55=='C')
    {z55=5;
     setfillstyle(5,3);
     fillellipse(x+150,y+270,20,20);

    }

    else if(k55=='d'|| k55=='D')
    {z55=7;
     setfillstyle(5,3);
     fillellipse(x+210,y+270,20,20);

    }

    else if(k55=='e'|| k55=='E')
    {z55=11;
     setfillstyle(5,3);
     fillellipse(x+270,y+270,20,20);
    }

     else if(k55=='f'|| k55=='F')
    {z55=13;
     setfillstyle(5,3);
     fillellipse(x+30,y+210,20,20);

    }

    else if(k55=='g'|| k55=='G')
    {z55=17;
     setfillstyle(5,3);
     fillellipse(x+90,y+210,20,20);

    }

    else if(k55=='h'|| k55=='H')
    {z55=19;
     setfillstyle(5,3);
     fillellipse(x+150,y+210,20,20);

    }

    else if(k55=='i'|| k55=='I')
    {z55=23;
     setfillstyle(5,3);
     fillellipse(x+210,y+210,20,20);

    }

    else if(k55=='j'|| k55=='J')
    {z55=29;
     setfillstyle(5,3);
     fillellipse(x+270,y+210,20,20);
    }


     else if(k55=='k'|| k55=='K')
    {z55=31;
     setfillstyle(5,3);
     fillellipse(x+30,y+150,20,20);

    }

    else if(k55=='l'|| k55=='L')
    {z55=37;
     setfillstyle(5,3);
     fillellipse(x+90,y+150,20,20);

    }

    else if(k55=='m'|| k55=='M')
    {z55=41;
     setfillstyle(5,3);
     fillellipse(x+150,y+150,20,20);

    }

    else if(k55=='n'|| k55=='N')
    {z55=43;
     setfillstyle(5,3);
     fillellipse(x+210,y+150,20,20);

    }

    else if(k55=='o'|| k55=='O')
    {z55=47;
     setfillstyle(5,3);
     fillellipse(x+270,y+150,20,20);
    }

    else if(k55=='p'|| k55=='P')
    {z55=53;
     setfillstyle(5,3);
     fillellipse(x+30,y+90,20,20);

    }

    else if(k55=='q'|| k55=='Q')
    {z55=59;
     setfillstyle(5,3);
     fillellipse(x+90,y+90,20,20);

    }

    else if(k55=='r'|| k55=='R')
    {z55=61;
     setfillstyle(5,3);
     fillellipse(x+150,y+90,20,20);

    }

    else if(k55=='s'|| k55=='S')
    {z55=67;
     setfillstyle(5,3);
     fillellipse(x+210,y+90,20,20);

    }

    else if(k55=='t'|| k55=='T')
    {z55=71;
     setfillstyle(5,3);
     fillellipse(x+270,y+90,20,20);
    }


     else if(k55=='u'|| k55=='U')
    {z55=73;
     setfillstyle(5,3);
     fillellipse(x+30,y+30,20,20);

    }

    else if(k55=='v'|| k55=='V')
    {z55=79;
     setfillstyle(5,3);
     fillellipse(x+90,y+30,20,20);

    }

    else if(k55=='w'|| k55=='W')
    {z55=83;
     setfillstyle(5,3);
     fillellipse(x+150,y+30,20,20);

    }

    else if(k55=='x'|| k55=='X')
    {z55=89;
     setfillstyle(5,3);
     fillellipse(x+210,y+30,20,20);

    }

    else if(k55=='y'|| k55=='Y')
    {z55=97;
     setfillstyle(5,3);
     fillellipse(x+270,y+30,20,20);
    }

else
    {
     cout<<"\ninvalid choice\n";
     goto ee;
    }
   }

{
u77=z11*z22*z33*z55;
u88=z11*z22*z44*z55;
u99=z11*z33*z44*z55;
u100=z22*z33*z44*z55;


if(u77==210)
 {
  setfillstyle(1,GREEN);                //17
    fillellipse(x+30,y+270,20,20);
    delay(300);
    fillellipse(x+90,y+270,20,20);
    delay(300);
    fillellipse(x+150,y+270,20,20);
    delay(300);
    fillellipse(x+210,y+270,20,20);
    delay(300);
    cleardevice();
    calc1();
    delay(100);

 exit(0);
// break;
 }

else if(u77==42718)
 {
 setfillstyle(1,GREEN);                //99
    fillellipse(x+30,y+270,20,20);
    delay(300);
    fillellipse(x+30,y+210,20,20);
    delay(300);
    fillellipse(x+30,y+150,20,20);
    delay(300);
    fillellipse(x+30,y+90,20,20);
    delay(300);
    cleardevice();
    calc1();
    delay(100);

 exit(0);
// break;
 }
 else if(u77== 93398)
 {
 setfillstyle(1,GREEN);
    fillellipse(x+30,y+270,20,20);
    delay(300);
    fillellipse(x+90,y+210,20,20);
    delay(300);
    fillellipse(x+150,y+150,20,20);
    delay(300);
    fillellipse(x+210,y+90,20,20);
    delay(300);
    cleardevice();
    calc();
 exit(0);
// break;
 }
 else if(u77==1155)
 {
 setfillstyle(1,GREEN);               //26
    fillellipse(x+90,y+270,20,20);
    delay(300);
    fillellipse(x+150,y+270,20,20);
    delay(300);
    fillellipse(x+210,y+270,20,20);
    delay(300);
    fillellipse(x+270,y+270,20,20);
    delay(300);
    cleardevice();
    calc();

 exit(0);
// break;
 }
 else if(u77== 111333)
 {
  setfillstyle(1,GREEN);
    fillellipse(x+90,y+90,20,20);
    delay(300);
    fillellipse(x+90,y+150,20,20);
    delay(300);
    fillellipse(x+90,y+210,20,20);
    delay(300);
    fillellipse(x+90,y+270,20,20);
    delay(300);
    cleardevice();
    calc();

 exit(0);
// break;
 }

  else if(u77== 206435)
 {
 setfillstyle(1,GREEN);
    fillellipse(x+150,y+90,20,20);
    delay(300);
    fillellipse(x+150,y+150,20,20);
    delay(300);
    fillellipse(x+150,y+210,20,20);
    delay(300);
    fillellipse(x+150,y+270,20,20);
    delay(300);
    cleardevice();
    calc();

 exit(0);
// break;
 }
 else if(u77== 463841)
 {
  setfillstyle(1,GREEN);
    fillellipse(x+210,y+90,20,20);
    delay(300);
    fillellipse(x+210,y+150,20,20);
    delay(300);
    fillellipse(x+210,y+210,20,20);
    delay(300);
    fillellipse(x+210,y+270,20,20);
    delay(300);
    cleardevice();
    calc();

 exit(0);
 }
 else if(u77==1064503)
 {
  setfillstyle(1,GREEN);
    fillellipse(x+270,y+90,20,20);
    delay(300);
    fillellipse(x+270,y+150,20,20);
    delay(300);
    fillellipse(x+270,y+210,20,20);
    delay(300);
    fillellipse(x+270,y+270,20,20);
    delay(300);
    cleardevice();
    calc();

 exit(0);

 }
 else if(u77==174021)
 {
  setfillstyle(1,GREEN);
    fillellipse(x+90,y+270,20,20);
    delay(300);
    fillellipse(x+150,y+210,20,20);
    delay(300);
    fillellipse(x+210,y+150,20,20);
    delay(300);
    fillellipse(x+270,y+90,20,20);
    delay(300);
    cleardevice();
    calc();

 delay(200);
 exit(0);
 }
 else if(u77==612007)
 {
  setfillstyle(1,GREEN);
    fillellipse(x+270,y+270,20,20);
    delay(300);
    fillellipse(x+210,y+210,20,20);
    delay(300);
    fillellipse(x+150,y+150,20,20);
    delay(300);
    fillellipse(x+90,y+90,20,20);
    delay(300);
    cleardevice();
    calc();

 exit(0);
 }

 else if(u77==260813)
 {
  setfillstyle(1,GREEN);
    fillellipse(x+270,y+210,20,20);
    delay(300);
    fillellipse(x+210,y+150,20,20);
    delay(300);
    fillellipse(x+150,y+90,20,20);
    delay(300);
    fillellipse(x+90,y+30,20,20);
    delay(300);
    cleardevice();
    calc();

 delay(200);
 exit(0);
 }
}

if(u88==210)
{
 setfillstyle(1,GREEN);                //17
    fillellipse(x+30,y+270,20,20);
    delay(300);
    fillellipse(x+90,y+270,20,20);
    delay(300);
    fillellipse(x+150,y+270,20,20);
    delay(300);
    fillellipse(x+210,y+270,20,20);
    delay(300);
    cleardevice();
    calc1();
    delay(100);

 exit(0);
 }
else if(u88==42718)
 {
 setfillstyle(1,GREEN);                //99
    fillellipse(x+30,y+270,20,20);
    delay(300);
    fillellipse(x+30,y+210,20,20);
    delay(300);
    fillellipse(x+30,y+150,20,20);
    delay(300);
    fillellipse(x+30,y+90,20,20);
    delay(300);
    cleardevice();
    calc1();
    delay(100);

exit(0);
 }
 else if(u88==93398)
 {
   setfillstyle(1,GREEN);
    fillellipse(x+30,y+270,20,20);
    delay(300);
    fillellipse(x+90,y+210,20,20);
    delay(300);
    fillellipse(x+150,y+150,20,20);
    delay(300);
    fillellipse(x+210,y+90,20,20);
    delay(300);
    cleardevice();
    calc();

 exit(0);

 }
else if(u88==1155)
 {
 setfillstyle(1,GREEN);               //26
    fillellipse(x+90,y+270,20,20);
    delay(300);
    fillellipse(x+150,y+270,20,20);
    delay(300);
    fillellipse(x+210,y+270,20,20);
    delay(300);
    fillellipse(x+270,y+270,20,20);
    delay(300);
    cleardevice();
    calc();

 exit(0);
 }
 else if(u88==111333)
 {
     setfillstyle(1,GREEN);
    fillellipse(x+90,y+90,20,20);
    delay(300);
    fillellipse(x+90,y+150,20,20);
    delay(300);
    fillellipse(x+90,y+210,20,20);
    delay(300);
    fillellipse(x+90,y+270,20,20);
    delay(300);
    cleardevice();
    calc();

 exit(0);
 }

else if(u88==206435)
 {
    setfillstyle(1,GREEN);
    fillellipse(x+150,y+90,20,20);
    delay(300);
    fillellipse(x+150,y+150,20,20);
    delay(300);
    fillellipse(x+150,y+210,20,20);
    delay(300);
    fillellipse(x+150,y+270,20,20);
    delay(300);
    cleardevice();
    calc();

 exit(0);
 }
 else if(u88==463841)
 {
    setfillstyle(1,GREEN);
    fillellipse(x+210,y+90,20,20);
    delay(300);
    fillellipse(x+210,y+150,20,20);
    delay(300);
    fillellipse(x+210,y+210,20,20);
    delay(300);
    fillellipse(x+210,y+270,20,20);
    delay(300);
    cleardevice();
    calc();

 delay(200);
 exit(0);
 }
 else if(u88==1064503)
 {
    setfillstyle(1,GREEN);
    fillellipse(x+270,y+90,20,20);
    delay(300);
    fillellipse(x+270,y+150,20,20);
    delay(300);
    fillellipse(x+270,y+210,20,20);
    delay(300);
    fillellipse(x+270,y+270,20,20);
    delay(300);
    cleardevice();
    calc();

 exit(0);
 }
 else if(u88==174021)
 {
    setfillstyle(1,GREEN);
    fillellipse(x+90,y+270,20,20);
    delay(300);
    fillellipse(x+150,y+210,20,20);
    delay(300);
    fillellipse(x+210,y+150,20,20);
    delay(300);
    fillellipse(x+270,y+90,20,20);
    delay(300);
    cleardevice();
    calc();

 exit(0);
 }
 else if(u88==612007)
 {
     setfillstyle(1,GREEN);
    fillellipse(x+270,y+270,20,20);
    delay(300);
    fillellipse(x+210,y+210,20,20);
    delay(300);
    fillellipse(x+150,y+150,20,20);
    delay(300);
    fillellipse(x+90,y+90,20,20);
    delay(300);
    cleardevice();
    calc();
    exit(0);
 }

 else if(u88==260813)
 {
     setfillstyle(1,GREEN);
    fillellipse(x+270,y+210,20,20);
    delay(300);
    fillellipse(x+210,y+150,20,20);
    delay(300);
    fillellipse(x+150,y+90,20,20);
    delay(300);
    fillellipse(x+90,y+30,20,20);
    delay(300);
    cleardevice();
    calc();

 exit(0);
 }


else if(u99==210)
{
 setfillstyle(1,GREEN);                //17
    fillellipse(x+30,y+270,20,20);
    delay(300);
    fillellipse(x+90,y+270,20,20);
    delay(300);
    fillellipse(x+150,y+270,20,20);
    delay(300);
    fillellipse(x+210,y+270,20,20);
    delay(300);
    cleardevice();
    calc1();
    delay(100);

 exit(0);
// break;
 }
else if(u99==42718)
 {
 setfillstyle(1,GREEN);                //99
    fillellipse(x+30,y+270,20,20);
    delay(300);
    fillellipse(x+30,y+210,20,20);
    delay(300);
    fillellipse(x+30,y+150,20,20);
    delay(300);
    fillellipse(x+30,y+90,20,20);
    delay(300);
    cleardevice();
    calc1();
    delay(100);

 delay(200);
 exit(0);
// break;
 }
 else if(u99==93398)
 {
   setfillstyle(1,GREEN);
    fillellipse(x+30,y+270,20,20);
    delay(300);
    fillellipse(x+90,y+210,20,20);
    delay(300);
    fillellipse(x+150,y+150,20,20);
    delay(300);
    fillellipse(x+210,y+90,20,20);
    delay(300);
    cleardevice();
    calc();

 exit(0);
// break;
 }
else if(u99==1155)
 {
 setfillstyle(1,GREEN);               //26
    fillellipse(x+90,y+270,20,20);
    delay(300);
    fillellipse(x+150,y+270,20,20);
    delay(300);
    fillellipse(x+210,y+270,20,20);
    delay(300);
    fillellipse(x+270,y+270,20,20);
    delay(300);
    cleardevice();
    calc();

 exit(0);
// break;
 }
 else if(u99==111333)
 {
     setfillstyle(1,GREEN);
    fillellipse(x+90,y+90,20,20);
    delay(300);
    fillellipse(x+90,y+150,20,20);
    delay(300);
    fillellipse(x+90,y+210,20,20);
    delay(300);
    fillellipse(x+90,y+270,20,20);
    delay(300);
    cleardevice();
    calc();

 exit(0);
// break;
 }

else if(u99==206435)
 {
    setfillstyle(1,GREEN);
    fillellipse(x+150,y+90,20,20);
    delay(300);
    fillellipse(x+150,y+150,20,20);
    delay(300);
    fillellipse(x+150,y+210,20,20);
    delay(300);
    fillellipse(x+150,y+270,20,20);
    delay(300);
    cleardevice();
    calc();

 exit(0);
// break;
 }
 else if(u99==463841)
 {
    setfillstyle(1,GREEN);
    fillellipse(x+210,y+90,20,20);
    delay(300);
    fillellipse(x+210,y+150,20,20);
    delay(300);
    fillellipse(x+210,y+210,20,20);
    delay(300);
    fillellipse(x+210,y+270,20,20);
    delay(300);
    cleardevice();
    calc();

 delay(200);
 exit(0);
// break;
 }
 else if(u99==1064503)
 {
    setfillstyle(1,GREEN);
    fillellipse(x+270,y+90,20,20);
    delay(300);
    fillellipse(x+270,y+150,20,20);
    delay(300);
    fillellipse(x+270,y+210,20,20);
    delay(300);
    fillellipse(x+270,y+270,20,20);
    delay(300);
    cleardevice();
    calc();

 exit(0);
// break;
 }
 else if(u99==174021)
 {
    setfillstyle(1,GREEN);
    fillellipse(x+90,y+270,20,20);
    delay(300);
    fillellipse(x+150,y+210,20,20);
    delay(300);
    fillellipse(x+210,y+150,20,20);
    delay(300);
    fillellipse(x+270,y+90,20,20);
    delay(300);
    cleardevice();
    calc();

 exit(0);
// break;
 }
 else if(u99==612007)
 {
     setfillstyle(1,GREEN);
    fillellipse(x+270,y+270,20,20);
    delay(300);
    fillellipse(x+210,y+210,20,20);
    delay(300);
    fillellipse(x+150,y+150,20,20);
    delay(300);
    fillellipse(x+90,y+90,20,20);
    delay(300);
    cleardevice();
    calc();
    exit(0);

 exit(0);
// break;
 }

 else if(u99==260813)
 {
     setfillstyle(1,GREEN);
    fillellipse(x+270,y+210,20,20);
    delay(300);
    fillellipse(x+210,y+150,20,20);
    delay(300);
    fillellipse(x+150,y+90,20,20);
    delay(300);
    fillellipse(x+90,y+30,20,20);
    delay(300);
    cleardevice();
    calc();

 exit(0);
 }

  else if(u100==1559207)
 {
    setfillstyle(1,GREEN);
    fillellipse(x+30,y+210,20,20);
    delay(300);
    fillellipse(x+30,y+150,20,20);
    delay(300);
    fillellipse(x+30,y+90,20,20);
    delay(300);
    fillellipse(x+30,y+30,20,20);
    delay(300);
    cleardevice();
    calc1();
  exit(0);
// break;
 }
else if(u100==2931769)
 {
    setfillstyle(1,GREEN);
    fillellipse(x+90,y+210,20,20);
    delay(300);
    fillellipse(x+90,y+150,20,20);
    delay(300);
    fillellipse(x+90,y+90,20,20);
    delay(300);
    fillellipse(x+90,y+30,20,20);
    delay(300);
    cleardevice();
    calc1();

  exit(0);
// break;
 }
else if(u100==3944077)
 {
   setfillstyle(1,GREEN);
    fillellipse(x+150,y+210,20,20);
    delay(300);
    fillellipse(x+150,y+150,20,20);
    delay(300);
    fillellipse(x+150,y+90,20,20);
    delay(300);
    fillellipse(x+150,y+30,20,20);
    delay(300);
    cleardevice();
    calc1();

 exit(0);
// break;
 }
else if(u100==5897407)
 {
     setfillstyle(1,GREEN);
    fillellipse(x+210,y+210,20,20);
    delay(300);
    fillellipse(x+210,y+150,20,20);
    delay(300);
    fillellipse(x+210,y+90,20,20);
    delay(300);
    fillellipse(x+210,y+30,20,20);
    delay(300);
    cleardevice();
    calc1();

 exit(0);
// break;
 }

else if(u100==9386981)
 {
     setfillstyle(1,GREEN);
    fillellipse(x+270,y+210,20,20);
    delay(300);
    fillellipse(x+270,y+150,20,20);
    delay(300);
    fillellipse(x+270,y+90,20,20);
    delay(300);
    fillellipse(x+270,y+30,20,20);
    delay(300);
    cleardevice();
    calc1();

 exit(0);
// break;
 }
else if(u100==4061501)
 {
     setfillstyle(1,GREEN);
    fillellipse(x+210,y+210,20,20);
    delay(300);
    fillellipse(x+150,y+150,20,20);
    delay(300);
    fillellipse(x+90,y+90,20,20);
    delay(300);
    fillellipse(x+30,y+30,20,20);
    delay(300);
    cleardevice();
    calc1();

 exit(0);
// break;
 }
else if(u100==215441)
 {
     setfillstyle(1,GREEN);
    fillellipse(x+90,y+210,20,20);
    delay(300);
    fillellipse(x+150,y+210,20,20);
    delay(300);
    fillellipse(x+210,y+210,20,20);
    delay(300);
    fillellipse(x+270,y+210,20,20);
    delay(300);
    cleardevice();
    calc1();

 exit(0);
// break;
 }
else if(u100==96577)
 {
     setfillstyle(1,GREEN);
    fillellipse(x+30,y+210,20,20);
    delay(300);
    fillellipse(x+90,y+210,20,20);
    delay(300);
    fillellipse(x+150,y+210,20,20);
    delay(300);
    fillellipse(x+210,y+210,20,20);
    delay(300);
    cleardevice();
    calc1();

 exit(0);
// break;
 }
else if(u100==4529803)
{
    setfillstyle(1,GREEN);
    fillellipse(x+90,y+210,20,20);
    delay(300);
    fillellipse(x+150,y+150,20,20);
    delay(300);
    fillellipse(x+210,y+90,20,20);
    delay(300);
    fillellipse(x+270,y+30,20,20);
    delay(300);
    cleardevice();
    calc1();

 exit(0);
}

else
  {
   delay(200);
   cleardevice();
   calc2();
   delay(50);
   exit(0);
  }
//getch();

}

void main()
{
/* request auto detection */
   int gdriver = DETECT, gmode, errorcode;
   int xmax, ymax;

   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "c:\\tc\\bgi");

   /* read result of initialization */
   errorcode = graphresult();
   /* an error occurred */
   if (errorcode != grOk)
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1);
   }
credit();
getch();
cleardevice();
loading();
delay(1000);
cleardevice();
design();
cleardevice();
all();
getch();
}




