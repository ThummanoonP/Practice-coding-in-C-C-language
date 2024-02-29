#include <stdio.h>
#include <string.h>

#define max 100

char data[max],stack_data[max],queue_data[max];
int top=-1,front=0,rear=-1,i;

void push(char s){
         top++;
         stack_data[top]=s;
}

void enqueue(char s){
         rear++;
         queue_data[rear]=s;
}

char pop(){
     char s;
     s=stack_data[top];
     top--;
     return s;
}

char dequeue(){
     char s;
     s=queue_data[front];
     front++;
     return s;
}

int check(int n){
    int count=0;
    for(int i=0;i<n;i++){
     if(pop()==dequeue()) count++;
     else return 0;
    }
    return count;
}

int main() {
    int check_count=0;
    FILE *writeFILE;
    writeFILE = fopen("file out put.txt","a"); 
    gets(data);
    for(i=0;i<strlen(data);i++){
       push(data[i]);
       enqueue(data[i]);
    }
    check_count=check(strlen(data));
    if(check_count==strlen(data)) {
         printf("The String is Palindrome.");
         fprintf(writeFILE,"%s   : The String is Palindrome.\n",data);
    }
    else if(check_count==0){ 
         printf("The String is not Palindrome.");
         fprintf(writeFILE,"%s   : The String is not Palindrome.\n",data);
    }
    return 0;
}
