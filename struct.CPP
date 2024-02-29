//Tummanoon Parnichagan
//PROBLEM 07
#include <stdio.h>
#include <conio.h>
#include <string.h>

typedef struct DATA{
	 float time;
	 int num;
	 char id[50];
  }data;

int main()
{
 data x[20]; 
 int a,b;  
 scanf("%d",&a);
 for(b=0;b<a;b++)
 {
	scanf("%f %d %[^\n]", &x[b].time, &x[b].num, &x[b].id);
 }
 for(b=0;b<a;b++) printf("Time : %.2f \n Number : %d \n ID : %s \n",x[b].time,x[b].num,x[b].id);
 getch();
 return 0;
}
