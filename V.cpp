#include <stdio.h>
#include <conio.h>

int main()
{ 
   int i,j,size;
   printf("Input size : ");
   scanf("%d",&size); 
   for(i=0;i<=size*2;i++){
        for(j=1;j<=size*2;j++){
            if(j>(size-i)&&j<(size*2)-(size-i)&&j>(i-size)&&j<(size*2)-(i-size)) printf(" ");
            else printf("#");                      
        }  printf("\n");             
   } 
   getch();
   return 0; 
}
