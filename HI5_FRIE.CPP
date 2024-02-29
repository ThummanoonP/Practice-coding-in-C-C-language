#include <stdio.h>
#include <conio.h>
#include <string.h>

struct data
{
	char name1[8];
	char name2[8];
};
data dat[20];

int main()
{
   int a,b,c,e=0;
   for(a=0;a<1;a++)
   {
	 scanf("%s",dat[a].name1);
	 b=strlen(dat[a].name1);
	  for(c=0;c<b;c++)
	  {
		 if(dat[a].name1[c]=='-')
		   {
			  dat[a].name1[c]=0;
			  dat[a].name1[c+1]=0;
			  for(int d=c+2;d<b;d++)
			  {
				 dat[a].name2[e]=dat[a].name1[d];
				 dat[a].name1[d]=0;
				 e++;
			  }
		   }
	  }
   }

//   printf("%s \n%s",dat[0].name1,dat[0].name2);
   getch();
   return 0;
}
