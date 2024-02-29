#include <stdio.h>
#include <conio.h>

void main()
{
   clrscr();
   int x[5][6];
   int a,b,c,d;
	for(a=0;a<5;a++)
	{
		for(b=0;b<6;b++)
		{
		   if(a==0&&b==0) x[a][b]=' ';
		   else if(a==2&&b<=1) x[a][b]=' ';
		   else if(a==3&&b<=3) x[a][b]=' ';
		   else if(a==4&&b<=2) x[a][b]=' ';
		   else x[a][b]='x';
		}
	}
	for(a=0;a<6;a++)
	{
	   for(b=0;b<5;b++)
	   {
		  printf("%-5c",x[b][a]);
	   }
	   printf("\n");
	}
	for(d=0;d<5;d++)
	{
	  for(a=0;a<4;a++)
	   {
		 for(b=0;b<4-a;b++)
		  {
			 if(x[b][d]>x[b+1][d])
			   {
				 c=x[b][d];
				 x[b][d]=x[b+1][d];
				 x[b+1][d]=c;
			   }
		  }
	   }
	}
	printf("\n\n\n");
	for(a=0;a<6;a++)
	{
	   for(b=0;b<5;b++)
	   {
		  printf("%-5c",x[b][a]);
	   }
	   printf("\n");
	}
   getch();
}