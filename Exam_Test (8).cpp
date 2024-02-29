#include <stdio.h>
#include <conio.h>
#define MAXINT 2147483647

int power(int x, int y)
{
            for(i=1;i<=y;i++)
            {
                sum=1/sum*x;
            }
   

}

int main()
{
   int x,y;
   printf("x: ");
   scanf("%d", &x);
   printf("y: ");
   scanf("%d", &y);

   printf("power(x,y) = %d\n",power(x,y));
   getch();
   return 0;
}
