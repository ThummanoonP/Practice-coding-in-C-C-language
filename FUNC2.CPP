#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

void link_string(char[],char[]);
int reverse_string(char[],int);
void display_length(int,int,int);
int lenfull;

main()
{
   char name[11],lname[16];
   clrscr();
   do{
      printf("Enter Name : ");
      scanf("%s",name);
      if(strlen(name)>10)
	 printf("Invalid Input ....\n");
   }while(strlen(name)>10);
   do{
      printf("Enter Surname : ");
      scanf("%s",lname);
      if(strlen(lname)>15)
	 printf("Invalid Input ....\n");
   }while(strlen(lname)>15);
   link_string(name,lname);
   display_length(strlen(name),strlen(lname),lenfull);
   getch();
   return 0;
}

int reverse_string(char full[30],int longg)
{
   int i;
   printf("reverse name : ");
   for(i=longg;i>=0;i--)
      printf("%c",toupper(full[i]));
   printf("\n");
   return longg;
}

void link_string(char fname[11],char sname[16])
{
   char fullname[30];
   int i,flong,namelong;
   printf("Full name : ");
   strcpy(fullname,"KHUN ");
   strcat(fullname,fname);
   strcat(fullname," ");
   strcat(fullname,sname);
//   printf("%s",fullname);
   flong=strlen(fullname);
   for(i=0;i<=flong;i++)
       printf("%c",toupper(fullname[i]));
   printf("\n");
   lenfull=reverse_string(fullname,flong);
   return;
}

void display_length(int name,int lname,int fullname)
{
   printf("Name length = %d\n",name);
   printf("Surname length= %d\n",lname);
   printf("Full name length = %d\n",fullname);
   return;
}