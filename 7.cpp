#include <stdio.h>
#include <conio.h>

int main()
{ 
   int i,j,size;
   printf("Input size : ");
   scanf("%d",&size); 
   for(i=0;i<size;i++){
        for(j=0;j<size;j++){
           if(j==i||j==size-i)printf("#");           
           else     printf(" ");               
        }  printf("\n");             
   } 
   getch();
   return 0; 
}
