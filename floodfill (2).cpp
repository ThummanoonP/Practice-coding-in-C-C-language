/*
LANG: C++
*/

#include<stdio.h>
#include<conio.h>

int n=8,area[8][8]={0};
 
 /*��ǹ�ͧ��õ�Ǩ�ͺ���ŧ��*/
int floodfill(int newcolor,int r,int c){   //newcolor���������ŧ,r Row�ͧarea,c Colum�ͧ Area,fill�����
    
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
    int r,c,i,j; //r Row�ͧarea,c Colum�ͧ Area,newcolor���������ŧ,i���j��ǹloop
    scanf("%d %d",&r,&c);
    for(i=0;i<n;i++){
      for(j=0;j<n;j++)  // �Ѻ��������Chareter ������S
         area[i][j]=0;  // �纤������area ���ŧ�ҡChareter���Integer
    }
    floodfill(0,r,c);
    for(i=0;i<n;i++){
      for(j=0;j<n;j++) 
         printf("%d",area[i][j]);// �����area���ŧ����������
      printf("\n");
      } 
      getch();
}
