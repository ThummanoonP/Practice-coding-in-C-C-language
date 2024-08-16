#include <stdio.h>

#include <string.h>

#define max1 100
#define max2 50

char data[max1];
char queue_data_first_half[max2];
char queue_data_second_half[max2];
int first_front=0;
int second_front=0;
int first_rear=-1;
int second_rear=-1;
int i;

void first_enqueue(char s){
         first_rear++;
         queue_data_first_half[first_rear]=s;
}

void second_enqueue(char s){
         second_rear++;
         queue_data_second_half[second_rear]=s;
}

char first_dequeue(){
     char s;
     s=queue_data_first_half[first_front];
     first_front++;
     return s;

}

char second_dequeue(){
     char s;
     s=queue_data_second_half[second_front];
     second_front++;
     return s;
}

int check(int rear)
{   
    int count=0;
    for(i=0;i<=rear;i++){
      if(first_dequeue()==second_dequeue()) count++;
      else return 0;
    }
     return count;
}

int main() {
    int check_count=0,n;
    FILE *writeFILE;
    writeFILE = fopen("file out put.txt","a"); 
    gets(data);
    n=strlen(data);
    for(i=0;i<(strlen(data))/2;i++){
       first_enqueue (data[i]);
       second_enqueue (data[(n-1)-i]);
    }
    check_count=check(first_rear);
    if(check_count==strlen(data)/2) {
         printf("The String is Palindrome.");
         fprintf(writeFILE,"%s   : The String is Palindrome.\n",data);
    }
    else if(check_count==0){ 
         printf("The String is not Palindrome.");
         fprintf(writeFILE,"%s   : The String is not Palindrome.\n",data);
    }
    return 0;
}
