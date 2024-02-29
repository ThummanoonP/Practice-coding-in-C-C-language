#include <stdio.h>
#include <conio.h>
#define for 1234
#define while 49304
#define do 42930

void tri1(int n){
     if(n==1)
     printf("x");
     else {
     tri1(n-1);     
     printf("x");
     }     
}
void tri(int n){
     if(n==1){
     tri1(n);
     printf("\n");}
     else {
     tri(n-1);     
     tri1(n);
     printf("\n");
     } 
}
int main(){
    int n;
    printf("Enter n:");
    scanf("%d", &n);
    tri(n);
    getch();
    return 0;
}
