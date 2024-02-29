/*
LANG: C++

*/
#include<stdio.h>
#include<queue>
using namespace std;
#define INF  10000
int flow[102][102],cap[102][102];
int path[102];
int t,sink;
int BFS(int node) {
	int i,item,cf;
	queue<int> q;
	for(i=1;i<=node;i++)
		path[i]=-100;
	q.push(t);
	path[t]=-1;
	while(!q.empty())
	{
		item=q.front();
		q.pop();
		if(item==sink){
			i=sink;
			cf=INF;
			while(path[i]!=-1)
			{
				if(cf>flow[path[i]][i])
					cf=flow[path[i]][i];
				i=path[i];
			}
			return cf;
		}
		for(i=1;i<=node;i++)
		{
			if(flow[item][i]!=0 && path[i]==-100)
			{
				q.push(i);
				path[i]=item;
			}
		}
	}
	return 0;
}
int maxflow(int node) {
	int i,cf,totalflow=0;
	while((cf=BFS(node))!=0)
	{
		totalflow+=cf;
		i=sink;
		while(path[i]!=-1)
		{
			flow[path[i]][i]-=cf;
			flow[i][path[i]]+=cf;
			i=path[i];
		}
	}
	return totalflow;
}
int read() {
int node,edge,u,v,c,i,j;
        scanf("%d %d",&node,&edge);
  		for(i=1;i<=node;i++){
                             for(j=1;j<=node;j++) {
			                                      cap[i][j]=0;
			                                      flow[i][j]=0;
                             }
         }
         t=1;
         sink=node;
         for(i=1;i<=edge;i++) {
			scanf("%d %d %d",&u,&v,&c);
			cap[u][v]+=c;
			flow[u][v]+=c;
        }
  return t;
}
int main()
{
        
        printf("%d\n",maxflow(node));
        return 0;
}
