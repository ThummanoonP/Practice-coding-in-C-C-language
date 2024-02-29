#include <stdio.h>
#include <conio.h>

void main()
{
   int num,a,matrix[100][100];
   clrscr();
   scanf("%d",&num);
   for(a=0;a<num;a++)
   {
	  for(b=0;b<2;b++)
	  {
		 scanf("%d",&matrix[a][b]);
	  }
   }
   getch();
}