#include "stdio.h"
#include "conio.h"

void main()
{
	clrscr();
	int a[14]={2,3,5,9,8,7,1,9,8,9,9};
	int b,f=12,e;
	for(b=f;b>=0;b--)
	{
		 if(a[b]==9)
		 {
			for(e=f;e>=b;e--)
			{
			  if(a[e+1]==8&&a[e]==9){
				 a[e+1]=6;
				 break;
			   }
			   a[e+1]=a[e];
			}
		  }
	}
	for(b=0;b<12;b++)
	{
	printf(" %d",a[b]);
	}
	getch();

}