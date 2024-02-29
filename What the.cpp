#include<stdio.h> 

int main(){
    int a[3][2],b[2][3],c[3][3]={{0,0,0},{0,0,0},{0,0,0}},i,j,k;
    for(i=0;i<3;i++)
     for(j=0;j<2;j++)
       scanf("%d",&a[i][j]);
       
    for(i=0;i<2;i++)
     for(j=0;j<3;j++)
       scanf("%d",&a[i][j]);
       
       
    for(i=0;i<3;i++){
      for(j=0;j<2;j++){
        for(k=0;k<3;k++){
            c[i][k]=c[i][k]+(a[i][j]*b[j][k]);
        }   
      }
    }
     for(i=0;i<3;i++){
       for(j=0;j<3;j++){
          printf("%d",c[i][j]);
          }
       printf("\n");
       }
       
}
