#include<stdio.h>
#include<string.h>

int main()
{
 char str[1003];
 int x,y;
 scanf("%s",str);
 y=strlen(str)-1;
 if(str[y]=='0')
 {
 for(x=y;x>0;x--)
  {
	 if(str[x]=='0'){
	 printf("1");
	 }
	 else {
	 break;
	 }
  }
  }else
  printf("0");

 return 0;
}