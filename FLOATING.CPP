#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{

   char a[1112];
   int n,f,p,num[100],o=0;
   printf("Entet Floating point number : ");
   scanf("%s",a);
   n=strlen(a);
   if(a[0]=='+'||a[0]=='-')
	 {
		 printf("\nSign : %c",a[0]);
		 for(f=0;f<=n;f++)
		 {
			 if(a[f]=='.')
			 {
				p=f+1;
				break;
			 }
		 }
		 for(f=p;f<=n;f++)
		 {
		   num[o]=a[f];
		   o++;
		 }
	 printf("\nNumber before . : ");
	 for(f=1;f<p-1;f++)
	 {
		printf("%c",a[f]);
	 }
	 printf("\nNumber after . : ");
		 for(f=0;f<o;f++)
		 {
		 printf("%c",num[f]);
		 }
	 }
	 else
	 {
	  printf("Sign : ");
		 for(f=0;f<=n;f++)
		 {
			 if(a[f]=='.')
			 {
				p=f+1;
				break;
			 }
		 }
		 for(f=p;f<=n;f++)
		 {
		   num[o]=a[f];
		   o++;
		 }
	 printf("\nNumber before . : ");
	 for(f=0;f<p-1;f++)
	 {
		printf("%c",a[f]);
	 }
	 printf("\nNumber after . : ");
		 for(f=0;f<o;f++)
		 {
		 printf("%c",num[f]);
		 }
	 }
   getch();
   return 0;
}
