#include <stdio.h>

int main()
{
  int a,b,n[30000];
  char s[30000];
  scanf("%d %[^\n]",&a,s);
  for(b=0;b<a;b++)
  {
	if(s[b]>='a'&&s[b]<='z'||s[b]>='A'&&s[b]<='Z')
	{
		if(s[b]=='z')
		  {
			n[b]='a';
		  }
		else if(s[b]=='Z')
		  {
			n[b]='A';
		  }
		else n[b]=s[b]+1;
	 }
	else n[b]=s[b];

  }
  for(b=0;b<a;b++)
	printf("%c",n[b]);
  return(0);
  }