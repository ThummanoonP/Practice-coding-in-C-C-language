/*
LANG: C++
*/

#include<stdio.h>
#include<queue>
#include<iostream>
#define MAX 105

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
void maxflow(int node) {
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
int i,v1[7],v2[7];
        s=1,t=6;
        for(i=2;i<6;i++)
        scanf("%d %d",&v1[i],&v2[i]);
        for(i=2;i<6;i++)
        {
            graph[s][i]=v1[i];
            F[s][i]=v1[i];
            graph[i][t]=v2[i];
            F[i][t]=v2[i];
        }
        for(i=2;i<5;i++)
        {
            if(i==4)
            {
                if(v2[i]-v1[i]>0)
                {
                F[2][4]=v2[i]-v1[i];
                F[3][4]=v2[i]-v1[i];
                F[5][4]=v2[i]-v1[i];
                }
            }
            else
            {
                if(v2[i]-v1[i]>0)
                F[5][i]=v2[i]-v1[i];
            }
        }
  return t;
}

int main()
{       
        maxflow(read());
	printf("%d\n",fTotal);
        return 0;
}