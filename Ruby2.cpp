/*
LANG: C++
*/
#include <stdio.h>

int n,price[100000],max_price=0;

int main(){
    int i,x;
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&price[i]);
    i=0; 
    x=i; 
    while(x<n){
        x=x+1;
        if((price[x]-price[i])<0)// ��Ǩ�ͺ��Ҥ�ҷ�������͹˹���ҡ�����������
         i=x;
        else {
            if((price[x]-price[i])>max_price) // ��Ǩ�ͺ��Ҥ�ҡ��÷�����٧�ش���ͻ���
            max_price=price[x]-price[i];   // �纤�Ҷ���ѹ�ҡ����
        }        
    }
    printf("%d\n",max_price);    
}
