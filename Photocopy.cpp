/*
LANG: C++
*/
#include<stdio.h>
#include<conio.h>
#define arraySize 100000

typedef struct{
   int t;
   int w;
   double x; 
}Data;

/* เป็นฟังค์ชั่นที่ใช้ในการเรียงลำดับของค่าw/tโดยเรียงจากมากไปหาน้อย */
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

       while(arr[piv].x>=arr[right].x&&piv!=right)       
           right=right-1;
       if(piv==right)                               
           pivot=1;
       if(arr[piv].x<arr[right].x){                     
           temp=arr[piv];
           arr[piv]=arr[right];
           arr[right]=temp;
           piv=right;
       }      
       
       while(arr[piv].x<=arr[left].x&&left!=piv)         
           left=left+1;
       if(piv==left)                                 
           pivot=1;
       if(arr[piv].x>arr[left].x){                       
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
  long long n,i,ci=0,cw,sum=0;
  scanf("%lld",&n);
  for (i=0; i <  n; i++) {
       scanf("%d %d", &arr[i].t,&arr[i].w);
       arr[i].x=(arr[i].w*1.0)/(arr[i].t*1.0);
     }
  quicksort(arr,0,n-1);  
  /*ส่วนที่คำนวนหาค่าจากสูตรC1w1 + C2w2 + ... + Cnwnโดยที่ Cj = tjและCi = Cj + ti = tj + tiที่ให้ไว้ในโจทย์*/
  for(i=0;i<n;i++){
      ci=ci+arr[i].t;
      cw=(arr[i].w)*ci;
      sum=sum+cw;            
  }
  printf("%lld",sum);
  return 0;
}
