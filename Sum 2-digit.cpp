#include<stdio.h>
#include<conio.h>

int main (){
int n,sum=0;

  printf("Please enter: ");
       scanf("%d",&n);
do {
if(n>9&&n<100||n<(-9)&&n>(-100)) sum=sum+n;
       
       printf("Please enter: ");
       scanf("%d",&n);
       
   } while(n!=-1);
   printf("Sum 2-digit = %d",sum); 
   getch();    
   return 0;    
}
