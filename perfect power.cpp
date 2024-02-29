#include <stdio.h>
#include <conio.h>
#include <math.h>

int power(int x, int k)
{
     int result = 1, i;
     for(i=0;i<k;i++)
         result *= x;
     return result;
}

int is_perfect_power(int x, int k)
{
int i,p;
if(x>=0){
for(i=0;i<=x;i++) {
p=power(i,k);
if(x==p)return 1;
}
return 0;
}
else {
  for(i=0;i>=x;i--){
       p=power(i,k);
       if(x==p)return 1;
  }
  return 0;
}     
}


int main()
{
    int a, b, k, i;
    scanf("%d %d %d", &a, &b, &k);
    for(i=a;i<=b;i++)
        printf("%d %d\n", i, is_perfect_power(i,k));
        getch();
    return 0;
}
