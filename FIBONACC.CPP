#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
   int n,a;
   unsigned long long k[80]={0,1};
   printf("Input a Fibonacci series size (Not excess 80) : ");
   scanf("%d",&n);
   if(n>=1&&n<=80)
   {
   for(a=2;a<n;a++)
   {
	 k[a]=k[a-1]+k[a-2];
   }
   printf("\nPrint a Fibonacci series.\n");
   for(a=0;a<n;a++)
   {
	  printf("%14llu,",k[a]);
	  if(a%5==4&&a!=0) printf("\n");
   }
   }
   else if(n==1)
	 {
		 printf("\nPrint s Fibonacci series.\n %llu" ,k[0]);
	 }
   else if(n<=0||n>80) printf("\nError! ");
   getch();
   return 0;
}
