#include <stdio.h>
#include <conio.h>
#include <string.h>
struct data
{
	int id,n;
	char name[8];
};
data dat[5];

void main()
{
   int a,b,c=-1,d[60],f=0;
   clrscr();
   dat[0].id=70;
   strcpy(dat[0].name, "Shoes");
   dat[1].id=120;
   strcpy(dat[1].name, "Shirt");
   dat[2].id=19;
   strcpy(dat[2].name, "Book");
   dat[3].id=7;
   strcpy(dat[3].name, "Pen");
   dat[4].id=3;
   strcpy(dat[4].name, "Pencil");
   for(a=0;a<5;a++) printf("%-8s - %d\n" ,dat[a].name,dat[a].id);
   printf("Input Number : ");
   scanf("%d",&a);
   for(b=0;b<5;b++)
   {
	  if(a==dat[b].id)
		 c=b;
   }
   printf("%-8s - ",dat[c].name);

   if(a/100>0)
   {
	  d[f]=a/100;
	  for(b=0;b<d[f];b++) printf("C");
	  f++;
	  a=a%100;
   }
   if(a/90>0)
   {
	  d[f]=a/90;
	  for(b=0;b<d[f];b++) printf("XC");
	  f++;
	  a=a%90;
   }
   if(a/50>0)
   {
	  d[f]=a/50;
	  for(b=0;b<d[f];b++) printf("L");
	  f++;
	  a=a%50;
   }
   if(a/40>0)
   {
	  d[f]=a/40;
	  for(b=0;b<d[f];b++) printf("XL");
	  f++;
	  a=a%40;
   }
   if(a/10>0)
   {
	  d[f]=a/10;
	  for(b=0;b<d[f];b++) printf("X");
	  f++;
	  a=a%10;
   }
   if(a/9>0)
   {
	  d[f]=a/9;
	  for(b=0;b<d[f];b++) printf("IX");
	  f++;
	  a=a%9;
   }
   if(a/5>0)
   {
	  d[f]=a/5;
	  for(b=0;b<d[f];b++) printf("V");
	  f++;
	  a=a%5;
   }
   if(a/4>0)
   {
	  d[f]=a/4;
	  for(b=0;b<d[f];b++) printf("IV");
	  f++;
	  a=a%4;
   }
   if(a/1>0)
   {
	  d[f]=a/1;
	  for(b=0;b<d[f];b++) printf("I");
	  f++;
	  a=a%1;
   }
	getch();
}