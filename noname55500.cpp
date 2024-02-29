 /*
LANG: C++
TASK: mobiles
*/
#include<stdio.h>
#include<conio.h>
void main()
{
  int k,m;
  float data[5000],f[5000]={0},p[5000],q[5000]={0},a,r,b[5000];
  int num,con;
  scanf("%ld" ,&k);
  for(num=0;num<k;num++)
  {
	  scanf(" %d" ,&q[num]);
	  scanf(" %d" ,&p[num]);
	  data[num]=q[num]/p[num];
  }
  for(num=0;num<k;num++)
	  {
		  for(con=k-1;con>num;con--)
		  {
			  if(data[num]>data[con])
			  {
				  a=q[num];
				  q[num]=q[con];
				  q[con]=a;
				  r=data[num];
				  data[num]=data[con];
				  data[con]=r;
			  }
		  }
	  }
  scanf("%d" ,&m);
  for(num=0;num<m;num++)
  {
	  scanf(" %d" ,&b[num]);
  }
  for(num=0;num<m;num++)
  {
	  for(con=0;con<k;con++)
	  {
		 if(b[num]==0)
		 {
			break;
		 }
		 else if(q[con]==0)
		 {}
		 else if(b[num]-q[con]>=0)
		 {
			f[num]=f[num]+(q[con]*data[con]);
			b[num]=b[num]-q[con];
			q[con]=0;
		 }
		 else if(q[con]-b[num]>0)
		 {
			f[num]=f[num]+(b[num]*data[con]);
			q[con]=q[con]-b[num];
			b[num]=0;
		 }
	  }
  }
  clrscr();
  for(num=0;num<m;num++)
  {
		 printf("\n%.3f",f[num]);
  }
}