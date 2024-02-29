/*
LANG: C++
*/
#include <stdio.h>
#include<conio.h>

int n,price[100000],max_price=0;

int max_p(int left,int right){
     int i,Min=99999,Max=0;
          
     if((right-left)<=0)
        return 0;
     else{
     max_p(left,(left-right)/2);     
    // max_p((left-right)/2,right);
     for(i=left;i<=(left-right)/2;i++)  
         if(price[i]<Min)
             Min=price[i]; 

     for(i=((left-right)/2)+1;i<=right;i++)  
         if(price[i]<Max)
             Max=price[i]; 
             
     if((Max-Min)>max_price)
        max_price=Max-Min;        
     }
}

int main(){
    int i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&price[i]);
    max_p(0,n-1);
    printf("%d\n",max_price);   
    getch();  
}
