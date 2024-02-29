#include <stdio.h>
#include <conio.h>
#include <string.h>
struct data
{
	long int day;
	long int nday;
	long int lastday;
};
data dat[5000];

void main()
{
   int a,b,c,d=0;
   clrscr();
   scanf("%d",&a);
   for(b=0;b<a;b++) {
   scanf("%ld",&dat[b].day);
   scanf("%ld",&dat[b].nday);
   dat[b].lastday=dat[b].day+dat[b].nday;
   }
   for(b=0;b<a;b++)
   {
		for(c=0;c<a;c++)
		{
		   if(dat[b].lastday>=dat[c].day&&dat[b].day<dat[c].day||dat[b].day==dat[c].day&&dat[b].lastday==dat[c].lastday)
		   break;
		   else if(c==a-1)
		   d++;
		}
   }
   printf("%d",d);
   getch();
}