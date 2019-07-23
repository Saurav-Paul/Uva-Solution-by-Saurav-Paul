#include<bits/stdc++.h>
using namespace std;

void solve(int node,int edges){
	
	vector<int> indegree(node+1);
	queue<int> Q;
	vector<int> graph[node+1];
	
	for(int i = 1; i <= edges ; i++){
		int u , v;
		scanf("%d%d",&u,&v);
		graph[u].emplace_back(v);
		indegree[v] ++;
		
	}
	for(int i= 1; i <= node ; i++)
		if(indegree[i]==0)
			Q.push(i);
	
	while(!Q.empty()){
		
		int top = Q.front();
		Q.pop();
		printf("%d ",top);
		
		for(auto x : graph[top]){
			indegree[x] --;
			if(indegree[x]==0)
				Q.push(x);
		}
		
	}
	puts("");
}


int main(){
	int n, m;
	
	while(scanf("%d%d",&n,&m)==2 && (n || m))
		solve(n,m);
	
	return 0;
}
