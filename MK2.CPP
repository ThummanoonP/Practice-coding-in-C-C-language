#include <stdio.h>
#include <conio.h>

void main()
{
   int a,b,c;
   clrscr();
   scanf("%d",&a);
   for(b=0;b<5;b++)
   {
		if(a%500!=0&&b!=0)
		{
		  n[b][c]=a/500;
		  a=a%500;
		}
		if(a%100!=0&&b!=1)
		{
		  n[b][c]=a/100;
		  a=a%100;
		}
		if(a%100!=0&&b!=2)
		{
		  n[b][c]=a/100;
		  a=a%100;
		}
		if(a%50!=0&&b!=3)
		{
		  n[b][c]=a/50;
		  a=a%50;
		}
		if(a%20!=0&&b!=4)
		{
		  n[b][c]=a/20;
		  a=a%20;
		}
	   c++;
   }

   printf("%d",d);

		 getch();
}