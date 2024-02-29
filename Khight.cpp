/*
LANG: C++
*/

#include <stdio.h>
#include <queue>

using namespace std;

struct node{
    int x;
    int y;    
};

queue<node> q;

int point_runing[100][100] = {0},front = 0,area,win_x,win_y;

void runing(int x,int y){ //ใช้ตรวจสอบการเดินของม้า
     node temp;  
     if(x+2 < area && y+1 < area)   
         if(point_runing[x+2][y+1]==0){    
             temp.x = x+2;         
             temp.y = y+1;         
             q.push (temp);        
             point_runing[x+2][y+1] = 1;   
         } 
     if(x+2 < area && y-1 >= 0) 
         if(point_runing[x+2][y-1]==0){    
             temp.x = x+2;         
             temp.y = y-1;         
             q.push (temp);       
             point_runing[x+2][y-1] = 1;   
         }
     if(x-2 >= 0 && y+1 < area)   
         if(point_runing[x-2][y+1]==0){    
             temp.x = x-2;         
             temp.y = y+1;         
             q.push (temp);      
             point_runing[x-2][y+1] = 1;   
         }
     if(x-2 >= 0 && y-1 >= 0)  
         if(point_runing[x-2][y-1]==0){    
             temp.x = x-2;         
             temp.y = y-1;        
             q.push (temp);       
             point_runing[x-2][y-1] = 1;   
         }
     if(x-1 >= 0 && y+2 < area)     
         if(point_runing[x-1][y+2]==0){   
             temp.x = x-1;         
             temp.y = y+2;         
             q.push (temp);       
             point_runing[x-1][y+2] = 1;   
         }                         
     if(x+1 < area && y+2 < area)  
         if(point_runing[x+1][y+2]==0){    
             temp.x = x+1;         
             temp.y = y+2;         
             q.push (temp);       
             point_runing[x+1][y+2] = 1;   
         }                         
     if(x+1 < area && y-2 >= 0)     
         if(point_runing[x+1][y-2]==0){    
             temp.x = x+1;         
             temp.y = y-2;         
             q.push (temp);        
             point_runing[x+1][y-2] = 1;   
         }                            
    if(x-1 >= 0 && y-2 >= 0)      
         if(point_runing[x-1][y-2]==0){    
             temp.x = x-1;         
             temp.y = y-2;         
             q.push (temp);        
             point_runing[x-1][y-2] = 1;   
         }                         
}

void path(int x,int y){ //ใช้เช็คว่ามามาเธอไปกี่ครั้งถึงจะถึงเส้นชัย
    int i,end;
    front = 0;
    node temp;    
    temp.x = x;
    temp.y = y;      
    q.push(temp); 
    point_runing[x][y] = 1; 
    while(temp.x != win_x || temp.y != win_y){    
        end = q.size();
        for( i = 0;i < end ;i++ ){
             temp = q.front(); 
             q.pop();
             if(temp.x == win_x && temp.y == win_y) 
             break;
             runing(temp.x,temp.y); //เรียกตรวจสอบทางเดินม้า       
        }
        front++;
    }
    front--;
}

int main(){

    int n_kinght,arr[100][3] = {0},i,j,z;
    scanf("%d",&area);
    scanf("%d %d",&win_x,&win_y);
    scanf("%d",&n_kinght);
    for(i = 0; i < n_kinght; i++){
        scanf("%d %d",&arr[i][0],&arr[i][1]);
        path(arr[i][0],arr[i][1]);
        arr[i][2] = front;
        for(j = 0; j < area;j++)
            for(z = 0; z < area;z++)
               point_runing[j][z] = 0;
               while(!q.empty()){ 
                       q.pop();  //เคลียค่าQ
                       }
    }  
    for(i = 0; i < n_kinght; i++)
        printf("%d\n",arr[i][2]);               
}
