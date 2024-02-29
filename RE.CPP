#include <stdio.h>
#include <conio.h>

void binary(int);

const max=3;
char st[max+1];

void main()
{
   clrscr();
   st[max]=0;
   binary(0);
   getch();
}

void binary(int level)
{
	if(level==max) printf("%s\n",st);
	else
	{
	  st[level]='0';
	  binary(level+1);
	  st[level]='1';
	  binary(level+1);
	  st[level]='2';
	  binary(level+1);
	  st[level]='3';
	  binary(level+1);
	}
}

