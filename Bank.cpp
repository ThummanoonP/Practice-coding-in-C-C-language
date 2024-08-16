#include<stdio.h>
#include <conio.h>
void menu();
float deposit(float,float);
float withdraw(float,float);
void inquiry(float);


int main()
    {
       float amount,balance=0;
       int type;
       char ch;
       do
         {
            menu();
            scanf("%d",&type);
            if(type==1)
               balance = deposit(amount,balance);           
            else if(type==2)
                     balance = withdraw(amount,balance);
                 else
                     inquiry(balance);
            printf("Do you want to do anything else ?(Y/N) :");
            //flushall(&ch);
            //ch=NULL;
            scanf(" %c",&ch);
         }while(ch!='y'&&ch!='Y');
         //system("PAUSE");
            getch();
    }
void menu()
    {
        printf("******Welcome******\n");
        printf("*1.Deposit        *\n");
        printf("*2.Withdraw       *\n");
        printf("*3.Inquiry        *\n");
        printf("*******************\n");
        printf("\n\nPlease Select : ");       
    }
float deposit(float amount,float balance)
    {
       printf("\nHow much your money to deposit? : ");
       scanf("%f",&amount);
       balance = balance + amount;
       return balance;
    }
float withdraw(float amount,float balance)
    {
       printf("\nHow much your money to withdraw? : ");
       scanf("%f",&amount);
       balance = balance-amount;
       return balance;                 
    }
void inquiry(float balance)
    {
       printf("Your balance is %.2f\n",balance);                 
    }
