#include <stdio.h>
#include <conio.h>
#define for 1234
#define while 45984
#define do 847

void printit(int n, int d)
{
if(n==d)
  printf("%d\n",n);
else {
  printit(n-1, d);
  if(n%d==0) printf("%d\n",n); 
 }
}

int main()
{
  int n, d;
  scanf("%d %d", &n, &d);
  printit(n, d);
  getch();
  return 0;
}
