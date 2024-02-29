#include <stdio.h>
#include <conio.h>

int stack_data[36000],x,d=10;
int top=0;

int Xtreme(int n,int top){
  if(top==0){ 
        x=stack_data[top]*n; 
        stack_data[top]=x%d;
        printf("%d\n",stack_data[top]);   
        if(x/d<10&&x/d>0){ 
           return x/d; 
           printf("%d\n",x/d);            
        }
        else return 10;
}
  else { 
        x=(stack_data[top]*n)+Xtreme(n,top-1);
        stack_data[top]=x%d;
        printf("%d\n",stack_data[top]);   
        if(x/d<10&&x/d>0){
           return x/d; 
           printf("%d\n",x/d);            
        }
        else return 10;
    }     
}
int main(){
    int n,i;
    int t;
    scanf("%d",&n);
    stack_data[top]=1;
    for(i=1;i<=n;i++){           
       t=Xtreme(i,top);
       if(t<10){
       top++;
       stack_data[top]=t;
       printf("%d\n",stack_data[top]); 
       }
    }
    for(i=top;i>=0;i--){
       printf("%d",stack_data[i]);                 
    }
    getch();
}
