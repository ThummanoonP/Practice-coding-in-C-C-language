#include <stdio.h>
#include <conio.h>
#include <string.h>
struct data
{
	long int gammy;
	long int rs;
	int n;
};
data dat[5000];

void main()
{
   long int a,b,c,d,e;
   clrscr();
   scanf("%ld",&a);
   for(b=0;b<a;b++)
	scanf("%ld",&dat[b].gammy);
   for(b=0;b<a;b++) {
	scanf("%ld",&dat[b].rs);
	dat[b].n=b+1;
	}
 /*  for(b=0;b<a;b++)
	printf("Gammy %d = %d \nRS %d = %d \n",b+1,dat[b].gammy,b+1,dat[b].rs);*/
	for(b=a-1;b>0;b--)
	  {
		for(c=0 ;c<a;c++)
		{
		   if(dat[b].gammy>dat[c].rs)
		   {
			  d=dat[b].rs;
			  dat[b].rs=dat[c].rs;
			  dat[c].rs=d;
			  e=dat[b].n;
			  dat[b].n=dat[c].n;
			  dat[c].n=e;
		   } else if(dat[b].gammy<dat[c].rs)
		   {
			  d=dat[b].rs;
			  dat[b].rs=dat[c].rs;
			  dat[c].rs=d;
			  e=dat[b].n;
			  dat[b].n=dat[c].n;
			  dat[c].n=e;
			}
		 }
	 }
	for(b=0;b<a;b++)
	printf("%d ",dat[b].n);
/*	for(b=0;b<a;b++)
	{
		for(c=)
	}*/
		 getch();
}