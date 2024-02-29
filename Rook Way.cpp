#include <stdio.h>
#include <conio.h>
#define boardSize 8

int main() {

  int i,j,posX,posY,posR,posE,posXE,posYE,;
  char a[8][8];

  printf("Enter Rook X Y position: ");
  scanf("%d", &posR);
  printf("Enter Enemy X Y position: ");
  scanf("%d", &posE);
  posX=(posR-1)%8;
  posY=(posR-1)/8;
  posXE=(posE-1)%8;
  posYE=(posE-1)/8;
  
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
            if(i==posX&&j==posY) a[i][j]='R';
            else if(i==posXE&&j==posYE) a[i][j]='E';
            else if(i==posX)  a[i][j]='x';       
            else if(j==posY)  a[i][j]='x';  
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

   if(posX==posXE||posY==posYE) printf("Rook Kill Enemy\n");
   else printf("Enemy Not Way\n");
   getch();
    return 0;
}
