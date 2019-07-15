				/*Saurav Paul*/
#pragma GCC optimize("O3")
#include<bits/stdc++.h>
using namespace std;
using ll = long long int ;

bool find_winner(ll n){
	ll p = 1;
	for(ll i = 1; ; i++){
		if(i&1)
			p *=9;
		else
			p*=2;
		if(p >= n)
			return (i&1);
	}
}

int main()
{
	ll n;
	while(scanf("%lld",&n)==1){
		
		puts(find_winner(n) ?"Stan wins." : "Ollie wins.");
		
	}
	
    return 0;
}
