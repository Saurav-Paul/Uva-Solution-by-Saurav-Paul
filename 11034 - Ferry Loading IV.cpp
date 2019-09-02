				/*Saurav Paul*/
#pragma GCC optimize("O3")
#include<bits/stdc++.h>
#define loop(i,a,b)           for(ll i=a;i<=b;++i)
#define boost		          ios_base::sync_with_stdio(0);
#define eb                    emplace_back
#define itoc(c)               ((char)(((int)'0')+c))
#define ctoi(c)               ((int)(((int)c)-'0'))
#define all(p)                p.begin(),p.end()
#define bug()				  debug() <<

using namespace std;
///////////////////////

#define sim template < class c
#define ris return * this
#define dor > debug & operator <<
#define eni(x) sim > typename \
enable_if<sizeof dud<c>(0) x 1, debug&>::type operator<<(c i) {
sim > struct rge { c b, e; };
sim > rge<c> range(c i, c j) { return rge<c>{i, j}; }
sim > auto dud(c* x) -> decltype(cerr << *x, 0);
sim > char dud(...);
struct debug {
#ifdef PAUL
~debug() { cerr << endl; }
eni(!=) cerr << boolalpha << i; ris; }
eni(==) ris << range(begin(i), end(i)); }
sim, class b dor(pair < b, c > d) {
  ris << "(" << d.first << ", " << d.second << ")";
}
sim dor(rge<c> d) {
  *this << "[";
  for (auto it = d.b; it != d.e; ++it)
    *this << ", " + 2 * (it == d.b) << *it;
  ris << "]";
}
#else
sim dor(const c&) { ris; }
#endif
};
#define dbg(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "

#ifdef ONLINE_JUDGE
#define cerr if (false) cerr
#endif
void time(){
	#ifdef PAUL
		cerr << "\nTime elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
	#endif
}
///////////////////////
const int INF = 1e9 + 99;
using ll = long long int ;
using pii = pair<ll,string>;
using vec = vector<int> ;

void solve(){
	ll l , m; cin >> l >> m;
	l *= 100;
	
	vector<ll> lft,rght;
	
	for(int i = 0; i < m ; i++){
		ll weight;
		string s;
		cin>> weight >> s;
		if(s=="left")
			lft.eb(weight);
		else
			rght.eb(weight);
	}
	
	bool leftside = true;
	
	int	lsz = lft.size(),rsz = rght.size();
	int lftpos = 0, rghtpos = 0;
	ll cnt = 0;
	
	while(m){
		ll weight = 0;
		if(leftside){
			while(lftpos < lsz and weight <= l){
				if(weight+lft[lftpos]<=l)
					weight += lft[lftpos],m--;
				else
					break ;
				lftpos ++;
			}
		}
		else{
			while(rghtpos < rsz and weight <= l){
				if(weight + rght[rghtpos] <= l)
					weight += rght[rghtpos],m--;
				else
					break;
				rghtpos ++;
			}
		}
		leftside ^= 1;
		cnt ++;
	}
	
	cout << cnt << endl;
}

int main()
{
	boost;
	int t; cin >> t;
	
	for(int i = 0 ; i < t ; i++){
		solve();
	}
	//~ time();
    return 0;
}
