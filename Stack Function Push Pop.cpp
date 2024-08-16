#include<stdio.h>
#include<conio.h>

#define max 10

int stackdata[max],top=-1;

void push(int x){
   if(top<max-1){
                 top++;
                 stackdata[top]=x;
           }   
    else printf("Stackdata Full\n");       
}

int pop(){
     int d;
     if(top>-1){
               d=stackdata[top];
               //stackdata[top]=0;
               top--;
               return d;
           }
     else return 0; 
}

int main(){
     int n,r,t,i=0;
     while(i==0){
          printf("Push = 1 , pop = 2 ,Exit = 3\n");
          scanf("%d",&n);
          if(n==1){
                   scanf("%d",&t);
                   push(t);
                   }  
          else if(n==2){
               r=pop();
               if(top!=-1){
                   printf("Stack Data %d = %d\n",top+2,r);
                   }
               else printf("Not data\n");              
         }
         else if(n==3) i=1;
    } 
    getch();
    return 0;
}     
