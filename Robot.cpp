/*
LANG: C++
*/

#include <stdio.h>
#define arraySize 100001
int robot[arraySize],charge[arraySize],kill_all[arraySize];

int max(int x,int y){
    if(x<y) return y;
    return x;
}

int min(int x,int y){
    if(x>y) return y;
    return x;
}   

int main() {
    int n,i,j,x;
    scanf("%d",&n);
        for (i=1; i <= n; i++) 
           scanf("%d %d",&robot[i],&charge[i]);
    /*กำหนดให้ kill_allครั้งที่0และครั้งที่1ให้เท่ากับ0และ1ตามลำดับ*/
    kill_all[0]=0;
    kill_all[1]=1;        
    for(i=2;i<=n;i++){
             /*คำนวนว่าเราทำลายหุ่นไปกี่ตัวในครั้งนี้*/
             kill_all[i]=min(robot[i],charge[i]);
             x=i;
        for(j=0;j<=n;j++){
              if(x>=1){
              /*คำนวนผลรวมของการทำลายหุ่น*/
              kill_all[i]=max(kill_all[i],kill_all[j]+min(robot[i],charge[x]));
              x--;
              }         
        }         
    } 
    printf("%d",kill_all[n]);
    return 0;
}
