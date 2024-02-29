#include<stdio.h>
#include<conio.h>
int check[5];
int dat[5]={500,100,100,50,20};
int type[5];
int n,sum;

void ck(int in){
  if(sum == n){
    printf("CR=%d, MK=%d, SW=%d, SH=%d, MU=%d\n",check[0],check[1],check[2],check[3],check[4]);
  }
  if(sum < n)
    for(int i=in;i<5;i++){
      check[i]++;
      sum+=dat[i];
      ck(i);
      sum-=dat[i];
      check[i]--;
    }
}
int main(){
    scanf("%d",&n);
    for(int i=0;i<5;i++){
      check[i]++;
      sum+=dat[i];
      ck(i);
      sum-=dat[i];
      check[i]--;
    }
    getch();
    return 0;
}
