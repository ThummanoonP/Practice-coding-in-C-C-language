#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <dos.h>
int a,s=0;
char bg[20][70]={
"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX",
"                                        PX",
"X XXXXXXXXXXXXXXXXXXXX XXXXXXXXXXXXXXXXXXX",
"X   X PXXX       XPXX  X  X        X     X",
"X X X XXX  XX  X   XX XX  X XX X X X  XXPX",
"X X X XX  X  X  X  XX X  XX XX X X X X XXX",
"X XXX X  X    X  X X  X  XX X  X X X X  PX",
"X          XP  X            X    X     XXX",
"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};

void paint(int x,int y)
{
	if(bg[y][x]==' '||bg[y][x]=='P')
	  {
		 gotoxy(x+1,y+1);
		 if(bg[y][x]=='P')
			{
			   s++;
			}
		 cprintf(",");
		 delay(60);
		 bg[y][x]='X';
		 paint(x+1,y);
		 paint(x,y+1);
		 paint(x-1,y);
		 paint(x,y-1);
		 if(s<6)
			{
			  gotoxy(x+1,y+1);
			  cprintf(" ");
			}
	  }
}

void main()
{
  clrscr();
  textcolor(7);
  for(a=0;a<15;a++)
	  {
		printf("%s \n",bg[a]);
	  }
  textcolor(7);
  paint(1,1);
  getch();
}