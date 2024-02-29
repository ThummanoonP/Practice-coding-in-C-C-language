#include <stdio.h>
#include <conio.h>

void main()
{
   clrscr();
   int a[1000];
   int b,m,k,r,big,small;
   printf("Input :");
   scanf("%d",&b);
   printf("Input Number \n");
   for(m=0;m<b;m++)
	 {
		scanf("%d",&a[m]);
	 }
   for(m=0;m<b;m++)
	 {
		 for(k=m+1;k<b;k++)
			{
			   if(a[m]>=a[k])
				 {
				   r=a[m];
				   a[m]=a[k];
				   a[k]=r;
				 }
			}
	 }
	printf("Input Smallest :");
	scanf("%d",&small);
	printf("\nSmallest - %d = %d",small,a[small-1]);
	printf("\nInput Biggest :");
	scanf("%d",&big);
	printf("\nBiggest - %d = %d",big,a[b-big]);

   getch();
}