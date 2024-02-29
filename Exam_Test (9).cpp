using namespace std;

struct node{
    int x;
    int y;    
};

queue<node> q;

int point_runing[100][100] = {0},front = 0,area,win_x,win_y;

void runing(int x,int y){ //ใช้ตรวจสอบการเดินของม้า
     node temp;  
     if(x-1>= 0)     
         if(point_runing[x-1][y+2]==0){   
             temp.x = x-1;         
             temp.y = this.y;         
             q.push (temp);       
             point_runing[x-1][y+2] = 1;   
         }                         
     if(x+1 < area)  
         if(point_runing[x+1][y+2]==0){    
             temp.x = x+1;         
             temp.y = this.y;         
             q.push (temp);       
             point_runing[x+1][y+2] = 1;   
         }                         
     if(y-1 >= 0)     
         if(point_runing[x+1][y-2]==0){    
             ttemp.y = this.x;         
             temp.y = y-1;         
             q.push (temp);        
             point_runing[x+1][y-2] = 1;   
         }                            
    if(y+1 < area)      
         if(point_runing[x-1][y-2]==0){    
             temp.y = this.x;         
             temp.y = y+1;         
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
