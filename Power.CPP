#include <stdio.h>
#include <conio.h>

#define MAXINT 2147483647

int power(int x, int y)
{
     int i,s=y;
     long long out=1;
     if(y==0) return 1;
     else if(x==0&&y<0) return MAXINT;
     else {
          if(y<0) s=s*(-1);
          for(i=0;i<s;i++){ 
             out=out*x;
             if(out>MAXINT&&y>0) return MAXINT;
             else if(out>MAXINT&&y<0) return 0; 
             }
          if(y<0) return 1/(int)out;
          else  return (int)out;    
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
