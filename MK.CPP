#include <stdio.h>
#include <conio.h>
#include <string.h>
struct data
{
	int kcr,n;
	char item[2];
};
data dat[5];

void main()
{
   int a,b,c;
   clrscr();
   dat[0].kcr=500;
   strcpy(dat[0].item, "CR");
   dat[1].kcr=100;
   strcpy(dat[1].item, "MK");
   dat[2].kcr=100;
   strcpy(dat[2].item, "SW");
   dat[3].kcr=50;
   strcpy(dat[3].item, "SH");
   dat[4].kcr=20;
   strcpy(dat[4].item, "MU");
   scanf("%d",&a);


		 getch();
}