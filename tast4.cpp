#include <stdio.h>
#include<conio.h>

main ()
{ 
   int a,b,c;

     printf("Enter size: ");
     scanf("%d",&a);
     for(b=a;b>=1;b--)
     {
             for(c=1;c<=a;c++)
                {         
                  if(c<b) printf(" ");  
                  else printf("x");             
                 }     
      printf("\n");                   
     }   
          for(b=1;b<a;b++)
     {
             for(c=1;c<a;c++)
                {  
                if(c<b) printf(" ");  
                  else printf("x");        
                }     
      printf("\n");                   
     }            
     getch();
   return 0;
}
