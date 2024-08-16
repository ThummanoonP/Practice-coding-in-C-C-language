#include <stdio.h>
#include <conio.h>

int digit2word(char output[],char input[])
{
   int i,j,l=0;
   for(i=0;1==1;i++) if(input[i] == '\0')  break;
    i--;
     for(j=0;j<=i;j++){                  
         if(input[j]=='0'){
            output[l++]='z';
            output[l++]='e';
            output[l++]='r';
            output[l++]='o';
         }
         else if(input[j]=='1'){
            output[l++]='o';
            output[l++]='n';
            output[l++]='e';
         }
         else if(input[j]=='2'){
           output[l++]='t';
           output[l++]='w';
           output[l++]='o';
        }
        else if(input[j]=='3'){
           output[l++]='t';
           output[l++]='h';
           output[l++]='r';
           output[l++]='e';
           output[l++]='e';
        }
        else if(input[j]=='4'){
           output[l++]='f';
           output[l++]='o';
           output[l++]='u';
           output[l++]='r';
        }
        else if(input[j]=='5'){
           output[l++]='f';
           output[l++]='i';
           output[l++]='v';
           output[l++]='e';
        }
        else if(input[j]=='6'){
           output[l++]='s';
           output[l++]='i';
           output[l++]='x';
        }
        else if(input[j]=='7'){
           output[l++]='s';
           output[l++]='e';
           output[l++]='v';
           output[l++]='e';
           output[l++]='n';
       }
       else if(input[j]=='8'){
           output[l++]='e';
           output[l++]='i';
           output[l++]='g';
           output[l++]='h';
           output[l++]='t';
       }
       else if(input[j]=='9'){
           output[l++]='n';
           output[l++]='i';
           output[l++]='n';
           output[l++]='e';
     }
     else {
        output[l++]=input[j];
     }
  }
  output[l]='\0';
  return 0;
}

int main()
{  char input[80],output[80];

   printf("Input: ");
   gets(input);
   digit2word(output,input);
   printf("Before: %s\n",input);
   printf(" After: %s\n",output);
   getch();
   return 0;
}
