#include <stdio.h>
#include <conio.h>

int main()
{
    char grade;
    printf("What is your grade? ");
    scanf("%c",&grade);
    switch (grade){
          case 'A': printf("Congratulations.\n");
          break;
          case 'B': printf("Very Good!.\n");
          break;
          case 'C': printf("Good!.\n");
          break;
          case 'D': printf(".....\n");
          break; 
          case 'F': printf("Bad!.\n");
          break;
          default: printf("I don't understand that grade ?");
          break;
           }
    getch();
    return 0;
}
