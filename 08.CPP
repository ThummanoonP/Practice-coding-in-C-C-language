#include <stdio.h>
#include <conio.h>

void main()
{
   clrscr();
   char s[]="xxxxyyyyaaabbbmmdddccccc";
   char c;
   int a,b;
   for(a=0;a<24;a++)
   {
	  for(b=23;b>a;b--)
	  {
		 if(s[a]>s[b])
			{
			  c=s[a];
			  s[a]=s[b];
			  s[b]=c;
			}
	  }
  }
	 printf("%s",s);
   getch();
}