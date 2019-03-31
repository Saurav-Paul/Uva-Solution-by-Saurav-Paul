#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define loop(i,a,b)           for(ll i=a;i<=b;++i)
#define pb                    push_back
#define F                     first
#define S                     second
#define mp                    make_pair
#define clr(x)                x.clear()
#define MOD                   1000000007
#define itoc(c)               ((char)(((int)'0')+c))
#define vl                    vector<ll>
#define SZ(x)                 (x).size()
#define all(p)                p.begin(),p.end()
#define mid(s,e)              (s+(e-s)/2)
#define sv()                  ll t,n; scanf("%lld",&t);n=t; while(t--)
#define tcase()               ll t,n; cin>>t;n=t; while(t--)
#define iscn(num)             scanf("%d",&num);
using namespace std;
typedef pair<ll,ll> Pair;
typedef vector<ll> vll;
bool file=0,rt=0;
clock_t tStart ;
void FAST_IO();
////////////////////////
void printit(vll num,vll rem,ll n,vll pri){
    if(!n) {
        cout<<pri[0];
        for(int i=1,sz=pri.size();i<sz ; i++) cout<<" "<<pri[i];
        cout<<endl;
        return ;}
    for(int i=0,sz=num.size(); i<sz ; i++){
        ll temp=num[i];
        if(rem[temp]){
            rem[temp]=0;
            pri.pb(temp);
            printit(num,rem,n-1,pri);
            // rem[temp]=1;
            pri.pop_back();
        }
    }

}
int main()
{

    FAST_IO();
    ////////////////////////
    ll n;
    bool space=0;
    while(cin>>n && n){
        if(space) cout<<endl;
        space=1;
        vll num,rem(50,1);
        for(int i=0,temp; i<n; i++)
            cin>>temp,num.pb(temp);
        vll pri;
        printit(num,rem,6,pri);
        
    }

    ////////////////////////
    if(rt && file){
     printf("\nTime taken: %.6fs", (double)(clock() - tStart)/CLOCKS_PER_SEC);
    }
    return 0;
   }

void FAST_IO()
{
    ios_base::sync_with_stdio(0);
    //cin.tie(NULL);
    //cout.tie(NULL);
    //cout.setf(ios::fixed);
    //cout.precision(2);
    if(rt && file){ tStart = clock(); }
    if(file){
    #ifndef _offline
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    }
}
