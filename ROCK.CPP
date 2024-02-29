#include <stdio.h>
#include <conio.h>

int main()
{
  double n=0,m=0;
  int a;
  scanf("%ld",&a);
  
  if(a%10==0)
  {
	 n=1;
	 a=a/10.0;
	 if(a%10==0)
	 {
	 m=1;
	 }
  }
  while(a%10==0)
  {
	 m=m*10.0;
	 a=a/10.0;
  }
  printf("%f",n+m);
  getch();
  return(0);
}
