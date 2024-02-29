#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*int *array012(int n)
{
   int *a; 	  
   int i; 
   a = (int *)malloc(sizeof(int)*n);
   /*if (a == NULL)
     exit(1);
   for(i=0; i<n ;i++)
     a[i] = 'A'+(i%26);
   return a;
}*/

int main()
{
  int n, i, *A;
  scanf("%d", &n);
  A = (int *)malloc(sizeof(int)*n);
  //A = array012(n);
  for(i=0;i<n;i++)
    printf("%c\n", A[i]);
  free(A);
  getch();
  return 0;
}
