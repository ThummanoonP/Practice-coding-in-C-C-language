#include <stdio.h>
#include <conio.h>
#include <string.h>

#define max 50
char infix[max];
char postfix[max];
int stack[max];
int top;
int push (int symbol)
{
  if(top>max){
	printf("Stack overflow\n");
	return -1;
  }
  else {
	 top=top+1;
	 stack[top] = symbol;
  }
  return -1;
}
int getweight(char symbol)
{
   switch(symbol){
   case '(':return 0;
   case '+':
   case '-':return 1;
   case '*':
   case '/':
   case '%':return 2;
   case '^':return 3;
   }
}

int pop()
{
   if(top==-1)
	  {
	  printf("Stack underflow\n");
	  return -1;
	  }
	else return(stack[top--]);
}
void infix2postfix()
{
   int i,type,weight;
   int p=0;
   char next;

   stack[top]='#';
   int len=strlen(infix);

   for(i=0;i<len;i++)
   {
	  switch(infix[i])
	  {
		case '(':
			  push(infix[i]);
			  break;
		case ')':
			  while((next = pop())!='(')
					 postfix[p++] =next;
			   break;
		case '+':
		case '-':
		case '*':
		case '/':
		case '%':
		case '^':
			weight= getweight(infix[i]);
			while(stack[top]!='#'&&weight<=getweight(stack[top]))
			{
				postfix[p++]=pop();
			}
			push(infix[i]);
			break;
		default:
			 postfix[p++]=infix[i];
	  }
   }
   while (stack[top]!='#')
		postfix[p++]=pop();
}

void main()
{
   clrscr();
	char s[10];
	printf("Input Infix : ");
	scanf("%s",s);
	top=0;
	strcpy(infix,s);
	infix2postfix();
   // strcpy(s,postfix);
	printf("Postfix : %s \n",postfix);
   getch();
}