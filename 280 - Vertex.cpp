#include<bits/stdc++.h>
using namespace std;

void solve(int n){
	
	vector<int> graph[n+1];
	while(1){
		int st; 
		scanf("%d",&st);
		if(st==0)	break;
		
		while(1){
			int x ;
			scanf("%d",&x);
			if(x==0)
				break ;
			graph[st].emplace_back(x);
		}
		
	}
	while(1){
		int x;
		scanf("%d",&x);
	
		for(int i = 0 ; i < x ; i++){
			int stnode;
			scanf("%d",&stnode);
			bool visited[n+5]={};
			
			stack<int> stk;
			stk.push(stnode);
			int cnt = 0;
			while(!stk.empty()){
				int top = stk.top();
				stk.pop();
				
				for(auto temp : graph[top]){
					if(visited[temp])
						continue ;
					cnt ++;
					visited[temp] = true;	
					stk.push(temp);
				}
			}
			printf("%d",n-cnt);
			for(int t = 1; t <= n ; t++)
				if(visited[t]==false)
					printf(" %d",t);
			puts("");
		}
		break ;
	}
}

int main(){
	
	int n;
	while(scanf("%d",&n)==1 and n)
		solve(n);
	
	return 0;
}
