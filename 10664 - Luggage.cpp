#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define loop(i,a,b)           for(ll i=a;i<=b;++i)
#define boost				  ios_base::sync_with_stdio(0);
#define pb                    push_back
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
typedef pair<ll,ll> Pair;
typedef vector<int> vec;;

int ara_read(vec &v,string s){
	int total=0;
	stringstream ss;
	ss << s;
	string temp;
	int found;
	while(!ss.eof()){
		ss >> temp;
		if(stringstream(temp) >> found){
			v.emplace_back(found); total+=found ;
		}
		temp="";
	}
	return total;
}
void ara_print(vec &v){
	for(ll x : v)
		printf("%lld ",x);
	puts("");
}
////////////////////////

int main()
{
	boost;
	int tcase; cin>>tcase;
	string s;
	getline(cin,s);
	while(tcase--){
		getline(cin,s);
		vec num;
		int total=ara_read(num,s);
		//~ ara_print(num);
		/*This is one very easy 01-knapsack dp variation*/
		if(total&1){
			puts("NO");
			continue ;
		}
		int half=total/2;
		vector < int > dp(half+1);
		dp[0]=1;
		for(auto x : num ){
			for(int i=half; i>=x ; i--){
				if(dp[i-x]){
					dp[i] = 1;
				}
			}
			
		}
		puts(dp[half]?"YES" : "NO");
		
	}
	
	
    return 0;
}
