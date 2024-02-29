#include "stdio.h"
#include "conio.h"

void main()
{

	clrscr();
	int a[8]={10,7,5,2,3,2,5,4};
	int b,d=0,e=0;

  for(b=0;b<8;b++)
	{
	for(int c=b+1;c<8;c++)
	 {

	   if (a[b]==a[c])
		 {
		   d=a[b]+a[c];
		   e=d+e;
		 }
	 }
	}
	printf(" %d",e);
	getch();

}