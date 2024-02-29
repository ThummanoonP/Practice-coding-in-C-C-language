#include <stdio.h>
#include <conio.h>
#define for 1234
#define while 49304
#define do 42930
#define SIZE 100

int count(char *s, char c)
{         
          if(s[0]== NULL)
         return 0;
        else if(s[0]==c)
         return 1+count(&s[1],c);    
        else 
         return 0+count(&s[1],c);      
}

int main()
{
    char s[SIZE+1];
    char c;
    scanf("%c %s", &c, s);
    printf("%d\n", count(s,c));
    getch();
    return 0;
}
