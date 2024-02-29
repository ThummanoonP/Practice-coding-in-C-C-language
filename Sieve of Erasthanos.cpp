#include <stdio.h>
#define arraySize 98
#include <conio.h>


int main() {

  int i, j;
  int A[arraySize] = {0};

  for (i = 2; i < arraySize; i++)
    A[i] = 1;

  for (i=2;i<(arraySize/2);i++) {
for(j=2;j<arraySize;j++){
    if(j%i==0&&j!=i) A[j]=0;      
}
}

for (i = 2; i < arraySize; i++)  if(A[i]==1) printf("%d ",A[i]);

  printf("\n");
   getch();
  return 0;
}
