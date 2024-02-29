#include <stdio.h>
#include <conio.h>
#include <alloc.h>

struct node{
  int data;
  node *next;
};
node *first,*run;

void addnode(int i){
   node *n;
   n=new node;
   n->data=i;
   n->next=NULL;

   if(i==0){
	  first->next=n;
   }
   else{
		  run=first;
		  while((run->next!=NULL)&&(run->next->data<i)){
			 run=run->next;
		  }
		  n->next=run->next;
		  run->next=n;
	  }
}
/*
void removefromfirst(){
   node *p;
   p=first->next;
   first->next=p->next;
   delete p;
}
/*
void removefromlast(){
   node *p;
   p=first;
   while(p->next->next!=NULL)
   {
      p=p->next;
   }
   node *temp;
   temp=p->next;
   delete temp;
   p->next=NULL;
}    */
int remove(int i)
{
  node *p;
  for(p=first;p->next!=NULL;p=p->next)
  {
     if(p->next->data==i)
     {
	 node *temp;
	 temp=p->next;
	 p->next=temp->next;
	 free(temp);
	 return 1;
	 break;
     }
  }
  return(0);
}

void main(){
   clrscr();
   int a,b,c;
   first=new node;
   first->data=0;
   first->next=NULL;

   printf("Input Number Data : ");
   scanf("%d",&c);
   printf("Input Number : ");
   for(b=0;b<c;b++){
   scanf("%d",&a);
   addnode(a);
   }
   node *p;
   printf("Data = ");
   for(p=first->next;p!=NULL;p=p->next)
   {
	 printf("%d " ,p->data);
   }
   while (first->next!=NULL)
   {
   printf("\nInput Delete Number: ");
   scanf(" %d",&a);

     c=remove(a);
     if(c==0) printf("Error!...");
     if(first->next==NULL)
     printf("not! Data");
     else
     printf("\nData = ");
   for(p=first->next;p!=NULL;p=p->next)
   {
	 printf("%d " ,p->data);
   }
   }
   getch();
}
