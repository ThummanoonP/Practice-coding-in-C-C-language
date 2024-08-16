/*
LANG: C
*/
#include<stdio.h>
#include <conio.h>
#define arraySize 100000

typedef struct{
   long long v;
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

       while(arr[piv].w<=arr[right].w&&piv!=right)       
           right=right-1;
       if(piv==right)                               
           pivot=1;
       if(arr[piv].w>arr[right].w){                     
           temp=arr[piv];
           arr[piv]=arr[right];
           arr[right]=temp;
           piv=right;
       }      
       
       while(arr[piv].w>=arr[left].w&&left!=piv)         
           left=left+1;
       if(piv==left)                                 
           pivot=1;
       if(arr[piv].w<arr[left].w){                       
           temp=arr[piv];
           arr[piv]=arr[left];
           arr[left]=temp;
           piv=left;
       } 
     } 
     quicksort(arr,low,piv-1);                        
     quicksort(arr,piv+1,up);                        
}

int main() {
  Data arr[arraySize];
  long long n,i,j,max_v,max_w,sum_vmax=0,sum_wmax=0,sum_v,sum_w;
  scanf("%lld",&n);
  scanf("%lld",&max_w);
  scanf("%lld",&max_v);
  for (i=0; i <  n; i++) 
     scanf("%lld %lld", &arr[i].v,&arr[i].w);
  quicksort(arr,0,n-1);  
  for(i=0;i<n;i++){
        j=i+1;
        sum_w=arr[i].w;
        sum_v=arr[i].v;
      while(sum_w<max_w&&j<n-1){
           sum_w=sum_w+arr[j].w;
           sum_v=sum_v+arr[j].v;
           j++;
      }
      if(sum_w>max_w)
         sum_v=sum_v-arr[j].v;
      if(sum_v>sum_vmax)
         sum_vmax=sum_v;
         
  }
  if(sum_vmax>max_v)
    printf("YES\n");
  else printf("NO\n");
  printf("%lld",sum_vmax);
  getch();
  return 0;
}
