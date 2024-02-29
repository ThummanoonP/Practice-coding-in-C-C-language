#include <stdio.h>
#include <conio.h>

void main()
{
   clrscr();
   int a[5];
   int b,c,d,e,f;
   printf("Input Number : ");
   for(b=0;b<5;b++)
   {
	   scanf("%d",&a[b]);
   }
   for(b=0;b<5;b++)
   {
	 for(c=0;c<b;c++)
	 {
		if(a[c]<a[b])
		{
		   d=a[b];
		   for(e=b;e>c;e--)
		   {
			  a[e]=a[e-1];
		   }
		   d=a[c-1];

		}
	 }
   }
   printf("Output");
   for(b=0;b<5;b++)
   {
	 printf("%d ",a[b]);
   }
   getch();
}