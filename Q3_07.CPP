//Tummanoon Parnichagan
//PROBLEM 07
#include <stdio.h>
#include <conio.h>
#define arraySize 2200
typedef struct{
   float time;
   int num;
   char id[13];
}Data;

void SortingID(Data pData[], int size) {
  int i,j;
  Data x;
  for(i=0;i<size;i++)
    { 
             for(j=i+1;j<size;j++)
               {       
                  if(pData[i].time>pData[j].time)
                    {
                        x=pData[i];
                        pData[i]=pData[j];
                        pData[j]=x;
                    } 
               }
    }
  for(i=0;i<size;i++)
    { 
             for(j=i+1;j<size;j++)
               {       
                  if(pData[i].num<pData[j].num&&pData[i].time==pData[j].time)
                    {
                        x=pData[i];
                        pData[i]=pData[j];
                        pData[j]=x;
                    } 
               }                        
    } 
}

int main() {
  Data data[arraySize];
  int n;
  int i;
  scanf("%d",&n);
  for (i=0; i <  n; i++) {
       printf("Enter Time: ");
       scanf("%f", &data[i].time);
       printf("Enter Number: ");
       scanf("%d", &data[i].num);
       printf("Enter ID: ");
       scanf("%s", data[i].id);
     }
  SortingID(data,n);
  for (i=0; i <  n; i++) printf(" ID : %s \n", data[i].id);
  getch();
  return 0;
}
