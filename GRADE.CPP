#include <stdio.h>


int main()
{
  int n;
  scanf("%d",&n);
  if(n>=80)
  printf("4");
  else if(n<80&&n>74)
  printf("3.5");
  else if(n<75&&n>69)
  printf("3");
  else if(n<70&&n>64)
  printf("2.5");
  else if(n<65&&n>59)
  printf("2");
  else if(n<60&&n>54)
  printf("1.5");
  else if(n<55&&n>49)
  printf("1");
  else if(n<50)
  printf("0");
  return(0);
}