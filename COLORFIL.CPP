#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <dos.h>
int a;
char bg[30][70]={"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX",
				 "X                                                           X",
				 "X                                                           X",
				 "X                                                           X",
				 "X                                                           X",
				 "X                                                           X",
				 "X                                                           X",
				 "X                                                           X",
				 "X                                                           X",
				 "X                                                           X",
				 "X                                                           X",
				 "X                                                           X",
				 "X                                                           X",
				 "X                                                           X",
				 "X                                                           X",
				 "X                                                           X",
				 "X                                                           X",
				 "X                                                           X",
				 "X                                                           X",
				 "X                                                           X",
				 "X                                                           X",
				 "X                                                           X",
				 "X                                                           X",
				 "X                                                           X",
				 "X                                                           X",
				 "X                                                           X",
				 "X                                                           X",
				 "X                                                           X",
				 "X                                                           X",
				 "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};

void paint(int x,int y){
if(bg[x][y]==' ') {
gotoxy(x+1,y+1);
cprintf("O");
delay(10);
bg[x][y]='X';
paint(x+1,y);
paint(x,y+1);
paint(x-1,y);
paint(x,y-1);
}
}

void main()
{
  clrscr();
  textcolor(1);
  for(a=0;a<30;a++)
  {
		printf("%s\n",bg[a]);
  }
  textcolor(77);
  paint(1,1);
  getch();
}