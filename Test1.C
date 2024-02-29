#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int a,b,c,x,y;
   /// clrscr();
    scanf("%d",&a);
    x=a;
    a=pow(2,a)+1;
    for(b=1;b<=a;b++)  {
    for(c=1;c<=a;c++){
      if(b>1&&b<a&&c>1&&c<a)  printf(" ");
      else    printf("*");   }
    printf("\n");
   }
   getch();
    return 0;
}
