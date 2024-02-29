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
    /*��˹���� kill_all���駷��0��Ф��駷��1�����ҡѺ0���1����ӴѺ*/
    kill_all[0]=0;
    kill_all[1]=1;        
    for(i=2;i<=n;i++){
             /*�ӹǹ�����ҷ�������仡����㹤��駹��*/
             kill_all[i]=min(robot[i],charge[i]);
             x=i;
        for(j=0;j<=n;j++){
              if(x>=1){
              /*�ӹǹ������ͧ��÷�������*/
              kill_all[i]=max(kill_all[i],kill_all[j]+min(robot[i],charge[x]));
              x--;
              }         
        }         
    } 
    printf("%d",kill_all[n]);
    return 0;
}
