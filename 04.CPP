#include "stdio.h"
#include "conio.h"

void main()
{

	clrscr();
	int number[9]={10,13,18,25,8,9,3,2,1};
	int n,x=0,p=0;
	int d[5],f[5];
	for (n=0;n<=9;n++)
	  {
		 for(x=0;x<9-n-1;x++)
		   {
			 if(number[x]>number[x+1])
				{
					p=number[x];
					number[x]=number[x+1];
					number[x+1]=p;
				}
		   }
	 }
	for(n=0;n<=9;n++)
	{
	  if(number[n]%2==0)
	  {
		 d[x]=number[n];
		 x++;
	  }
	  else
	  {
		  f[p]=number[n];
		  p++;
	  }
	}
	printf("Odd Number");
	for(n=0;n<x;n++) printf("%d",d[n]);
	printf("Even Number");
	for(n=0;n<p;n++) printf("%d",f[n]);
	getch();

}