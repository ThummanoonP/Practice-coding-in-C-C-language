#include<stdio.h>
#include<conio.h>
#include<string.h>
#define infinite 99999

int min(int x,int y){
    if(x>y) return y;
    return x;
}

int main(){
int matrix[4][4],i,j,y,z;
char x[4][4][4]={NULL};
char p[4];
 strcpy(p,"RSTU"); 
  printf("Input Matrix 4x4 : \n");
  
  for(i=0;i<4;i++){
    for(j=0;j<4;j++){
       scanf("%d",&matrix[i][j]);
       if(matrix[i][j]==0)
          matrix[i][j]=infinite;
       else {
          x[i][j][0]=p[i];
          x[i][j][1]=p[j];
       }
    }
  }
  
    for(i=0;i<4;i++){
      for(j=0;j<4;j++){
             y=1;                              
             if(x[i][j][y]==p[0]){
               for(z=0;z<4;z++){
                        if(x[0][z][y]!=x[0][z][y-1]){
                          if(x[0][z][y]!=x[i][j][y-1]){
                              if(matrix[i][z]==infinite){
                                  strcpy(x[i][z],x[i][j]);
                                  x[i][z][y+1]=x[0][z][y];                 
                              }                          
                          }
                        }                   
               }
           }
           else if(x[i][j][y]==p[1]){
               for(z=0;z<4;z++){
                        if(x[1][z][y]!=x[1][z][y-1]){
                          if(x[1][z][y]!=x[i][j][y-1]){
                              if(matrix[i][z]==infinite){
                                  strcpy(x[i][z],x[i][j]);
                                  x[i][z][y+1]=x[1][z][y];                 
                              }                          
                          }
                        }          
               }
           }
           else if(x[i][j][y]==p[2]){
                for(z=0;z<4;z++){
                        if(x[2][z][y]!=x[2][z][y-1]){
                          if(x[2][z][y]!=x[i][j][y-1]){
                              if(matrix[i][z]==infinite){
                                  strcpy(x[i][z],x[i][j]);
                                  x[i][z][y+1]=x[2][z][y];                 
                              }                          
                          }
                        }      
               }
           }
           else if(x[i][j][y]==p[3]){
                for(z=0;z<4;z++){

                        if(x[3][z][y]!=x[3][z][y-1]){
                          if(x[3][z][y]!=x[i][j][y-1]){
                              if(matrix[i][z]==infinite){
                                  strcpy(x[i][z],x[i][j]);
                                  x[i][z][y+1]=x[3][z][y];                 
                              }                          
                          }
                        }
               }
           }  
      }
    }
    
  
  for(y=0;y<4;y++){
    for(i=0;i<4;i++){
      for(j=0;j<4;j++){
         matrix[i][j] = min(matrix[i][j],matrix[i][y]+matrix[y][j]);             
      }   
    }
  }  
   
  printf("\n");
  for(i=0;i<4;i++){
    for(j=0;j<4;j++){
        if(matrix[i][j]==infinite) x[i][j][0]='-';;
       printf("%10d ",matrix[i][j]);
    }
    printf("\n");
  }     
    for(i=0;i<4;i++){
    for(j=0;j<4;j++){
       printf("%10s ",x[i][j]);
    }
    printf("\n");
  }
  getch();     
}
