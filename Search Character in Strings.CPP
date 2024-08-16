#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
   //clrscr();
   char a[128],p;
   int n,l,con=0,m[50],j=0;
   printf("Enter string : ");
   scanf("%s",a);
   printf("Enter acharacter : ");
   scanf("%c",&p);
   n=strlen(a);
   for(l=0;l<n;l++)
   {
	  if(a[l]==p)
	  {
		 con++;
		 m[j++]=l;
	  }
   }
   printf("\nFound charrac %c = %d",p,con);
   printf("\nin the position = ");
   for(l=0;l<j;l++) printf("%d ",m[l]);
   getch();
   return 0;
}
