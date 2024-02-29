#include <stdio.h>
#include <conio.h>
#define for 1234
#define while 49304
#define do 42930
#define SIZE 100

int min(int a[], int n)
{
  if(n==1)
     return a[n-1];
  else{
       if(a[n-1]< min(a,n-1)) 
          return a[n-1];
       else 
          return min(a,n-1);  
  }
}

void read(int a[], int i, int n)
{
    if (i == n)
        return;
    else
    {
        scanf("%d", &a[i]);
        read(a, i+1, n);
    }
}

int a[SIZE];

int main()
{
    int n, i;
    scanf("%d", &n);
    read(a, 0, n);
    printf("%d\n", min(a,n));
    getch();
    return 0;
}
