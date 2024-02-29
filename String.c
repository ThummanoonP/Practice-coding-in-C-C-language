#include <stdio.h>
#include <string.h>
#include <conio.h>

int main()
{  char str[40];
   int i,cnt=0;

   printf("String: ");
   fgets(str,40,stdin);
   strcpy(str,strupr(str));
   for(i=0;i<40;i++)
   {
        if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')    cnt++;                                                                         
   }

 printf ("This string contains %d .",cnt);
 getch();
  return 0;
}
