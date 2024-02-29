#include <stdio.h>
#include <conio.h>
#include <string.h>
struct data
{
	int id;
	char name[8],lname[8];
};
data dat[5];

void main()
{
   int a,b,c;
   clrscr();
   dat[0].id=2001;
   strcpy(dat[0].name, "Somsak");
   strcpy(dat[0].lname, "Jaidee");
   dat[1].id=2008;
   strcpy(dat[1].name, "Somchai");
   strcpy(dat[1].lname, "Suukmak");
   dat[2].id=1003;
   strcpy(dat[2].name, "Decha");
   strcpy(dat[2].lname, "Thanee");
   dat[3].id=1008;
   strcpy(dat[3].name, "Somsak");
   strcpy(dat[3].lname, "Saelee");
   for(a=0;a<4;a++) printf("%-8d %-8s %s\n",dat[a].id,dat[a].name,dat[a].lname);
   printf("\n\n");
   for(a=0;a<4;a++)
   {
	   for(b=3;b>a;b--)
	   {
		   if(strcmp(dat[a].name,dat[b].name)==0)
		   {
			  if(strcmp(dat[a].lname,dat[b].lname)>0)
			  {
			  dat[4]=dat[a];
			  dat[a]=dat[b];
			  dat[b]=dat[4];
			  }
		   }
		   else if(strcmp(dat[a].name,dat[b].name)>0)
			  {
			  dat[4]=dat[a];
			  dat[a]=dat[b];
			  dat[b]=dat[4];
			  }

	   }
   }
   for(a=0;a<4;a++) printf("%-8d %-8s %s\n",dat[a].id,dat[a].name,dat[a].lname);
   getch();
}