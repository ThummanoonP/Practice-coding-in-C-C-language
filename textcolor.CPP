//T0908-1
//Fill Color
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>

int i;
char fill[20][30]={
"@@@@@@@@@@@@@@@@@@@@@@@@@@@@",
"@                          @",
"@                          @",
"@              @@@         @",
"@             @   @        @",
"@              @@@         @",
"@@@@@@@@@@@@@@@@@@@@@@@@@@@@"
};

void think(int x,int y){
 if(fill[y][x]==' '){
	gotoxy(x+1,y+1);
	cprintf("*");
	delay(100);
	fill[y][x]='@';
	think(x+1,y);
	think(x,y+1);
	think(x-1,y);
	think(x,y-1);
 }
}
int main(){
 clrscr();
 textcolor(1);
 for(i=0;i<20;i++){
	printf("%s\n",fill[i]);
 }
 textcolor(62);
 think(1,1);
 getch();
 return 0;
}