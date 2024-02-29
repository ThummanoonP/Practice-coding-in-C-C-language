//Tummanoon Panichagan
//PROBLEM 07
#include <stdio.h>
#include <conio.h>

int a,b,c,d=0,e=0;
int j=0;
char s[37]="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int p[10000];
void base(int m,int o,int x)
{
  if(m!=0){
	if(m%p[x]==0)
	 {
		  o++;
		  m=m/p[x];
		  base(m,o,x);
	 }
	else
	 {
		  x++;
		  printf("%s",s[o]);
		  base(m,o,x);
	 }
  }
}

int main(){

  scanf("%d",&a);
  for(b=1;b<=a;b++) {
	   d=0;
	  for(c=2;c<=b;c++) {
		if(b%c==0) {
		  d++;
		   if(d>1)
			 break;
		}
	  }
	if(d==1) {
	   p[e]=b;
	   e++;
	}
  }

  base(a,0,0);
  getch();
  return 0;
}
