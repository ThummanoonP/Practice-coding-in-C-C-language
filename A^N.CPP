#include<stdio.h>
#include<conio.h>

long int th(long int b,long int t)
{
	if(t==0) return(1);
	return(b*th(b,t-1));
}

void main()
{
	clrscr();
	int n,m;
	printf("Input Number1 : ");
	scanf("%d",&n);
	printf("Input Number2 : ");
	scanf("%d",&m);
	printf("All = %ld",th(n,m));
	getch();
}