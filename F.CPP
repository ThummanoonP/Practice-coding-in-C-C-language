#include <stdio.h>
#include <conio.h>

int main()
{
  // clrscr();
   int n,a;
   long long s=1;
   printf("Input Number : ");
   scanf("%d",&n);
   for(a=1;a<=n;a++) s=s*a;
   printf("%I64d",s);
   getch();
   return 0;
}
