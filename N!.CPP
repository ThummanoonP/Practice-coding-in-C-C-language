#include<stdio.h>
#include<conio.h>

int m=0;

long int th(long int t)
{
	if(t==0) return(1);
	m++;
	printf("%d\n",m);
	return(t*th(t-1));
}

int main()
{
	//clrscr();
	int n;
	printf("Input Number : ");
	scanf("%d",&n);
	printf("All = %d",th(n));
	getch();
	return 0;
}
