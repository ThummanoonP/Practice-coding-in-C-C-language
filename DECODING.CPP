#include <stdlib.h>
#include <stdio.h>
#include<conio.h>
#include<string.h>
#include<time.h>

int main() {
   char pass[100],b[100],code[100],ac[11]="the_ultima";
   int i,j,z,x,m=0,input_num,count=0,ptr;
  // clrscr();
   printf("Input Password : ");
   gets(pass);
   strcpy(b,pass);
   i=strlen(pass);
   //clrscr();
   m=0;
while(m==0){
     //clrscr();
     printf("Code = %s\nEncryption = 1\nExit = 0\nNumber Input : ",pass);
     scanf("%d",&input_num);
     if(input_num==1) {
     for(j=0;j<i;j++)  {
	 if(pass[j]>='a'&&pass[j]<='z')  pass[j]=(((pass[j]%'a')+rand())%26)+'a';
	 else if(pass[j]>='A'&&pass[j]<='Z')   pass[j]=(((pass[j]%'A')+rand())%26)+'A';  }
     for(j=0;j<i-1;j+=2)
	{
	    x=pass[j];
	    pass[j]=pass[j+1];
	    pass[j+1]=x;
	}
       m=0; }
   else if(input_num==0){
  // clrscr();
   printf("Code = %s",pass);
   m=1;  } }
   m=0;
   while(m==0){
       printf("\nEnter Code : ");
       gets(code);
       ptr=strcmp(code,ac);
       if(ptr==0)
       {
	  printf("Code = %s\nYou Enter = %s",b,ac);
	  m=1;
       }
       else {
       i=strlen(code);
       ptr=strcmp(code,b);
       if(ptr==0){
	 m=1;
	 printf("Code = %s\nYou Enter = %s ",b,code); }
       else if(ptr!=0) {
	   for(j=0;j<i;j++){
		count=0;
		for(z=0;z<i;z++){
		    if(code[j]==b[z]) {
			 count++; } }
		    printf("%c = %d\n",code[j],count); } } } }
getch(); 
return 0;}
