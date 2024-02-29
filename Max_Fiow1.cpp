/*
LANG: C++
*/

#include <stdio.h>
#include <conio.h>
#include <queue>
#define MAX 5000

using namespace std;

int graph[MAX][MAX];
int *parent;
int V, E;
int s, t, fTotal;
int F[MAX][MAX];

int Min(int x ,int y){
    if(x>y) return y;
    else return x;
}
//Breadth First Search
int reachable(int s, int t) {
   queue<int> q;
   int vq,vj,min,i;
   parent=(int *)malloc(sizeof(int)*255);
   for(i=1;i<=s;i++)
   parent[i] = -7;
   q.push(s);
   parent[s]=-1;;
   
   while(!q.empty()) {
      vq=q.front();
      q.pop();
      if(vq==t){
			vj=t;
			min=10001;
			while(parent[vj]!=-1)
			{
                min=Min(min,F[parent[vj]][vj]);
				vj=parent[vj];
			}
			return min;
		}
		for(i=1;i<=V;i++)
		{
			if(F[vq][i]!=0 && parent[i]==-7)
			{
				q.push(i);
				parent[i] = vq;
			}
		}
	}
	return 0;
}

void maxflow() {
   int vj, min;
   fTotal = 0;
   while((min=reachable(s,t))!=0) {
       fTotal += min;
       vj=t;
       while(parent[vj]!=-1)
		{
			F[parent[vj]][vj]-=min;
			F[vj][parent[vj]]+=min;
			vj=parent[vj];
		}
   }
}

bool read() {
   scanf("%d %d",&V,&E);
   s=1;
   t=V;  
   int v1, v2, val;
   for(int i=1; i<=E; i++) {
      scanf("%d %d %d",&v1,&v2,&val);
      graph[v1][v2] = val;
      F[v1][v2] = val;
   }
   return true;
}

int main() {

      read();
      maxflow();
      printf("%d" ,fTotal);   
      getch();
}
