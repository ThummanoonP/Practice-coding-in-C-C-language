#include <stdio.h>
#include <conio.h>
#define boardSize 8

int main() {

  int i,j, posX, posY;
  char a[8][8];

  printf("Enter Queen's X Y position: ");
  scanf("%d %d", &posX, &posY);
  
    for(i=0;i<8;i++)
  {
      for(j=0;j<8;j++)
      {
             a[j][i]=' ';
      }            
  } 
  for(i=0;i<8;i++)
  {
      for(j=0;j<8;j++)
      {
            if(i==posX&&j==posY) a[j][i]='Q';
            //else if(i==posX)  a[j][i]='x';       
            //else if(j==posY)  a[j][i]='x';  
            else if(i-j==posX-posY) a[j][i]='x'; 
            else if(i+j==posX+posY) a[j][i]='x'; 

      }            
  } 
   
  printf("-----------------\n");
  for (i = 0; i < boardSize; i++){
      for (j = 0; j < boardSize; j++){
      printf("|");
      printf("%c",a[j][i]);
      }
      printf("|\n");
      printf("-----------------\n");
    }


   getch();
    return 0;
}
