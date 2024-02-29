/*
LANG: C++
*/
#include <stdio.h>

int n,price[100000],max_price=0;

int main(){
    int i,x;
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&price[i]);
    i=0; 
    x=i; 
    while(x<n){
        x=x+1;
        if((price[x]-price[i])<0)// ตรวจสอบว่าค่าที่อยู่ก่อนหน้ามากกว่าหรือไม่
         i=x;
        else {
            if((price[x]-price[i])>max_price) // ตรวจสอบว่าค่ากำไรที่ได้สูงสุดหรือป่าว
            max_price=price[x]-price[i];   // เก็บค่าถ้ามันมากกว่า
        }        
    }
    printf("%d\n",max_price);    
}
