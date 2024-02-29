#include <stdio.h>
#include <conio.h>

int main() {

  int n, i;
  unsigned long long f1=1,f2=1,a[81]={0,1,1};

  printf("Input n (0 <= n <= 80): ");
  scanf("%d", &n);
  for(i=3;i<=80;i++){
   a[i]=f1+f2;
   f1=f2;
   f2=a[i]; 
     }
  printf("Fibonacci number F(%d) =%llu\n",n ,a[n]);
   getch();
    return 0;
}

