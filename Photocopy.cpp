/*
LANG: C
*/
#include<stdio.h>
#include <conio.h>
#define arraySize 100000

typedef struct{
   long long t;
   long long w;
}Data;

void quicksort(Data arr[],int low,int up){ 
     int piv,left,right;
     Data temp;
     int pivot=0; 
     left=low; 
     right=up; 
     piv=low; 
     if(low>=up)                                     
       return;
     while(pivot==0){                                  

       while(arr[piv].t<=arr[right].t&&piv!=right)       
           right=right-1;
       if(piv==right)                               
           pivot=1;
       if(arr[piv].t>arr[right].t){                     
           temp=arr[piv];
           arr[piv]=arr[right];
           arr[right]=temp;
           piv=right;
       }      
       
       while(arr[piv].t>=arr[left].t&&left!=piv)         
           left=left+1;
       if(piv==left)                                 
           pivot=1;
       if(arr[piv].t<arr[left].t){                       
           temp=arr[piv];
           arr[piv]=arr[left];
           arr[left]=temp;
           piv=left;
       } 
     } 
     quicksort(arr,low,piv-1);                        
     quicksort(arr,piv+1,up);                        
}

void quicksort2(Data arr[],int low,int up){ 
     int piv,left,right;
     Data temp;
     int pivot=0; 
     left=low; 
     right=up; 
     piv=low; 
     if(low>=up)                                     
       return;
     while(pivot==0){                                  

       while(arr[piv].w<=arr[right].w&&piv!=right||arr[piv].t!=arr[right].t)       
           right=right-1;
       if(piv==right)                               
           pivot=1;
       if(arr[piv].w>arr[right].w&&arr[piv].t!=arr[right].t){                     
           temp=arr[piv];
           arr[piv]=arr[right];
           arr[right]=temp;
           piv=right;
       }      
       
       while(arr[piv].w>=arr[left].w&&left!=piv||arr[piv].t!=arr[left].t)         
           left=left+1;
       if(piv==left)                                 
           pivot=1;
       if(arr[piv].w<arr[left].w&&arr[piv].t!=arr[left].t){                       
           temp=arr[piv];
           arr[piv]=arr[left];
           arr[left]=temp;
           piv=left;
       } 
     } 
     quicksort2(arr,low,piv-1);                        
     quicksort2(arr,piv+1,up);                        
}

int main() {
  Data arr[arraySize];
  long long n,i,ci=0,cw,sum=0;
  scanf("%lld",&n);
  for (i=0; i <  n; i++) {
       scanf("%lld %lld", &arr[i].t,&arr[i].w);
     }
  quicksort(arr,0,n-1);  
  quicksort2(arr,0,n-1); 
  for(i=0;i<n;i++){
      ci=ci+arr[i].t;
      cw=(arr[i].w)*ci;
      sum=sum+cw;            
  }
  printf("%lld",sum);
  getch();
  return 0;
}
