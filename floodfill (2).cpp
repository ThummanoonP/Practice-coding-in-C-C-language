/*
LANG: C++
*/

#include<stdio.h>
#include<conio.h>

int n=8,area[8][8]={0};
 
 /* Ë«π¢Õß°“√µ√«® Õ∫·≈–≈ß ’*/
int floodfill(int newcolor,int r,int c){   //newcolor ’„À¡Ë∑’Ë®–≈ß,r Row¢Õßarea,c Colum¢Õß Area,fill ’‡¥‘¡
    
      if(r<0&&c<0&&r>n&&c>n) 
        { 
      area[r][c]=newcolor; 
      floodfill(newcolor+1,r-1,c);
      floodfill(newcolor+1,r,c-1);
      floodfill(newcolor+1,r+1,c);
      floodfill(newcolor+1,r,c+1);
      }else return 0;
}


int main(){
    int r,c,i,j; //r Row¢Õßarea,c Colum¢Õß Area,newcolor ’„À¡Ë∑’Ë®–≈ß,i·≈–j„™Ë«πloop
    scanf("%d %d",&r,&c);
    for(i=0;i<n;i++){
      for(j=0;j<n;j++)  // √—∫§Ë“¡“‡ªÁœChareter ‡°Á∫‰«È„πS
         area[i][j]=0;  // ‡°Á∫§Ë“‰«È„πarea ‚¥¬·ª≈ß®“°Chareter‰ª‡ªÁπInteger
    }
    floodfill(0,r,c);
    for(i=0;i<n;i++){
      for(j=0;j<n;j++) 
         printf("%d",area[i][j]);// æ‘¡æÏarea∑’Ë≈ß ’„À¡Ë·≈È«
      printf("\n");
      } 
      getch();
}
