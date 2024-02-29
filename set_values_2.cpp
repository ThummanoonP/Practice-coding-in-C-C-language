#include <stdio.h>
#include <conio.h>

void set_values(int n,int *s,int *c,int *q)
{  int printf,fprint,putchar,futs,fputc,write,exit;
    *s=n*n;
    *c=n*n*n;
    *q=n*n*n*n;
}

int main()
{ int x,s,c,q,*n=&x,*square=&s,*cube=&c,*quad=&q;

   printf("Input n: ");
   scanf("%d",n);
   set_values(x,square,cube,quad);
   printf("Output: n*n = %d\n",*square);
   printf("Output: n*n*n = %d\n",*cube);
   printf("Output: n*n*n*n = %d\n",*quad);
   getch();
   return 0;
}
