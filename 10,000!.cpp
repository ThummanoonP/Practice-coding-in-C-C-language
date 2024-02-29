#include <stdio.h>

long long stack_data[3000]={1},limit=100000000000000LL,x,carry;

long long Xtreme(int n,int top){
  if(top==0) { 
        x=stack_data[top]*n; 
        stack_data[top]=x%limit;
        return x/limit;          
  }
  else { 
        x=(stack_data[top]*n)+Xtreme(n,top-1);
        stack_data[top]=x%limit;
        return x/limit;          
  }     
}

int main(){
    int n,i,top=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){           
       carry=Xtreme(i,top);
       if(carry>0) stack_data[++top]=carry;
    }
    printf("%I64d",stack_data[top]);
    for(i=top-1;i>=0;i--) printf("%014I64d",stack_data[i]);        
}
