#include <stdio.h>
#include <conio.h>
#include <string.h>
struct data
{
	int No;
	int con;
	char name[8];
};
data dat[5];

void main()
{
   int s[40]={1,4,2,4,3,2,3,1,3,1,2,3,1,2,1,1,4,3,2,4,4,3,2,1,1,1,2,2,3,3,4,4,4,4,1,2,3,4,4,2};
   int a,b,c;
   clrscr();
   dat[0].No=1;
   strcpy(dat[0].name, "Somsak");
   dat[1].No=2;
   strcpy(dat[1].name, "Somchai");
   dat[2].No=3;
   strcpy(dat[2].name, "Decha");
   dat[3].No=4;
   strcpy(dat[3].name, "Pornchai");
   for(a=0;a<4;a++) dat[a].con=0;
   for(a=0;a<4;a++)
   {
	  for(b=0;b<40;b++)
	  {
		  if(dat[a].No==s[b])
		  dat[a].con++;
	  }
   }
   for(a=0;a<4;a++)
   {
	   for(b=3;b>a;b--)
	   {
			if((dat[a].con)<(dat[b].con))
			{
			  dat[4]=dat[a];
			  dat[a]=dat[b];
			  dat[b]=dat[4];
			}
	   }
   }
   printf("No   Name        Sc\n\n");
   for(a=0;a<4;a++) printf("%-4d %-9s%5d\n",dat[a].No,dat[a].name,dat[a].con);
   getch();
}