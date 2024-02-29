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
      int i,n,m=0,u=0;
      char L[100],R[100];
      n=charcount(s);
      
      if(n%2==0){
              for(i=0;i<n;i++){ 
                 if(i<n/2) L[((n/2)-1)-i]=s[i];
                 else R[i%5]=s[i];                                            
                }  
              for(i=0;i<n;i++){ 
                 if(i%2==0) result[i] =L[u++];
                 else result[i] =R[m++];                                            
                }        
    }
     else if(n%2==1){
             result[0]=s[n/2];
              for(i=0;i<n;i++){ 
                 if(i<n/2) L[((n/2)-1)-i]=s[i];
                 else R[i%5]=s[i];                                            
                }  
              for(i=1;i<n;i++){ 
                 if(i%2==0) result[i] =L[u++];
                 else result[i] =R[m++];                                            
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
