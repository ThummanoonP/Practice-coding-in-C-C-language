#include <stdio.h>

int main(){
   int n,a,b,c,num[100][100],sum1=0,sum2=0,sum3=0,sum4=0,nr[100],nd[100];
   scanf("%ld",&n);
   for(a=0;a<n;a++) {
	 for(b=0;b<n;b++) {
	   scanf("%d",&num[a][b]);
	  }
   }
	   for(a=0;a<n;a++) {
		  for(b=0;b<n;b++) {
			  sum1=sum1+num[a][b];
			  sum2=sum2+num[b][a];
		  }
		  sum3=sum3+num[a][a];
		  sum4=sum4+num[a][(n-1)-a];
		  nr[a]=sum1;
		  sum1=0;
		  nd[a]=sum2;
		  sum2=0;
	   }
   for(a=1;a<n;a++) {
	 if(nr[a]!=nr[a-1]||nd[a]!=nd[a-1]) {
		 printf("No");
		 c=0;
		 break;
	 }
	 c++;
   }
   if(c!=0)  {
	  if(sum3==sum4&&sum4==nr[0]&&nr[0]==nd[0])
	   printf("Yes");
   }
   return(0);
}