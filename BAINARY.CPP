#include <stdio.h>
#include <conio.h>

void main()
{
   clrscr();
   int n[20];
   int a,b,c,d;
   printf("Input 1 : ");
   scanf("%d",&a);
   printf("Input Number : ");
   for(b=0;b<a;b++) scanf("%d",&n[b]);
   for(b=0;b<a;b++)
   {
	   for(c=a-1;c>a;c--)
	   {
			if(n[b]>n[c])
			{
				d=n[b];
				n[b]=n[c];
				n[c]=d;
			}
	   }
   }

   getch();
}