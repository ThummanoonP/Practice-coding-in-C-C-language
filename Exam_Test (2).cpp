#include<stdio.h>
#include<conio.h>

int min(int a,int b){
     if(a<=b) return a;
     else return b;
    }
int main()
{
     int a,b;
     printf("%d %d",a,b);
     clrscr();
     scanf("%d %d",&a,&b);
     int x = min(a,b);
     printf("%d",x);
     getch();
     return 0;
     }
