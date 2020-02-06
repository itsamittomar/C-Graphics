#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<graphics.h>

void main ()
{
 e:
 {
 FILE *ptr,*ptr1;
 char str[50]="sumit";
 char str1[50];
 float num=12345;
 int style,k,f;
 int pass,e;
 char ch,cb;
  int i = 0, hour=0,t, minute=0, second=0,player=0,n=0,r=0,c=0,line=0,winner=0,s1=0,s2=0;
  char name[15],name2[15];
  char b[3][3] =
  {
  {'1','2 ','3 '},
  {'4','5 ','6 '},
  {'7 ','8 ','9 '}
  } ;
   int gdriver=DETECT,gmode;
 initgraph(&gdriver,&gmode,"C:\\TC\\BGI");


  setcolor(WHITE);

  setlinestyle(SOLID_LINE,3,3);
  rectangle(1,1,630,460);
 rectangle(7,7,623,453);
// gotoxy(25,2);
 setbkcolor(0);
 settextstyle(0,HORIZ_DIR,2);
 setcolor(WHITE);
 outtextxy(80,23,"\xB2\xB2\xB2\xB2 TIC TAC TOE \xB2\xB2\xB2\xB2");
outtextxy(7,50,"=======================================");
outtextxy(160,120,"MENU");
outtextxy(160,150,"1. START GAME");
outtextxy(160,180,"2. RECORD");
outtextxy(160,210,"3. ABOUT");
outtextxy(160,240,"4. EXIT");
settextstyle(0,HORIZ_DIR,1.9);
outtextxy(160,270,"Enter Your Choice:");
rectangle(150,285,390,310);
gotoxy(22,19);


scanf("%d",&t);//,&t);
 sound(440);
 delay(100);
 nosound();
cleardevice();
switch(t)
{
case 1:

 setlinestyle(SOLID_LINE,3,3);
  rectangle(1,1,630,460);
 rectangle(7,7,623,453);
// gotoxy(25,2);
 setbkcolor(0);
 settextstyle(0,HORIZ_DIR,2);
 setcolor(WHITE);
 outtextxy(80,23,"\xB2\xB2\xB2\xB2 TIC TAC TOE \xB2\xB2\xB2\xB2");
outtextxy(7,50,"=======================================");
 setbkcolor(0);
  settextstyle(0,HORIZ_DIR,1.5);
 outtextxy(40,135,"Enter The Password");
  rectangle(50,155,240,180);
  gotoxy(10,11);
  for(i=0;i<5;i++)
  {
  ch=getch();
  str1[i]=ch;
  ch='*';
  printf("%c",ch);
  }
  str1[i]='\0';
  /*delay(1000);
  sound(440);
  delay(100);
  nosound();   */
//cleardevice();
  if(strcmp(str1,str)==0)
 {
  rectangle(190,190,370,280);
settextstyle(0,HORIZ_DIR,1.5);
outtextxy(200,210,"Message...");
setcolor(GREEN);
outtextxy(200,240,"LOGIN CREATED!!!!!!");
sound(1000);
delay(80);
nosound();
getch();
cleardevice();


// setcolor(WHITE);
   setcolor(WHITE);
  setlinestyle(SOLID_LINE,3,3);
  rectangle(1,1,600,460);
 rectangle(7,7,593,453);
// gotoxy(25,2);
 settextstyle(0,HORIZ_DIR,2);
 setcolor(WHITE);
 outtextxy(80,23,"\xB2\xB2\xB2\xB2 TIC TAC TOE \xB2\xB2\xB2\xB2");
outtextxy(7,50,"=====================================");
//cleardevice();

 rectangle(1,1,600,450);
 rectangle(40,150,450,350);
 rectangle(41,148,454,348);
 setlinestyle(SOLID_LINE ,2,2);
 settextstyle(TRIPLEX_FONT, HORIZ_DIR, 1.5);
 ptr=fopen("record.txt","a");

 //setcolor(4);
 outtextxy(50,180,"Enter the player 1 name :");
// setcolor(WHITE);
 //setcolor(1);
 rectangle(60,220,420,240);
 gotoxy(10,15);
 scanf("%s",name);
  sound(440);
 delay(100);
 nosound();
 //setcolor(4);
 outtextxy(50,250,"Enter the player 2 name :");
 //setcolor(1);
 rectangle(60,286,420,305);
 setcolor(1);
 fflush(stdin);
 gotoxy(10,19);
 scanf("%s",name2);
  sound(440);
 delay(100);
 nosound();
 //cleardevice();
 // getch();
 cleardevice();

// clrscr();
  settextstyle(TRIPLEX_FONT, HORIZ_DIR, 1);
 setcolor(WHITE);
 outtextxy(220,250,"Loading........");

 setcolor(WHITE);
 rectangle(200,300,330,320);

for (style = EMPTY_FILL; style < USER_FILL; style++)
{
  setcolor(WHITE);
   setfillstyle(1,1);
   for(k=0;k<105;k=k+5)
  {
   setcolor(WHITE);
   bar(202 ,303,225+k,319);
   delay(5);
}
  }


   cleardevice();

  setcolor(WHITE);
  setlinestyle(SOLID_LINE,3,3);
  rectangle(1,1,600,460);
 rectangle(7,7,593,453);
// gotoxy(25,2);
 settextstyle(0,HORIZ_DIR,2);
 setcolor(WHITE);
 outtextxy(80,23,"\xB2\xB2\xB2\xB2 TIC TAC TOE \xB2\xB2\xB2\xB2");
outtextxy(7,50,"=====================================");

gotoxy(28,10);    printf(" %c\t |   %c\t |  %c\t\n",  b[0][0]  ,   b[0][1]   ,   b[0][2]);
gotoxy(34,13);printf("|");
gotoxy(42,13);printf("|");
gotoxy(26,11);printf("-----------------------\n");
   gotoxy(28,12); printf(" %c\t |   %c\t |  %c\t\n", b[1][0], b[1][1], b[1][2]);
gotoxy(26,14);printf("-----------------------\n");
    gotoxy(28,15);printf(" %c\t |   %c\t |  %c\t\n", b[2][0], b[2][1], b[2][2]);


 gotoxy(20,4);


 //setcolor(1);
 rectangle(180,316,280,336);
 gotoxy(25,21);
 printf("Continue");
 cleardevice();
 gotoxy(1,1);
 //fclose(ptr);
// getch();

    for( i = 0; i<9 && winner==0; i++)

    {    //setbkcolor(0);
	 rectangle(1,1,600,460);
 rectangle(7,7,593,453);
// gotoxy(25,2);
 settextstyle(0,HORIZ_DIR,2);
 outtextxy(80,23,"\xB2\xB2\xB2\xB2 TIC TAC TOE \xB2\xB2\xB2\xB2");
outtextxy(7,50,"=====================================");
    printf("\n\n");
gotoxy(28,10);    printf(" %c\t | %c\t | %c\t\n", b[0][0], b[0][1], b[0][2]);
gotoxy(34,13);printf("|");
gotoxy(42,13);printf("|");
gotoxy(26,11);printf("-----------------------\n");
   gotoxy(28,12); printf(" %c\t | %c\t | %c\t\n", b[1][0], b[1][1], b[1][2]);
   gotoxy(26,14);printf("-----------------------\n");
   gotoxy(28,15);printf(" %c\t | %c\t | %c\t\n", b[2][0], b[2][1], b[2][2]);
  // setbkcolor(BLUE);
   player = i%2 + 1;
   do
   {
    rectangle(150,290,380,340);
    settextstyle(0,HORIZ_DIR,1.5);
    outtextxy(180,295,"Position:");
    //printf("\n\tPlayer %d, Please Enter The Position To Place your %c: ", player,(player==1)?'X':'O');
    gotoxy(15,15);
    printf("\n\tPlayer %d:",player);
    gotoxy(35,20);
    scanf("%d",&n);//&n);
	 sound(440);
 delay(100);
 nosound();
	  // cleardevice();

	    r = --n/3;
	    c = n%3;

	}
	while(n<0 || n>9 || b[r][c]>'9');
       //cleardevice();
	b[r][c] = (player == 1) ? 'X' : 'O';
	//cleardevice();
	if((b[0][0] == b[1][1] && b[0][0] == b[2][2]) ||
	   (b[0][2] == b[1][1] && b[0][2] == b[2][0]))
	    winner = player;
	else

	    for(line = 0; line <= 2; line ++)

		if((b[line][0] == b[line][1] && b[line][0] == b[line][2])||
		   (b[0][line] == b[1][line] && b[0][line] == b[2][line]))
		    winner = player;

    }
 if(winner==1)
 s1=s1+100;
 else if(winner==2) //(winner==2)
 s2=s2+100;
 else
 {
 s1=0;
 s2=0;
 }
fprintf(ptr,"\n* %s\t\t\t\t%d\n* %s\t\t\t\t%d\n\n",name,s1,name2,s2);
 fclose(ptr);
   cleardevice();
    if(winner == 0)
       {


setcolor(WHITE);
  setlinestyle(SOLID_LINE,3,3);
  rectangle(1,1,600,460);
 rectangle(7,7,593,453);
// gotoxy(25,2);
 settextstyle(0,HORIZ_DIR,2);
 setcolor(WHITE);
 outtextxy(80,23,"\xB2\xB2\xB2\xB2 TIC TAC TOE \xB2\xB2\xB2\xB2");

outtextxy(7,50,"=====================================");
rectangle(180,200,360,300);

outtextxy(230,240,"DRAW");//       printf("DRAW\n");
  sound(1000);
  delay(80);
  nosound();
  getch();
       }
else if(winner==1)
{



setcolor(WHITE);
  setlinestyle(SOLID_LINE,2,2);
  rectangle(1,1,600,460);
 rectangle(7,7,593,453);
// gotoxy(25,2);
 settextstyle(0,HORIZ_DIR,2);
 setcolor(WHITE);
 outtextxy(80,23,"\xB2\xB2\xB2\xB2 TIC TAC TOE \xB2\xB2\xB2\xB2");

outtextxy(7,50,"=====================================");
rectangle(120,150,400,250);
 settextstyle(0,HORIZ_DIR,1);

outtextxy(130,170,"WINNER IS:");
gotoxy(25,15);
printf("%s",name);
 sound(440);
  delay(80);
  nosound();

getch();
}
else
{//,winner);
setcolor(WHITE);
  setlinestyle(SOLID_LINE,2,2);
  rectangle(1,1,600,460);
 rectangle(7,7,593,453);
// gotoxy(25,2);
 settextstyle(0,HORIZ_DIR,2);
 setcolor(WHITE);
 outtextxy(80,23,"\xB2\xB2\xB2\xB2 TIC TAC TOE \xB2\xB2\xB2\xB2");

outtextxy(7,50,"=====================================");
rectangle(120,150,400,250);
 settextstyle(0,HORIZ_DIR,1);

outtextxy(130,170,"WINNER IS:");
gotoxy(25,15);
printf("%s",name2);
 sound(440);
  delay(80);
  nosound();

getch();
}
   sound(1000);
  delay(80);
  nosound();

  cleardevice();
setcolor(WHITE);
  setlinestyle(SOLID_LINE,2,2);
  rectangle(1,1,600,460);
 rectangle(7,7,593,453);
// gotoxy(25,2);
 settextstyle(0,HORIZ_DIR,2);
 setcolor(WHITE);
 outtextxy(80,23,"\xB2\xB2\xB2\xB2 TIC TAC TOE \xB2\xB2\xB2\xB2");

outtextxy(7,50,"=====================================");
settextstyle(0,HORIZ_DIR,3);
outtextxy(55,170,"THANKS !!!!!!");
outtextxy(200,230,"FOR PLAYING");
settextstyle(0,HORIZ_DIR,1.5);
outtextxy(400,400,"MADE BY:");
outtextxy(400,420,"AMIT SINGH TOMAR");
settextstyle(0,HORIZ_DIR,2);
   setcolor(YELLOW);
   circle(50,100,25);
   setfillstyle(SOLID_FILL,YELLOW);
   floodfill(50,100,YELLOW);

   setcolor(BLACK);
   setfillstyle(SOLID_FILL,BLACK);
   fillellipse(44,85,2,6);
   fillellipse(56,85,2,6);

   ellipse(50,100,205,335,20,9);
   ellipse(50,100,205,335,20,10);
   ellipse(50,100,205,335,20,11);

   //area = imagesize(left, top, left + 50, top + 50);
   //p = malloc(area);

   setcolor(WHITE);
      settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
     break;
   //  getch();



    }
else
{
 //cleardevice();
  sound(440);
  delay(80);
  nosound();
  rectangle(190,190,400,290);
settextstyle(0,HORIZ_DIR,2);
outtextxy(200,210,"Message...");
setcolor(RED);
settextstyle(0,HORIZ_DIR,2);
outtextxy(200,240,"SORRY!!!");
outtextxy(200,260,"TRY AGAIN!!");
getch();
goto e;
}

case 4:
exit(0);
break;
case 2:
ptr=fopen("record.txt","r");
if(ptr==NULL)
{
printf("cannot open the file");
exit(0);
}
gotoxy(1,3);
//gotoxy(24,32);
cb=fgetc(ptr);
//gotoxy(20,5);
while(cb!=EOF)
{
printf(" %c",cb);
cb=fgetc(ptr);
}
printf("\n\n");
fclose(ptr);
 rectangle(0,370,600,370);
 rectangle(0,300,600,300);
 rectangle(0,230,600,230); //third
 rectangle(0,100,600,100); //first
 rectangle(0,170,600,170);//second
 rectangle(0,40,600,40); //main sec
 rectangle(0,0,600,450); //main first
 //line(100,50,600,50);
 outtextxy(24,22,"Player");
 outtextxy(310,22," Score");
 break;
case 3:
 rectangle(1,1,600,460);
 rectangle(7,7,593,453);
// gotoxy(25,2);
 settextstyle(0,HORIZ_DIR,2);
 setcolor(WHITE);
 outtextxy(150,23,"\xB2\xB2\xB2\xB2 ABOUT \xB2\xB2\xB2\xB2");
 outtextxy(7,50,"=====================================");
 outtextxy(40,100,"MADE BY........");
 settextstyle(0,HORIZ_DIR,1);
 outtextxy(100,130,"1.AMIT SINGH TOMAR");
 outtextxy(100,150,"2.NEETU SINGH");
 outtextxy(100,170,"3.PRACHI BAISOYA");
 outtextxy(100,190,"4.MADHUSUDAN BANSAL");
 settextstyle(0,HORIZ_DIR,2);
 outtextxy(40,260,"GUIDED BY.......");
 settextstyle(0,HORIZ_DIR,1);
 outtextxy(100,290,"MRS.TANU SINHA ");
 break;
 default:
 rectangle(1,1,600,460);
 rectangle(7,7,593,453);
// gotoxy(25,2);
 settextstyle(0,HORIZ_DIR,2);
 setcolor(WHITE);
 outtextxy(80,23,"\xB2\xB2\xB2\xB2 TIC TAC TOE \xB2\xB2\xB2\xB2");
 outtextxy(7,50,"=====================================");
 rectangle(130,150,340,230);
 settextstyle(0,HORIZ_DIR,2);
 outtextxy(150,160,"Message...");
 setcolor(RED);
 outtextxy(150,205,"INVALID !!!");
 sound(440);
 delay(100);
 nosound();
 break;
}

getch(); //active krna hai ise
//cleardevice();

 cleardevice();
setcolor(WHITE);
  setlinestyle(SOLID_LINE,2,2);
  rectangle(1,1,600,460);
 rectangle(7,7,593,453);
// gotoxy(25,2);
 settextstyle(0,HORIZ_DIR,2);
 setcolor(WHITE);
 outtextxy(80,23,"\xB2\xB2\xB2\xB2 TIC TAC TOE \xB2\xB2\xB2\xB2");

outtextxy(7,50,"=====================================");
settextstyle(0,HORIZ_DIR,3);
outtextxy(55,170,"THANKS !!!!!!");
outtextxy(200,230,"FOR PLAYING");
settextstyle(0,HORIZ_DIR,1.5);
outtextxy(400,400,"MADE BY:");
outtextxy(400,420,"AMIT SINGH TOMAR");
setcolor(YELLOW);

   circle(50,100,25);
   setfillstyle(SOLID_FILL,YELLOW);
   floodfill(50,100,YELLOW);

   setcolor(BLACK);
   setfillstyle(SOLID_FILL,BLACK);
   fillellipse(44,85,2,6);
   fillellipse(56,85,2,6);

   ellipse(50,100,205,335,20,9);
   ellipse(50,100,205,335,20,10);
   ellipse(50,100,205,335,20,11);

   //area = imagesize(left, top, left + 50, top + 50);
   //p = malloc(area);

   setcolor(WHITE);
      settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
      getch();


fflush(stdin);
// cleardevice();


 settextstyle(0,HORIZ_DIR,2);
f:
{
setcolor(BLUE);

outtextxy(55,320,"DO YOU WANT TO CONTINUE(y/n):");
gotoxy(70,21);
//setcolor(RED);
scanf("%c",&ch);
 sound(440);
 delay(100);
 nosound();
if(ch=='y'||ch=='Y')
{
goto e;
}

} }
//remove
getch();
}


