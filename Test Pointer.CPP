#include <stdio.h>
#include <conio.h>
#include <stdlib.h>



int main(){
   int n,*Ci;
   scanf("%d",&n);

   Ci = &n;
      printf("%d\n",Ci);
   Ci=Ci+2;
   printf("%d\n",Ci);
  printf("%d",Ci);
   getch();
   return 0;
    
    
    }
