#include <stdio.h>
#include <conio.h>
#define MAXINT 2147483647

int power(int x, int y){
int i,sum=1;

    if(y==0)
            sum=1;
    else if(y<0){
            if(x==0) sum=MAXINT;
            else{ 
                  y=-y;
                  if(x==-1){
                     for(i=1;i<=y;i++){
                       sum=sum*x;
                     }
                  }   
                  else if(x>1||x<-1)
                     sum=0;
                  else if(x==1)
                     sum=1;
            }
        }    
    else if(y>0){
        for(i=1;i<=y;i++){
            sum=sum*x;
        }
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
