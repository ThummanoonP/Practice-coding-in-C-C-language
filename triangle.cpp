#include<stdio.h>
#include<math.h>
#include<conio.h>

int main(){  
    int a, b, c;
   // clrscr();
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    printf("Enter c: ");
    scanf("%d", &c);
if((a+b)<=c||(c+a)<=b||(b+c)<=a) printf("There is no triangle with side-lengths %d, %d, and %d.",a,b,c);
else {  double s=(a+b+c)/2,area;
          area=sqrt(s*(s-a)*(s-b)*(s-c));
          printf("area = %.3lf",area); }
    getch();
    return 0;
}
