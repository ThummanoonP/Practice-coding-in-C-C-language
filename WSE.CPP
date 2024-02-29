#include <stdio.h>
#include <conio.h>
#include <string.h>
struct data
{
	int id[5];
	char name[10];
};
data doc[5];

void main()
{
   int a,b,d[5],e,f;
   char s[10];
   char v[5][20]={{"dog"},{"cat"},{"rat"},{"bat"},{"egg"}};
   clrscr();
   for(a=0;a<4;a++){
	  if(a==0){
		 for(b=0;b<5;b++){
			 d[b]=1;
			 doc[a].id[b]=(d[b]*100)/5;
		 }
		 strcpy(doc[a].name, "doc1.doc");
	  }
	  else if(a==1){
			 for(b=0;b<5;b++){
			 if(b==0) d[b]=3;
			 else if(b==1) d[b]=1;
			 else d[b]=0;
			 doc[a].id[b]=(d[b]*100)/4;
		 }
		 strcpy(doc[a].name, "doc2.html");
	  }
	  else if(a==2){
		 for(b=0;b<5;b++){
			 if(b==0) d[b]=1;
			 else if(b==1) d[b]=3;
			 else if(b==2) d[b]=1;
			 else d[b]=0;
			 doc[a].id[b]=(d[b]*100)/5;
		 }
		 strcpy(doc[a].name, "doc3.pdf");
	  }
	 else if(a==3){
		 for(b=0;b<5;b++){
			 if(b==0) d[b]=1;
			 else d[b]=0;
			 doc[a].id[b]=(d[b]*100)/1;
		 }
		 strcpy(doc[a].name, "doc4.rtf");
	  }
   }
	 scanf("%s",s);
	 int c=0;
	 for(a=0;a<5;a++) {
	   if(strcmp(s,v[a])==0) {
		  for(e=0;e<5;e++)
			  {
				 for(f=4;f>e;f--)
					{
					   if((doc[e].id[c])<(doc[f].id[c]))
						   {
							  doc[4]=doc[e];
							  doc[e]=doc[f];
							  doc[f]=doc[4];
						   }
					 }
			   }
	   for(b=0;b<4;b++) {
			   if(doc[b].id[a]!=0){
				 printf("%s\n",doc[b].name);
			   }
			}
		  break;
		 }
	   else if(a==4&&a){
	   printf("not! Word");
	   break;
	   }
	   else c++;
	 }
		 getch();
}