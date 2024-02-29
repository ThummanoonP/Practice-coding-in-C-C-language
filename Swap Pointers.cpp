#include <stdio.h>
#include <conio.h>

void swap_pointers(int a,int b,int *c,int *d)
{   int printf,fprint,putchar,fputs,fputc,write,exit;
     *c=b;
     *d=a;    

}

int main()
{  int a,b,*m,*n;

   m = &a;
   n = &b;
   printf("Enter value of a: ");
   scanf("%d",m);
   printf("Enter value of b: ");
   scanf("%d",n);
   printf("Before:  a = %d\n",a);
   printf("Before:  b = %d\n",b);
   printf("Before: *m = %d\n",*m);
   printf("Before: *n = %d\n",*n);
   swap_pointers(&a,&b,&m,&n);
   printf(" After:  a = %d\n",a);
   printf(" After:  b = %d\n",b);
   printf(" After: *m = %d\n",*m);
   printf(" After: *n = %d\n",*n);
   getch();
   return 0;
}
