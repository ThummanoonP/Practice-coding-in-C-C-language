#include <stdio.h>
#include <conio.h>

unsigned long to_base(unsigned int base10, int radix)
{
int i,t=1,out=0,r;
for(i=1;i<=8;i++)
{  
     r=base10%radix;
     base10=base10/radix;
     r=r*t;
     out=out+r;
     t=t*10; 
}
return out;
}

int main()
{
  unsigned int base10;
  int radix;

  printf("Input base 10 number: ");
  scanf("%u", &base10);
  printf("Input radix base number: ");
  scanf("%d", &radix);
  if(base10>=2&&base10<=9) printf("Output in base %d = %08u\n", radix,to_base(base10,radix));
  getch();
  return 0;
}
