#include<stdio.h>
#include<conio.h>


int main (){
int a,n=1;
  printf("Enter a positive integer: ");
  scanf("%d",&a);
  printf("Factor(s): ");
  while(n<=a){
       if(a%n==0) printf("%d ",n);
       n++;   
   }   
   getch();    
   return 0;    
}
