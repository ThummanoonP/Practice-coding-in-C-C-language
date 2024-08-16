#include <stdio.h>
#include <string.h>

#define max1 100
#define max2 50

char data[max1];
char stack_data_first_half[max2];
char stack_data_second_half[max2];
int first_top=-1;
int second_top=-1;
int i;

void first_push(char s){
     first_top++;
     stack_data_first_half[first_top]=s;

}

void second_push(char s){
     second_top++;
     stack_data_second_half[second_top]=s;
}

char first_pop(){
     char s;
     s=stack_data_first_half[first_top];
     first_top--;
     return s;
}

char second_pop(){
     char s;
     s=stack_data_second_half[second_top];
     second_top--;
     return s;
}

int check(int top){
    int count=0;
    for(i=0;i<=top;i++){
     if(first_pop()==second_pop()) count++;
     else return 0;
    }
    return count;
}

int main() {
    int check_count=0;
    FILE *writeFILE;
    writeFILE = fopen("file out put.txt","a"); 
    gets(data);
    for(i=0;i<(strlen(data))/2;i++){
       first_push (data[i]);
       second_push (data[((strlen(data))-1)-i]);
    }
    check_count=check(first_top);
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
