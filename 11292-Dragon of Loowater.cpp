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
#define SZ(x)                 (x).size()
#define all(p)                p.begin(),p.end()
#define mid(s,e)              (s+(e-s)/2)
#define tcase()               ll t,n; cin>>t;n=t; while(t--)
#define iscn(num)             scanf("%d",&num);
using namespace std;
typedef pair<ll,ll>Pair;
bool file=0,rt=0;
clock_t tStart ;
void FAST_IO();
////////////////////////

int main()
{

    FAST_IO();
    ////////////////////////
    ll n, m;
    while(cin>>n>>m && (n || m)){
            std::vector<ll> heads;
            std::vector<ll> knights;

            for(int i=0; i< n; i++){
                ll temp;
                cin>>temp;
                heads.pb(temp);
            }
            sort(all(heads));
            for(int i=0; i< m ; i++){
                ll temp;
                cin>>temp;
                knights.pb(temp);
            }
            sort(all(knights));
            ll sz=SZ(knights);
            ll gold=0,j=0;
            for(int i=0; i<sz ; i++){
                

                if(heads[j]<=knights[i]){
                    j++;
                    gold+=knights[i];
                }
                if(j==n){
                    
                    break ;
                }
            }
            if(j==n)
                cout<<gold<<endl;
            
            else
                cout<<"Loowater is doomed!"<<endl;
                

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
