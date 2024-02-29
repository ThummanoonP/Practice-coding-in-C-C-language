#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
//   clrscr();
   char g[600],n[3][3];
   int a,u,b=0,c=0,d=0;
   printf("Enter string : ");
   scanf("%s",g);
   u=strlen(g);
   for(a=0;a<u;a++)
   {
	  if(g[a]>='a'&&g[a]<='z')
	   {
		 n[0][c]=g[a];
		 c++;
	   }
	  else if(g[a]>='A'&&g[a]<='Z')
	   {
		 n[1][b]=g[a];
		 b++;
	   }
	   else if(g[a]>='0'&&g[a]<='9')
	   {
		 n[2][d]=g[a];
		 d++;
	   }
   }
	 printf("\nThe Uppercase Character            : %s",n[1]);
	 printf("\nThe Lowwercase Character           : %s",n[0]);
	 printf("\nThe Number                         : %s",n[2]);
	 printf("\nThe Number Of Uppercase Character  : %d",b);
	 printf("\nThe Number Of Lowwercase Character : %d",c);
	 printf("\nThe Number Of Number               : %d",d);
   getch();
   return 0;
}
