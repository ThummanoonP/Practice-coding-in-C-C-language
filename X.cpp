#include <stdio.h>
#include<conio.h>

main ()
{  int n,m,cnt;
   printf("Please enter n: ");
   scanf("%d",&n);
   m = 1;
   while ((++m)<=n&&n<=14&&n>=2) {
      if (m==2)
         printf(" n  x1  x2  x3  x4  x5  x6  x7  x8  x9 x10 x11 x12\n");
      printf("%2d ",m);
      cnt = 0;
      while ((++cnt)<=12)
         printf("%3d%c",m*cnt,(cnt==12)? '\n':' ');
   }
   getch();
   return 0;
}
