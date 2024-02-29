#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

typedef struct{
        int di;
        int ci;
} worm;

/*worm  *array012(int n)
{
   worm *a; 	  
   a = (worm *)malloc(sizeof(worm )*n);
   if (a == NULL)
     exit(1);
   return a;
}*/

int main(){
   int n,i,j,o;
   worm w[10000],x;
   float SDi=0,Msdi=0;
   scanf("%d",&n);
  // w=array012(n);
   for(i=0;i<n;i++) scanf("%d %d",&w[i].di,&w[i].ci);
   for(i=0;i<=n;i++){
      for(j=i+1;j<=n;j++){
             if(w[i].ci<w[j].ci)
               x=w[i];
               w[i]=w[j];
               w[j]=x;             
         }              
   }
   for(i=0;i<n;i++) printf("%d %d\n",w[i].di,w[i].ci);
   for(i=0;i<n;i++){   
          SDi=SDi+w[i].di;
          if((w[i].ci*1.0/SDi)>Msdi){
          o=i; 
          Msdi=SDi;   
          }
          }
   printf("%.0f %d",Msdi,w[o].ci);      
   getch();
   return 0;
    
    
    }
