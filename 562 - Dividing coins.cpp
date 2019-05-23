#include<bits/stdc++.h>
#define ll int
using namespace std;
const ll INF = 1e9 + 5;
const ll nax = 5e5 + 5;
int dp[nax] ;
void exact_ans( ll &b, ll total){
	ll temp = 2* b;
	b = abs(total-temp);
	
}
ll do_operation(ll n){
	ll ans =0 ,total=0;
	vector< ll > coins(n);
	for(auto &x : coins){
		scanf("%d",&x);
		total+=x ;
	}
	ll limit = total/2 ;
	memset(dp,0,sizeof(dp));
	dp[0] = 1 ;
	for(auto x : coins){
		for (ll j = limit ; j>= 0 ; j--){
			if(j>=x  && dp[j-x]){
				dp[j] = 1;
			}
		}
	}

	for (ll j = limit ; j> 0 ; j--){
		
		if(dp[j]){
			ans= j;
			break ;
		}
	}

	exact_ans(ans,total);
	return ans ;
}
int main(){
	ll tcase;
	scanf("%d",&tcase);
	while(tcase--){
		ll n;
		scanf("%d",&n);
		ll ans = do_operation(n);
		printf("%d\n",ans);
	}
	
	return 0;
}
