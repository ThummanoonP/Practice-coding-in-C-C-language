#include <stdio.h>
#include <math.h>
#include <conio.h>
#define  SIZE   100

void readxy(int n, float x[], float y[])
{  int i;

   for (i=0;i < n;i++) {
      printf("%d (x,y): ", i);
      scanf("%f %f", &x[i], &y[i]);
   }
}

float distance(float x1, float y1, float x2, float y2)
{  float dist2;

   dist2 =pow((x2-x1),2)+pow((y2-y1),2);
   return sqrt(dist2);
}

float sum_distance(int i, float x, float y)
{      
       int j;
       float sum,x2[SIZE],y2[SIZE];
       x2[i]=x;
       y2[i]=y;
       if(i!=0){
       if(i==1)j=0;  
       else j=sum;       
       sum=j+distance(x2[i-1],y2[i-1],x2[i],y2[i]);
       return sum;
       }
               
}

float x[SIZE],y[SIZE];

int main()
{  int i, n;
   float sum=0;

   printf("Enter n: ");
   scanf("%d",&n);
   readxy(n, x, y);

   for (i=0;i < n;i++)
      sum = sum_distance(i, x[i], y[i]);
   printf("Sum Distances = %f\n", sum);
   getch();
   return 0;
}

