/*
LANG: C++
*/
#include<stdio.h>
#include<iostream>
#include<queue>
using namespace std;
#define INF  10000
int flow[102][102],cap[102][102];
int path[102];
int t,sink;
int BFS(int node)
{
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
		if(item==sink)
		{
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

int maxflow(int node)
{
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

int main()
{

        int i,s[7],d[7];
        t=1,sink=6;
        for(i=2;i<6;i++)
        scanf("%d %d",&s[i],&d[i]);
        for(i=2;i<6;i++)
        {
            cap[t][i]=s[i];
            flow[t][i]=s[i];
            cap[i][sink]=d[i];
            flow[i][sink]=d[i];
        }
        for(i=2;i<5;i++)
        {
            if(i==4)
            {
                if(d[i]-s[i]>0)
                {
                flow[2][4]=d[i]-s[i];
                flow[3][4]=d[i]-s[i];
                flow[5][4]=d[i]-s[i];
                }
            }
            else
            {
                if(d[i]-s[i]>0)
                flow[5][i]=d[i]-s[i];
            }
        }
    printf("%d\n",maxflow(sink));
    return 0;
}
