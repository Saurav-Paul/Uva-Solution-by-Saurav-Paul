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

int main()
{

    FAST_IO();
    ////////////////////////
    ll c,s;
    ll set=0;
    while(cin>>c>>s){
        vll spcmn(2*c,0);
        double total=0;
        for(int i=0,temp; i<s; i++)
            cin>>spcmn[i],total+=spcmn[i];
        sort(all(spcmn),greater<ll>());
        cout<<"Set #"<<++set<<endl;
        double imbalance=0.0;
        total/=c;
        for(int i=0; i<c ; i++){
            cout<<" "<<i<<":";
            bool flag=0;
            if(spcmn[i])
                cout<<" "<<spcmn[i],flag=1;;
            if(spcmn[2*c-i-1]){
                if(flag)
                    cout<<" ";
                cout<<spcmn[2*c-i-1];
            }
            imbalance+=abs((spcmn[2*c-i-1]+spcmn[i])-total);
            cout<<endl;
        }
        cout<<"IMBALANCE = "<<imbalance<<endl<<endl;
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
    cout.setf(ios::fixed);
    cout.precision(5);
    if(rt && file){ tStart = clock(); }
    if(file){
    #ifndef _offline
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    }
}
