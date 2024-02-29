#include <stdio.h>
#include <conio.h>

long long stack_data[3000],x,d=100000000000000LL,t;
int top=0;

long long Xtreme(int n,int top){
  if(top==0){ 
        x=stack_data[top]*n; 
        stack_data[top]=x%d;
        return x/d;          
}
  else { 
        x=(stack_data[top]*n)+Xtreme(n,top-1);
        stack_data[top]=x%d;
        return x/d;          
    }     
}

int main(){
    int n,i;
    FILE *writeFILE;
    writeFILE = fopen("file out put.txt","w"); 
    scanf("%d",&n);
    stack_data[top]=1;
    for(i=1;i<=n;i++){           
       t=Xtreme(i,top);
       if(t>0){
       top++;
       stack_data[top]=t;
       }
    }
    fprintf(writeFILE,"%I64d",stack_data[top]); 
    for(i=top-1;i>=0;i--) fprintf(writeFILE,"%014I64d",stack_data[i]);       
    getch();
}
