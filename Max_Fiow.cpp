/*
LANG: C++
*/

#include<stdio.h>
#include<queue>
#define MAX 150

using namespace std;

int graph[MAX][MAX];
int parent[MAX];
int s, t, fTotal;
int F[MAX][MAX];

int Min(int x ,int y){
    if(x>y) return y;
    else return x;
}

int reachable(int node) {
    int vq,vj,min,i;
	queue<int> q;
	for(i=1;i<=node;i++)
		parent[i]=-7;
	q.push(s);
	parent[s]=-1;
	while(!q.empty())
	{
		vq=q.front();
		q.pop();
		if(vq==t){
			vj=t;
			min=10001;
			while(parent[vj]!=-1){
				min=Min(min,F[parent[vj]][vj]);
				vj=parent[vj];
			}
			return min;
		}
		for(i=1;i<=node;i++){
			if(F[vq][i]!=0 && parent[i]==-7){
				q.push(i);
				parent[i]=vq;
			}
		}
	}
	return 0;
}
int maxflow(int node) {
	int vj,min;
    fTotal=0;
	while((min=reachable(node))!=0)
	{
		fTotal+=min;
		vj=t;
		while(parent[vj]!=-1)
		{
			F[parent[vj]][vj]-=min;
			F[vj][parent[vj]]+=min;
			vj=parent[vj];
		}
	}
}

int read() {
int V,E,v1,v2,val,i,j;
   scanf("%d %d",&V,&E);
   for(i=1;i<=V;i++){
        for(j=1;j<=V;j++) {
		graph[i][j]=0;
		F[i][j]=0;
                             }
         }
   s=1;
   t=V;  
   for(i=1; i<=E; i++) {
      scanf("%d %d %d",&v1,&v2,&val);
      graph[v1][v2] += val;
      F[v1][v2] += val;
   }
  return t;
}

int main()
{       
   
        maxflow(read());
	printf("%d\n",fTotal);
        return 0;
}
