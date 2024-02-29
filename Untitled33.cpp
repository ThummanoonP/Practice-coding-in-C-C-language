#include <stdio.h>
#include <conio.h>
#include <string.h>



int main() {

  int i,n,x;
  char s[1000];
  gets(s);
  scanf("%d",&x);
  n=strlen(s);
  if(x<=n){
  for(i=n-x;i<n;i++) printf("%c",s[i]);
  for(i=0;i<n-x;i++) printf("%c",s[i]);
  } 
  else for(i=0;i<n;i++) printf("%c",s[i]);
  getch();
  return 0;
}
