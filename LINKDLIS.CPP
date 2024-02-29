#include <stdio.h>
#include <conio.h>
#include <alloc.h>

struct node
{
  int data;
  node *next;
};
node *first;

void addnode(int i)
{
   node *n;
   n=new node;
   n->data=i;
   if(first->next==NULL) n->next=NULL;
   else
	 n->next=first->next;
   first->next=n;
}
void removefromfirst(){
   node *p;
   p=first->next;
   first->next=p->next;
   delete p;
}

void main()
{
   clrscr();
   first=new node;
   first->data=0;
   first->next=NULL;

   addnode(1991);
   addnode(9);
   addnode(1988);
   addnode(10);
   addnode(4);
   addnode(7);
   addnode(3);
   addnode(15);
   addnode(19);
   addnode(16);


   node *p;
   printf("Current data\n");
   for(p=first->next;p!=NULL;p=p->next)
   {
	 printf("data=%d\n" ,p->data);
   }

   removefromfirst();
   removefromfirst();
   removefromfirst();
   removefromfirst();
   removefromfirst();
   removefromfirst();
   printf("\nCurrent data\n");
   for(p=first->next;p!=NULL;p=p->next){
     printf("data=%d\n",p->data);
   }

   printf("%d",p);
   getch();
}