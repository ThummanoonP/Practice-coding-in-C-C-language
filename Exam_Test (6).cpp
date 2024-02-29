#include <stdio.h>
#include <conio.h>
#include <Math.h>
#define MAXINT 2147483647



int main()
{
   int x,y;
   printf("x: ");
   scanf("%d", &x);
   printf("y: ");
   scanf("%d", &y);

   printf("power(x,y) = %d\n",pow(x,y));
   getch();
   return 0;
}
