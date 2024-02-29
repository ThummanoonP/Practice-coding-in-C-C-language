#include <stdio.h>
#include <conio.h>

long long stack_data[5000],x,count=0;
int top=0;

int main(){
    int n,i,j;
    long long d=100000000000000LL;
    scanf("%d",&n);
    stack_data[top]=1;
    for(i=1;i<=n;i++){
      for(j=0;j<=top;j++){ 
                if(j==0) {           
                x=stack_data[j]*i;
                stack_data[j]=x%d; 
                if(x/d>0) count=x/d;           
                else count=0;
                }
                else {           
                x=(stack_data[j]*i)+count;
                stack_data[j]=x%d; 
                if(x/d>0) count=x/d;           
                else count=0;
                }
      }
       if(count>0){
       top++;
       stack_data[top]=count;
       }
    }
    printf("%I64d",stack_data[top]);
    for(i=top-1;i>=0;i--) printf("%014I64d",stack_data[i]);               
    getch();
}
