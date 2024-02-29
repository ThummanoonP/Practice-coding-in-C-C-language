#include "stdio.h"
#include "conio.h"

void main()
{

	clrscr();
	int a[10]={2,3,5,9,8,7,1};
	int b,f=9;
	for(b=0;b<f;b++)
	{
	   if(a[b]==9)
	   {
		  for(e=f-1;e>=0;e--)
		  {
		  if(a[e]==8)
		  {
			 a[e]=6;
			 break();
		  }
		  a[e]=a[e+1];
		  }
	   }
	}
	for(b=0;b<10;b++)
	{
	printf(" %d",a[b]);
	}
	getch();

}