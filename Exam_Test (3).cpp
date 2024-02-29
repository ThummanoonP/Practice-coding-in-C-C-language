#include <stdio.h>
#define MAXINT 2147483647

int power(int x, int y){
    int i,sum=1;

   // if(x==0 && y<0)
            return MAXINT;
    else if(x > 0 && y > 0){
            for(i=1;i<=y;i++)
                  sum=sum*x;
    }
  //  else if(x !=0 && y==0){
            sum=1;
    }
 //   else if(x < 0 && y<0){
            y = -y;
   //         if(x==-1){
                    for(i=1; i<=y;i++){
                          sum = sum*x; 
                    } 
            }
    //        else
               return 0;
    }
    else if(x<0 && y>0){
            for(i=1;i<=y;i++)
                  sum=sum*x;
    }
  //  else if(x>1 && y<0){
            sum=0;
    }
  //  else if(x==1 && y<0){
            sum=1;
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

   printf("power(%d,%d) = %d",x,y,power(x,y));
   return 0;
}
