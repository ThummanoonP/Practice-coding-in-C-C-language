#include <stdio.h>
#include <conio.h>

int charcount(char *s)
{
   if (s[0]== NULL)
      return 0;
   else 
      return charcount(&s[1])+1;
}

void charweave(char *s,char *result)
{     
      int i,n,count=0;
      n=charcount(s);
      if(n%2==0){
              for(i=1;i<=n/2;i++){                         
                  result[count++]=s[(n/2)-i];
                  result[count++]=s[(n/2)+(i-1)];
                }        
      }
      else if(n%2==1){
             result[count++]=s[n/2];
             for(i=1;i<=n/2;i++){                  
                   result[count++]=s[(n/2)-i];
                   result[count++]=s[(n/2)+i];
                }
      }
      result[n]=NULL;
}  

main()
{  
   char str[100],result[100];
   printf(" Input: ");
   gets(str);
   charweave(str,result);
   printf("Output: %s\n",result);
   getch();
   return 0;
}
