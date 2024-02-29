#include<stdio.h>
#include<conio.h>
#define arraySize 10

int top=-1;

typedef struct{
   int score;
   char id[13];
}Data;

Data stackdata[arraySize];

void push(Data data){
   if(top<arraySize-1){
                 top++;
                 stackdata[top]=data;
           }
    else printf("Stackdata Full\n");
}

Data pop(){
     Data d;
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
     float sum=0;
     Data data;
     while(i==0){
          printf("Enter Score = 1 , Report Score > xbar = 2 ,Exit = 3\n");
          scanf("%d",&n);
          if(n==1){
                   printf("Input Name");
                   scanf("%s",data.id);.
                   printf("Input Score");
                   scanf("%d",&data.score);
                   sum=sum+data.score;
                   push(data);
                   }
          else if(n==2){
              printf("List Name Score > xbar");
              Score > xbar
              for(i=top;i>=0;i--){
               r=pop();
               if(r.score>sum) printf("Name : %s , Score = %d",r.id,r.score);
            }
         }
         else if(n==3) i=1;
    }
    getch();
    return 0;
}
