#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define loop(i,a,b)           for(ll i=a;i<=b;++i)
#define boost				  ios_base::sync_with_stdio(0);cin.tie(NULL);
#define pb                    push_back
#define eb                    emplace_back
#define F                     first
#define S                     second
#define mp                    make_pair
#define clr(x)                x.clear()
#define MOD                   1e9+7
#define itoc(c)               ((char)(((int)'0')+c))
#define all(p)                p.begin(),p.end()
#define iscn(num)             scanf("%d",&num);
#define scn(num)              scanf("%lld",&num);
#define scn2(num,num2)        scanf("%lld%lld",&num,&num2);
#define dbg(x)                cerr <<"( "<<#x << " = " << x << " )"<<endl
using namespace std;
template<class T >T set_bit(T N,T pos){return N=N | (1<<pos);}
template<class T >T reset_bit(T N,T pos){return N= N & ~(1<<pos);}
template<class T > bool check_bit(T N,T pos){return (bool)(N & (1<<pos));}
template <class T > void max_self(T &a, T b){
	a=max(a,b);
}
template <class T > void min_self(T &a, T b){
	a=min(a,b);
}
////////////////////////

const ll INF = 2e18 + 99;
typedef pair<int,int> Pair;
typedef vector<int> vec;;

void ara_read(vec &v,ll n){
	ll temp;
	for(ll i=0; i< n; i++){
		scanf("%lld",&temp);
		v.emplace_back(temp);
	}
}
void ara_print(vec &v){
	for(ll x : v)
		printf("%lld ",x);
	puts("");
}
////////////////////////
const int nax = 35;
int main()
{
	
	int tcase;
	scanf("%d",&tcase);
	while(tcase--){
		vector< Pair > objects ;
		int numOfobject;
		scanf("%d",&numOfobject);
		// reading object...
		int price,weight;
		for(int i=0; i< numOfobject ; i++){
			scanf("%d%d",&price,&weight);
			objects.eb(price,weight);
		}
		vector<int > personLimit;
		int pL;
		scanf("%d",&pL);
		// reading personLimit...
		ara_read(personLimit,pL);
		
		vector< int > dp(nax);
		/* This is very simple variation of 0-1knapsack problem
		 * This can be solved using dp */
		
		for(auto x : objects){
			for(int i=nax; i>=x.second ;i--){
				max_self(dp[i],dp[i-x.second]+x.first);
			}
			
		}
		// printing the answer...
		int ans=0,cnt;
		for(auto x : personLimit){
			cnt = 0 ;
			for(int i=1; i<= x; i++){
				max_self(cnt,dp[i]);
			}
			ans+=cnt;
		}
		
		printf("%d\n",ans);
	}

	
    return 0;
}
