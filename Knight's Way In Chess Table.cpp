#include <stdio.h>
#include <conio.h>
#define boardSize 8

int main() {

  int i,j, posX, posY, x, y;
    char a[8][8];

  printf("Enter Knight's X Y position: ");
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
            if(i==posX&&j==posY) a[j][i]='K';
            else if(i==posX-2&&j==posY-1||i==posX-2&&j==posY+1)  a[j][i]='x';  
            else if(i==posX+2&&j==posY-1||i==posX+2&&j==posY+1)  a[j][i]='x';     
            else if(j==posY-2&&i==posX-1||j==posY-2&&i==posX+1)  a[j][i]='x';  
            else if(j==posY+2&&i==posX-1||j==posY+2&&i==posX+1)  a[j][i]='x';   


      }            
  } 
  

  printf("-----------------\n");
  for (i = 0; i < boardSize; i++)
    {
      for (j = 0; j < boardSize; j++)
    {
      printf("|");
      printf("%c",a[i][j]);
    }
      printf("|\n");
      printf("-----------------\n");
    }
    getch();
}

