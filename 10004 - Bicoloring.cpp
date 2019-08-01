#include<bits/stdc++.h>
using namespace std;

void solve(int n){
	
	vector<int> graph[n];
	vector<int> color(n,-1);
	int m ; scanf("%d",&m);
	
	for(int i = 0 ; i < m; i++){
		
		int u , v;
		scanf("%d%d",&u,&v);
		graph[u].emplace_back(v);
		graph[v].emplace_back(u);
		
	}
	
	color[0] = 0;
	queue<int> Q;
	Q.push(0);
	
	while(!Q.empty()){
		
		int top = Q.front();
		Q.pop();
		int col = color[top];
		
		for(auto x : graph[top]){
			
			if(color[x]==col){
				puts("NOT BICOLORABLE.");
				return;
			}
			
			if(color[x]==-1)
				Q.push(x);
			
			color[x] = (col==0?1 : 0);
			
			
		}
		
		
	}
	
	puts("BICOLORABLE.");
	return ;
	
}

int main(){
	
	int n;
	while(scanf("%d",&n)==1 and n)
		solve(n);
	
	return 0;
}
