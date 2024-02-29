#include <stdio.h>
#include <conio.h>

int no_case_cmp(char str1[],char str2[]){
    int i=0,j,m,cnt=0,g;    
        for(i=0;1==1;i++) if(str1[i] == '\0')  break;
        i--;
        m=i;
        for(i=0;1==1;i++) if(str2[i] == '\0')  break;
        i--;
        if(m==i){
            g=0;
            return g;
        }   
        else{
            for(j=0;j<=i;j++) if(str1[j]== str2[j]||str1[j]== str2[j]+32||str1[j]+32== str2[j]) cnt++; 
            if(cnt==i){
               g=1;
               return g;
            }
       }
}
int main()
{  
    char str1[80],str2[80];
   printf("Input 1: ");
   fgets(str1, 80, stdin);
   printf("Input 2: ");
   fgets(str2, 80, stdin);
   printf("\"%s\" and \"%s\" are %sthe same.\n",str1,str2,(no_case_cmp(str1,str2)==0)?"":"not ");
   getch();
 return 0;
}
