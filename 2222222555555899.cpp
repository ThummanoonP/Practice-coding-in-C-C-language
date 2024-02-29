#include<stdio.h>
#include<string.h>
#include<conio.h>
int main(){
   char a[101];
   int  i,n,x=0,y=0;
   scanf("%s",&a);
   n=strlen(a);
       
        for(i=0;i<n;i++){
                         
          if(a[i]=='N')
             y++;
          else if(a[i]=='S')
             y--;
          else if(a[i]=='E')
             x++;
          else if(a[i]=='W')
             x--;
          else if(a[i]=='Z'){
             x=0;
             y=0;       
             }    
        }  
        printf("%d %d",x,y);    
        getch();
        
}
