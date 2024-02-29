#include <stdio.h>
#include <conio.h>
#define MAXINT 2147483647

int power(int x, int y)
{
     int i;
     long long  out;
     out=x;
     if(y==0) return 1;
     else if(x==0&&y<0) return MAXINT;
     else{
        if(y<0){ 
           y=y*(-1);
             for(i=1;i<y;i++) {
             out=out*x;
             }
             return 1/(int)out;
        }
        else {
              for(i=1;i<y;i++){
              out=out*x;
              if(out>MAXINT) return MAXINT;
              }
              return (int)out;
        } 
     }     
}

int main()
{
   int x,y;

   printf("x: ");
   scanf("%d", &x);
   printf("y: ");
   scanf("%d", &y);

   printf("power(%d,%d) = %d" ,x,y,power(x,y));
   getch();
   return 0;
}
