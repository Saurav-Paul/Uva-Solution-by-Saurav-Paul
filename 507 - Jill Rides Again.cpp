#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define loop(i,a,b)           for(ll i=a;i<=b;++i)
#define boost				  ios_base::sync_with_stdio(0);cin.tie(NULL);
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

void ara_read(vec &v,ll n){
	ll temp;
	v.emplace_back(0);
	for(ll i=0; i< n; i++){
		scanf("%lld",&temp);
		v.emplace_back(temp+v[i]);
	}
}
void ara_print(vec &v){
	for(ll x : v)
		printf("%lld ",x);
	puts("");
}
////////////////////////

void find_ans(vec &stops , int n, int Case){
	int ans =0, st=INT_MAX, sp=INT_MAX, numOfrides=0;
	bool flag=false;

	loop(i,1,n){
		loop(j,i,n){
			int temp = stops[j]-stops[i-1];
			if(temp>ans){
				ans=temp;
				st=i;
				sp=j+1;
				numOfrides= j-i + 1;
				flag=true;
			}
			if(temp ==  ans ){
				temp= j-i +1 ;
				if(temp>numOfrides){
					numOfrides = temp ;
					st=i;
					sp= j+1;
				}
				else{
					if(st>i){
						st=i;
						sp=j+1;
						
					}
					
				}
			}
		}
	}
	
	if(flag){
		printf("The nicest part of route %d is between stops %d and %d\n",Case,st,sp);
	}else{
		printf("Route %d has no nice parts\n",Case);
	}
	
}

int main()
{
	int tcase;
	scanf("%d",&tcase);
	loop(Case,1,tcase){
		int route;
		scanf("%d",&route);
		vec stops;
		ara_read(stops,route-1);
		
		
		find_ans(stops,route-1,Case);
		
	}

    return 0;
}
