#include <stdio.h>
#include <string.h>
int main()
{
   int n,a,b,c=3;
   long long count=1;
   char s[40][3];
   scanf("%d",&n);
	for(a=0;a<n;a++)
   {
	scanf(" %[^\n]",s[a]);
   }
   for(a=0;a<n;a++)
   {
	  c=3;
	  for(b=0;b<3;b++)
	  {
		 if(b==0){
		 if(s[a][b]==s[a][b+1])
		 {
		  c--;
		 }
		 if(s[a][b]==s[a][b+2]) {
		   c--;
		   break; }
		 }
		 else if(b==1)
		 {
			if(s[a][b]==s[a][b+1])
			c--;
		 }
	  }
	 count=count*c;
   }
   printf("%I64d",count);
   return(0);
}