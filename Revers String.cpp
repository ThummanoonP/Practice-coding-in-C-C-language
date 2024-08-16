#include <stdio.h>
#include <conio.h>
void invert(char str[])
{
    int i,j,m;
    char c[80];
    for(i=0;1==1;i++) if(str[i] == '\0')  break;
    i--;
    for(j=0;j<=i;j++) c[i-j]= str[j]; 
    for(j=0;j<=i;j++) str[j]=c[j]; 
}

int main()
{  char str[80];
   int i,cnt=0;
   printf(" Input: ");
   scanf("%[^\n]",str);
   invert(str);
   printf("Output: %s\n",str);
   getch();
   return 0;
}
