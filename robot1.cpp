/*
LANG: C++
TASK: Robot
*/
#include <stdio.h>

int robot[10001],emp[10001],ans[10001];
int n;
int max(int a,int b){
    if(a>b)
    return a;
    else
    return b;
}
int min(int a,int b){
    if(a<b)
    return a;
    else
    return b;
}
//solutiom to find maximum amount of Robot killed by EMP gun//
int kill(int n){
    int i,j,k;
    //if time n=0 number of kills equal zero//
    ans[0]=0;
    //if time n=1 number of kills equal min function//
    ans[1]=min(robot[1],emp[1]);
    //else time n>=2//
    for(i=2;i<=n;i++)
    {
                     ans[i]=min(robot[i],emp[i]);
                     for(j=0,k=i;j<=n,k>=1;j++,k--)
                                                   ans[i]=max(ans[i],ans[j]+min(robot[i],emp[k]));
    }
    return ans[n];                 
}
int main()
{
      int i;
      //input time second//
      scanf("%d",&n);
      //input amount of Robot and EMP damaged power (charged) in each second//
      for(i=1;i<=n;i++)
                       scanf("%d %d",&robot[i],&emp[i]);
      printf("%d",kill(n));
      getchar();
      getchar();
      return 0;
}
