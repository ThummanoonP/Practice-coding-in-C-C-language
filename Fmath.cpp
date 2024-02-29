#include <stdio.h>
#include <math.h>
#include<conio.h>

int main()
{
    double x, y, z;

    
    printf("Enter x: ");
    scanf("%lf",&x);
    printf("Enter y: ");
    scanf("%lf",&y);
    printf("Enter z: ");
    scanf("%lf",&z);
    double a1 =pow(x,y)+z;
    double a2 =cos(2*M_PI)+log(x);
    double a3 =fabs(x)+fabs(y);
    double a4 =sqrt((x*x)+(y*y)+(z*z));
    double a5 =1;
    double a6 =pow((x+y),(1/5));
    double a7 =pow(y,x);
    printf("%lf\n", a1);
    printf("%lf\n", a2);
    printf("%lf\n", a3);
    printf("%lf\n", a4);
    printf("%lf\n", a5);
    printf("%lf\n", a6);
    printf("%lf\n", a7);
    getch();
    return 0;
}
