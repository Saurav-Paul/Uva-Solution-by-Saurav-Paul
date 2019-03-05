#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define loop(a,b)             for(int i=a;i<=b;++i)
#define pb                    push_back
#define F                     first
#define S                     second
#define mp                    make_pair
#define clr(x)                x.clear()
#define MOD                   1000000007
#define itoc(c)               ((char)(((int)'0')+c))
#define vi                    vector<int>
#define all(p)                p.begin(),p.end()
#define mid(s,e)              (s+(e-s)/2)
#define sv()                  ll t,n; scanf("%lld",&t);n=t; while(t--)
#define tcase()               ll t,n; cin>>t;n=t; while(t--)
#define iscn(num)             scanf("%d",&num);
using namespace std;
bool file=0,rt=0;
clock_t tStart ;
void FAST_IO();
////////////////////////
ll gcd(ll a, ll b){
    if(b==0)
        return a;
    return gcd(b,a%b);
}
int main()
{

    FAST_IO();
    ////////////////////////
    ll tcase;
    cin>>tcase;
    string line;
    getline(cin,line);
    while(tcase--){

        getline(cin,line);
        
        std::vector<ll> num;
        stringstream ss(line);
        ll number;
        while(ss>>number){
            num.pb(number);
        }
        ll ans=0;
        ll sz=num.size();
        for(int i=0;i<sz-1;i++)
            for(int j=i+1;j<sz;j++)
                ans=max(ans,gcd(num[i],num[j]));

        cout<<ans<<endl;

    }    


    ////////////////////////
    if(rt && file){
     printf("\nTime taken: %.6fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
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
