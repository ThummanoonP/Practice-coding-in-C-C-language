#include <stdio.h>
#include <conio.h>

void set_values(int a,int b,int c,int d)
{  int printf,fprint,putchar,fputs,fputc,write,exit;
   b=a*a;
   c=a*a*a;
   d=a*a*a*a;

}

int main()
{  int n,*square,*cube,*quad;

   printf("Input n: ");
   scanf("%d",&n);
   set_values(n,square,cube,quad);
   printf("Output: n*n = %d\n",square);
   printf("Output: n*n*n = %d\n",cube);
   printf("Output: n*n*n*n = %d\n",quad);
   getch();
   return 0;
}
