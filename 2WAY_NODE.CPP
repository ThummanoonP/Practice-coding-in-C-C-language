#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

typedef struct node{
	int ck;
	node *parent;
	node *next;
};

node *start;

void AddNode(int in){
	node *tmp=start;
	while(tmp->next != NULL) tmp=tmp->next;
	node *cky;
	cky = (node*)malloc(sizeof(node));
	cky->ck=in;
	cky->next=tmp->next;
	cky->parent=tmp;
	tmp->next=cky;
}

void DelNode(int in){
	node *ptr=start;
	while(ptr->next !=NULL && ptr->next->ck != in) ptr=ptr->next;
	if(ptr->next == NULL) return;

	node *tmp;
	tmp = ptr->next;
	ptr->next=tmp->next;
	(tmp->next)->parent=ptr;
	free(tmp);
}

int main(){
	clrscr();
	start = (node*)malloc(sizeof(node));
	start->next=NULL;
	start->parent=NULL;

	AddNode(5);
	AddNode(2);
	AddNode(10);
	AddNode(20);
	AddNode(30);
	DelNode(2);
	DelNode(20);
	node *ptr=start;
	for(;ptr->next != NULL;ptr=ptr->next)
		printf("%d ",ptr->next->ck);
	printf("\n");

	for(;ptr->parent != NULL;ptr=ptr->parent)
		printf("%d ",ptr->ck);
	getch();
	return 0;
}