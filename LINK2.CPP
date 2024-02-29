#include <stdio.h>
#include <conio.h>
#include <alloc.h>

typedef struct node
  {
	 int moo;
	 struct node *next;
  };
typedef struct node NODE;
typedef struct node *LINK;
LINK start,run;
int main()
{
   //	clrscr();
	int tmp;
	int n=0;
	start=(LINK)malloc(sizeof(NODE));
	run=(LINK)malloc(sizeof(NODE));
	for (int i=0;i<10;i++){
	printf("Enter Value %d : ",i+1);
	scanf("%d",&tmp);
	LINK x;
	x = (LINK)malloc(sizeof(node));
	x->moo=tmp;
	x->next=NULL;
	if(i==0)start->next=x;
	else {
		 run=start->next;
		 while(run->next!=NULL) run=run->next;
		 run->next=x;
	  }
	}
	run=start;
	while(run->next!=NULL){
		n=n+run->next->moo;
		run=run->next;
	}
	printf("%d\n",n);
	return 0;
	getch();

}