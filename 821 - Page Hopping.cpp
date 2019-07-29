#include<bits/stdc++.h>
using namespace std;
const int INF = 1e8 + 10;
int cn = 0;

void solve(int n ,int m){
	int nax = 105;
	int cost[nax][nax];
	
	for(int i = 0 ; i < nax ; i++)
		for(int j= 0 ; j < nax ;j++){
			if(i==j)
				cost[i][j] = 0;
			else
				cost[i][j] = INF;
		}
	
	nax = 0;
	
	while(n or m){
		cost[n][m] = 1;
		scanf("%d%d",&n,&m);
		nax = max({nax,n,m});
	}
	nax ++;
	
	for(int k = 0 ; k < nax ; k++)
		for(int i = 0 ; i < nax ; i++)
			for(int j = 0; j < nax ; j++){
				if(cost[i][j] > cost[i][k] + cost[k][j]){
					cost[i][j] = cost[i][k]+cost[k][j];
				}
			}
	
	
	long long int sum = 0;
	int cnt = 0;
	for(int i = 0; i < nax ; i++){
		for(int j =0; j < nax ;j++){
			if(cost[i][j] != INF and i!=j){
				sum += cost[i][j];
				cnt ++;
			}
		}
		
	}
	double ans = (sum*1.0/cnt);
	printf("Case %d: average length between pages = %.3lf clicks\n",++cn,ans);

	
	
}

int main(){
	int n , m;
	while(scanf("%d%d",&n,&m)==2 and (n or m))
		solve(n,m);
	
	
	return 0;
}
