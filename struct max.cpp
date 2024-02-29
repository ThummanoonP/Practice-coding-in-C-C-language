#include <stdio.h>
#include <conio.h>
#define arraySize 5
 typedef struct{
  char id[12];
  int midterm;
  int final;
  char grade;
}studRec;

void findTop(studRec pRec[], int size, studRec **topMid, studRec **topFin) {
  int i,j,x=0,y=0;
  for(i=0;i<5;i++)
    { 
             if(pRec[i].midterm>x){
                   *topMid=&pRec[i];
                   x=pRec[i].midterm;
             }
              if(pRec[i].final>y){
                   *topFin=&pRec[i];
                   y=pRec[i].final;   
             }      
    }
  
}

int main() {

  studRec students[arraySize], *pTopMid, *pTopFin;
  int gradeCount[5] = {0};
  int i;

  for (i=0; i <  arraySize; i++) {
    printf("Enter Student ID: ");
    scanf("%s", students[i].id);
    printf("Enter Student Midterm: ");
    scanf("%d", &students[i].midterm);
    printf("Enter Student Final: ");
    scanf("%d", &students[i].final);

  }

  findTop(students,arraySize,&pTopMid,&pTopFin);

  
  printf("Top Score for Midterm:\n");
  printf("Student ID %s with score %d\n",pTopMid->id ,pTopMid->midterm);
  printf("Top Score for Final:\n");
  printf("Student ID %s with score %d\n",pTopFin->id ,pTopFin->final);
  getch();
  return 0;
}
