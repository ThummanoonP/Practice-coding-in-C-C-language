#include <stdio.h>

int main()
{
   long n;
   scanf("%ld",&n);
   if(n%3==0||n%10==3)
	  printf("PONG");
   else printf("%ld",n);
   return(0);
}