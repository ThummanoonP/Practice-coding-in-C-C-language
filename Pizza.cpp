#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){
  int size,choice;
  double price,cost,fcost=5,bcost=2,excost=0,area,diameter;
//  clrscr();
  printf("Welcome to My Pizza Shop!!\n~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
  printf("Enter pizza size (1=s, 2=m, or 3=l): ");
  scanf("%d",&size);
  if(size==1) diameter=10;
  else if(size==2) diameter=16;
  else if(size==3) diameter=20;
  printf("Extra pepperoni? (1=yes, 0=no): ");
  scanf("%d",&choice);
  if(choice==1) excost=excost+0.5;
  printf("Extra cheese? (1=yes, 0=no): ");
  scanf("%d",&choice);
  if(choice==1) excost=excost+0.25;
  printf("Extra mushroom? (1=yes, 0=no): ");
  scanf("%d",&choice); 
  if(choice==1) excost=excost+0.30;
  area=(M_PI*(diameter*diameter))/4; 
  cost=fcost+(bcost*area)+(excost*area);
  price=1.5*cost;
  printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\nYour order costs %.2lf baht.\nThank you.",price);
  getch();
return 0;
}
