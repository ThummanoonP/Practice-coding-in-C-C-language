#include <stdio.h>
#include <conio.h>
#include <string.h>
struct item
{
	int value;
	int weight;
};
item data[100];


void main()
{
   int a,b,c,t,num_va[100]={0},num_we[100]={0},d,e,f=0;
   clrscr();
   printf("Input Max Weight : ");
   scanf("%d",&a);
   printf("Input N Item : ");
   scanf("%d",&t);
   printf("Input Weight and Value Item : \n");
   for(b=0;b<t;b++)
   {
	 scanf("%d %d",&data[b].value,&data[b].weight);
   }
   for(b=0;b<t;b++)
	  {
		 num_va[f]=data[b].value;
		 num_we[f]=data[b].weight;
	  for(c=b+1;c<t;c++)
		{
		  num_va[f]=num_va[b]+data[c].value;
		  num_we[f]=num_we[b]+data[c].weight;
		  if(num_we[b]>a)
		  {
		  num_va[f]=num_va[f]-data[c].value;
		  num_we[f]=num_we[f]-data[c].weight;
		/*  if(num_we[b]>a)
		  {
			num_va[f]=num_va[f]-data[c].value;
			num_we[f]=num_we[f]-data[c].weight;
			num_va[f]=num_va[b]+data[c-1].value;
			num_we[f]=num_we[b]+data[c-1].weight;
		  } */
		  }
		}
		f++;
	  }
   for(b=0;b<t;b++)
   {
	   for(c=t-1;c>b;c--)
	   {
		   if(num_va[b]>num_va[c])
		   {
			   d=num_va[b];
			   num_va[b]=num_va[c];
			   num_va[c]=d;
			   e=num_we[b];
			   num_we[b]=num_we[c];
			   num_we[c]=e;
		   }
	   }
   }
   printf("Vary Value = %d\nVary Weight = %d",num_va[4],num_we[4]);
		 getch();
}