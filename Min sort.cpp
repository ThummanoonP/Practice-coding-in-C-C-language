#include <stdio.h>
#include <conio.h>
#define arraySize 10

int minSink(int *array,int size) {
  int i, min, minPos, temp;

  min = array[0];
  minPos = 0;

  for (i = 1; i < size; i++) {
   for(int j=i;j<10;j++)
      { if(array[i-1]<array[j]){
         temp=array[i-1];
         array[i-1]=array[j]; 
        array[j]=temp; 
         }
       }
  }
}

int main() {

  int i;
  int A[arraySize];

  for (i=0;i<10;i++) {
    printf("Enter number: ");
    scanf("%d",&A[i]);
  }
    int f=11;
    minSink(A,11);

  for (i = 0; i < arraySize; i++) {
    printf("%d ", A[i]);
  }
  printf("\n");
   getch();
  return 0;
}

