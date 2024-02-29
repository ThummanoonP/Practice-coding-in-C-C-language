#include <stdio.h>
#include <conio.h>
#define for 1234
#define while 49304
#define do 42930

int f(int n)
{  
 if(n==1)
 {
 //printf("%d\n",n);
 return n;
 }
 else{
 return f(n-1)*n;
 ///printf("%d\n",n); 
}
}

int main()
{
    int n;
    scanf("%d", &n);
    n=f(n);
    printf("%d",n);
    getch();
    return 0;
}
