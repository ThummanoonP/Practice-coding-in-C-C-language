#include <stdio.h>

int main()
{
  int a=0;
  char s[500];
  scanf("%[^\n]",s);
  scanf("%d",&a);
  printf("%c",s[a-1]);
  return(0);
}