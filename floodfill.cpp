/*
LANG: C++
*/

#include<stdio.h>
#include<conio.h>

int n,area[100][100]={0};
 
 /* Ë«π¢Õß°“√µ√«® Õ∫·≈–≈ß ’*/
int floodfill(int newcolor,int r,int c,int fill){   //newcolor ’„À¡Ë∑’Ë®–≈ß,r Row¢Õßarea,c Colum¢Õß Area,fill ’‡¥‘¡
    
      if((r<0||c<0||r>n||c>n)||((area[r][c])!=fill)) 
        {return 0;} 
      area[r][c]=newcolor; 
      floodfill(newcolor+1,r-1,c,fill);
      floodfill(newcolor+1,r,c-1,fill);
      floodfill(newcolor+1,r+1,c,fill);
      floodfill(newcolor+1,r,c+1,fill);
      //if(area[r][c]==fill)
         //area[r][c]=newcolor;
}

int main(){
    int r,c,newcolor,i,j; //r Row¢Õßarea,c Colum¢Õß Area,newcolor ’„À¡Ë∑’Ë®–≈ß,i·≈–j„™Ë«πloop
    char s[100];
    scanf("%d",&n);
    scanf("%d",&newcolor);
    scanf("%d %d",&r,&c);
    for(i=0;i<n;i++){
      scanf("%s",s);
      for(j=0;j<n;j++)  // √—∫§Ë“¡“‡ªÁœChareter ‡°Á∫‰«È„πS
         area[i][j]=s[j]-'0';// ‡°Á∫§Ë“‰«È„πarea ‚¥¬·ª≈ß®“°Chareter‰ª‡ªÁπInteger
    }
    floodfill(newcolor,r,c,area[r][c]);
    for(i=0;i<n;i++){
      for(j=0;j<n;j++) 
         printf(" %d",area[i][j]);// æ‘¡æÏarea∑’Ë≈ß ’„À¡Ë·≈È«
      printf("\n");
      } 
      getch();
}
