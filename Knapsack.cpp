/*
LANG: C
*/
#include<stdio.h>
#define arraySize 100001

typedef struct{
   int v;
   int w;
}Data;

/* ใช้หาค่าmax */ 
int max(int x,int y){
    if(x<y) return y;
    return x;
}



int main() {
  Data arr[arraySize];
  int n,z,i,j,max_v,max_w,m[101][10001];
  scanf("%d",&n);
  scanf("%d",&max_w);
  scanf("%d",&max_v);
  for (i=0; i <  n; i++) 
     scanf("%d %d", &arr[i].v,&arr[i].w); 
  
  for(i=0;i<=max_w;i++){
      m[0][i]=0 ;            
  }
  /* ส่วนนี้ใช้คำนวนหาราคาของสินค้าน้ำหนักต่างๆแล้วเก็บไว้ที่อาเรย์ */
  for(i=1;i<=n;i++){
     for(z=0;z<=max_w;z++){
          if(arr[i-1].w>z)
             m[i][z]=m[i-1][z];
          else 
             m[i][z]=max(m[i-1][z],arr[i-1].v+m[i-1][z - (arr[i-1].w)]);
     }              
  }
  if(m[n][max_w]>=max_v)
    printf("YES\n");
  else printf("NO\n");
  printf("%d",m[n][max_w]);
  return 0;
}
