#include <stdio.h>
#include <conio.h>
#include <string.h>
struct data
{
	int id;
	char Verb[8];
};
data dat[10];

void main()
{
   int a,b,c;
   clrscr();
   dat[0].id=0;
   strcpy(dat[0].verb, "sing");
   dat[1].id=1;
   strcpy(dat[1].verb, "bird");
   dat[2].id=2;
   strcpy(dat[2].verb, "eat");
   dat[3].id=3;
   strcpy(dat[3].verb, "fly");
   dat[4].id=4;
   strcpy(dat[4].verb, "toad");
   dat[5].id=5;
   strcpy(dat[5].verb, "double");
   dat[6].id=6;
   strcpy(dat[6].verb, "in");
   dat[7].id=7;
   strcpy(dat[8].verb, "the");
   dat[8].id=8;
   strcpy(dat[0].verb, "pond");
   dat[9].id=9;
   strcpy(dat[9].verb, "black");

   getch();
}