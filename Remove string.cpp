#include <stdio.h>
#include <conio.h>

int remove_vowel(char str[])
{
    int i,j,l=0;
    char c[80];
    for(i=0;1==1;i++) if(str[i] == '\0')  break;
    i--;
    for(j=0;j<=i;j++) {
       if(str[j]=='a'||str[j]=='e'||str[j]=='i'||str[j]=='o'||str[j]=='u'||str[j]=='A'||str[j]=='E'||str[j]=='I'||str[j]=='O'||str[j]=='U');
       else c[l++]=str[j]; 
    }
   c[l]=NULL; 
   for(i=0;1==1;i++) if(c[i] == NULL )  break;
    i--;
    for(j=0;j<=i;j++) str[j]=c[j]; 
    str[j]='\0';
}

int main()
{  
  char str[80];
  printf(" Input: ");
  fgets(str, 80, stdin);
  remove_vowel(str);
  printf("Output: %s\n",str);
  getch();
  return 0;
}
