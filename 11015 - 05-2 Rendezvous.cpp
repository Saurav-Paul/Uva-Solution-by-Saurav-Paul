#include<bits/stdc++.h>
using namespace std;
const int INF = 1e9 + 90;
int cn = 0;

void solve(int n, int m){
	
	vector<string> name(n+1);
	
	for(int i = 1 ; i <= n ; i++){
		cin >> name[i];
	}
	int dist[n+1][n+1];
	for(int i = 0 ; i <= n ; i++ ){
		for(int j=0 ; j <= n ; j++){
			if(i==j)
				dist[i][j] = 0;
			else
				dist[i][j] = INF;
		}
	}
	
	for(int i= 1; i <=m ; i++){
		
		int u , v, cost;
		cin >> u >> v >> cost;
		dist[u][v]=cost;
		dist[v][u]=cost;
		
	}
	
	
	for(int k =1 ; k <= n ; k++){
		for(int i = 1; i <=n ; i++){
			for(int j = 1; j <= n; j++){
				if(dist[i][j] > dist[i][k] + dist[k][j]){
					dist[i][j] = dist[i][k] + dist[k][j] ;
				}
			}
		}
	}
	
	int min = INF , id = 1;
	for(int i = 1; i <= n; i++){
		int temp = 0;
		for(int j= 1 ; j <= n ; j++){
			temp += dist[i][j];
		}
		if(temp < min){
			min = temp;
			id = i;
		}
	}
	
	cout<<"Case #"<<++cn<<" : "<<name[id] << endl;
	
}

int main(){
	
	ios_base::sync_with_stdio(false);
	int n , m;
	while(cin>> n >> m and (n || m))
		solve(n,m);
	
	return 0;
}
