
#include <stdio.h>
#include <conio.h>
#define MAXINT 2147483647

int power(int x, int y){
int i,sum=1;

    if(x==0) {
      if(y<0)sum=MAXINT;
      else if(y==0) sum=1;
      else sum=1;
      }
    else if(y<=0){
        if(y==0)
            sum=1;
        else if(y<0){
             y=y*-1;
            for(i=1;i<=y;i++){
                sum=sum*x;
            }
            sum=1/sum;
        }    
    }
    else if(y>0)
        for(i=1;i<=y;i++){
            sum=sum*x;
        }
    return sum;
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
