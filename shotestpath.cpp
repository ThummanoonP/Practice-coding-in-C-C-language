/*
LANG: C
*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
#define infinite 99999.


int min(int x,int y){
    if(x>y) return y;
    return x;
}

int main(){
 int matrix[500][500],i,n,m,z,j,k;
 scanf("%d %d",&n,&m);
 for(i=0;i<n;i++)
   for(z=0;z<n;z++)
     matrix[i][z]=infinite;
 for(i=0;i<m;i++){
    scanf("%d %d %d",&j,&z,&k);
    matrix[j-1][z-1]=k;
 }   
   for(z=0;z<n;z++){
    for(i=0;i<n;i++){
      for(j=0;j<n;j++){
         matrix[i][j] = min(matrix[i][j],matrix[i][z]+matrix[z][j]);             
      }   
    }
  }
  for(i=0;i<n;i++){
       if(matrix[0][i]==infinite)
          printf("%d\n",0);
       else printf("%d\n",matrix[0][i]);

  } 
  getch();  
}
