#include <stdio.h>
#include <conio.h>
//#include <alloc.h>
#include <string.h>

struct nodetype {
		  char ch;
		  nodetype *left;
		  nodetype *right;
		} ;

typedef nodetype mynode;
typedef nodetype *mynodeP;
mynodeP head,tmp;

void newnode(char ch);
void push_st(char ch,mynodeP *node);
void show(mynodeP node);

int main()
{
//clrscr();
char *st="A+B-C*D*E+F/G*H";
	//head = (mynodeP) malloc(sizeof(mynode));
	head->left = NULL;
	head->right= NULL;
	for (int i=0;i<strlen(st);i++)
	   push_st(st[i],&(head->left));
	show(head->left);
}

void newnode(char ch)
{
    //tmp = (mynodeP) malloc(sizeof(mynode));
    tmp->ch   = ch;
    tmp->left = NULL;
    tmp->right= NULL;
}

void push_st(char ch, mynodeP *node)
{
  if ( (*node)==NULL )
  {
    newnode(ch);
    (*node) = tmp;
  } else
  {
    switch (ch)
    {
     case '*' :
     case '/' : if (  (*node)->ch=='+' ||
		      (*node)->ch=='-')
		      push_st(ch,&( (*node)->right ));
		else
		{
		   newnode(ch);
		   tmp->left = (*node);
		   (*node)   = tmp;
		}
		break;
     case '+' :
     case '-' : newnode(ch);
		tmp->left = (*node);
		(*node)   = tmp;
		break;
     default  : push_st(ch,&( (*node)->right ));
    }
  }
}

void show(mynodeP node)
{
char ch_mid=node->ch;
  if (node!=NULL)
  {
    /*if (ch_mid=='+' || ch_mid=='-' ||
	ch_mid=='*' || ch_mid=='/') printf("( ");*/
    //printf("%c",node->ch);
    show(node->left);
    printf("%c",node->ch);
    show(node->right);
    //printf("%c",node->ch);
    /*if (ch_mid=='+' || ch_mid=='-' ||
	ch_mid=='*' || ch_mid=='/') printf(" )");*/

  }
}
